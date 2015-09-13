<?php
/**
 * @file
 * Enables modules and site configuration for a openchurch site installation.
 */

use Drupal\contact\Entity\ContactForm;
use Drupal\Core\Form\FormStateInterface;

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function openchurch_form_install_configure_form_alter(&$form, FormStateInterface $form_state) {
  // Add a placeholder as example that one can choose an arbitrary site name.
  $form['site_information']['site_name']['#attributes']['placeholder'] = t('My site');
  $form['#submit'][] = 'openchurch_form_install_configure_submit';
}

/**
 * Implements hook_form_FORM_ID_alter() for search_block_form().
 *
 * Allows the profile to alter the search block form.
 */
function openchurch_form_search_block_form_alter(&$form, FormStateInterface $form_state) {
  $form['keys']['#attributes']['placeholder'] = t('Search');
}

/**
 * Submission handler to sync the contact.form.feedback recipient.
 */
function openchurch_form_install_configure_submit($form, FormStateInterface $form_state) {
  $site_mail = $form_state->getValue('site_mail');
  ContactForm::load('feedback')->setRecipients([$site_mail])->trustData()->save();
}

/**
 * Implements hook_menu_links_discovered_alter().
 */
function openchurch_menu_links_discovered_alter(&$links) {
  // Force all links to show as expanded.
  foreach ($links as $id => $link) {
    $links[$id]['expanded'] = 1;
  }
}

/**
 * Implements hook_entity_update().
 */
function openchurch_entity_update(Drupal\Core\Entity\EntityInterface $entity) {
  _openchurch_node_auto_alias($entity);
}

/**
 * Implements hook_entity_insert().
 */
function openchurch_entity_insert(Drupal\Core\Entity\EntityInterface $entity) {
  _openchurch_node_auto_alias($entity);
}

/**
 * OpenChurch node auto-alias patterns.
 *
 * @param \Drupal\Core\Entity\EntityInterface $entity
 */
function _openchurch_node_auto_alias(Drupal\Core\Entity\EntityInterface $entity) {
  $aliases = array(
    'ministry' => '/ministry/',
    'gallery' => '/media/gallery/',
    'video' => '/media/video/',
    'podcast' => '/media/podcast/',
    'event' => '/event/',
    'charity' => '/give/',
    'staff' => '/staff/',
    'page' => '/page/',
    'blog' => '/blog/',
  );

  foreach ($aliases as $node_type => $node_alias_path) {
    if ($entity->bundle() == $node_type) {
      $nid = $entity->id();

      // Get the node title.
      $title = $entity->title->getValue()[0]['value'];
      // Convert node title to machine path.
      $alias = $machine_name = _openchurch_clean_alias($title);

      $c = 0;

      // Look for existing alias.
      do {
        $alias_exists = db_query('SELECT pid FROM {url_alias}
          WHERE alias = :alias AND source != :source',
          array(
            ':alias' => $node_alias_path . $alias,
            ':source' => '/node/' . $nid
          )
        )->fetchColumn();

        // If alias exists, increment.
        if ($alias_exists) {
          $alias = $machine_name . '-' . $c++;
        }
        else {
          break;
        }
      } while ($alias_exists);

      $path = \Drupal::service('path.alias_storage')
        ->save('/node/' . $nid, $node_alias_path . $alias);
    }
  }
}

/**
 * OpenChurch clean alias.
 *
 * @param string $text
 * @return string
 *   Return machine name for text.
 */
function _openchurch_clean_alias($text) {
  return preg_replace('/\-+/', '-', strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '', str_replace(' ', '-', $text))));
}

/**
 * Implements hook_page_attachments_alter().
 */
function openchurch_page_attachments_alter(&$page) {
  // Define path pairings we want activated.
  // @todo Add a settings page to configure paths.
  $path_settings = array(
    array(
      'path' => 'ministry/',
      'parent_path' => 'ministries',
    ),
    array(
      'path' => 'media/gallery/',
      'parent_path' => 'media/galleries',
    ),
    array(
      'path' => 'media/video/',
      'parent_path' => 'media/video',
    ),
    array(
      'path' => 'media/podcast/',
      'parent_path' => 'media/podcasts',
    ),
    array(
      'path' => 'event/',
      'parent_path' => 'events',
    ),
    array(
      'path' => 'give/',
      'parent_path' => 'give',
    ),
    array(
      'path' => 'staff/',
      'parent_path' => 'about/staff',
    ),
    array(
      'path' => 'blog/',
      'parent_path' => 'blog',
    )
  );

  // Add path settings to allow theme to update active menu items.
  $page['#attached']['drupalSettings']['openchurch']['path_mappings'] = $path_settings;
}
