<?php

/**
 * @file
 * Contains \Drupal\openchurch_homepage\Plugin\Block\OpenChurchHomepageFeatured.
 */

namespace Drupal\openchurch_homepage\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Url;
use Drupal\image\Entity\ImageStyle;

/**
 * Provides a block for featuring content on the OpenChurch homepage.
 *
 * @Block(
 *   id = "openchurch_homepage_featured",
 *   admin_label = @Translation("OpenChurch Homepage Featured")
 * )
 */
class OpenChurchHomepageFeatured extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function blockForm($form, FormStateInterface $form_state) {
    $form['featured'] = array(
      '#type' => 'details',
      '#title' => t('Homepage Featured content'),
      '#open' => TRUE,
    );

    for ($c = 1; $c <= 3; $c++) {
      $form['featured']['item' . $c] = array(
        '#type' => 'details',
        '#title' => t('Item #' . $c),
        '#open' => TRUE,
      );

      $file = $fid = NULL;
      $file_uuid = $this->configuration['featured_image' . $c];
      if (!empty($file_uuid)) {
        $fid = db_query("SELECT fid FROM {file_managed}
          WHERE uuid = :uuid", array(':uuid' => $file_uuid))->fetchColumn();
      }
      $link = $this->configuration['featured_link' . $c];

      // Add preview image.
      if (!empty($fid)) {
        $file = !empty($fid) ? file_load($fid) : NULL;
        $url = ImageStyle::load('thumbnail')->buildUrl($file->getFileUri());
        $image = '<img src="' . $url . '" title="' . $file->name . '" width="100" />';
      }

      $form['featured']['item' . $c]['image' . $c] = array(
        '#type' => 'managed_file',
        '#title' => t('Current Image'),
        '#required' => TRUE,
        '#field_prefix' => !empty($file) ? $image : NULL,
        '#description' => t('Image to be shown if no image is uploaded.'),
        '#default_value' => !empty($fid) ? array($fid) : NULL,
        '#upload_location' => 'public://oc_homepage/',
      );

      $form['featured']['item' . $c]['link' . $c] = array(
        '#type' => 'textfield',
        '#title' => t('Link'),
        '#required' => FALSE,
        '#default_value' => !empty($link) ? array($link) : NULL,
      );
    }

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $values = $form_state->getValues();
    for ($c = 1; $c <= 3; $c++) {
      if (!empty($values['featured']['item' . $c]['image' . $c][0])) {
        $fid = $values['featured']['item' . $c]['image' . $c][0];
        $file_uuid = db_query("SELECT uuid FROM {file_managed} WHERE fid = :fid", array(':fid' => $fid))->fetchColumn();
        $this->configuration['featured_image' . $c] = $file_uuid;
        $this->configuration['featured_link' . $c] = $values['featured']['item' . $c]['link' . $c];
        $file_usage = \Drupal::service('file.usage');
        $file = file_load($fid);
        // Update usage.
        $file_usage->delete($file, 'openchurch_homepage', 'featured_item', $c);
        $file_usage->add($file, 'openchurch_homepage', 'featured_item', $c);
      }
      else {
        $this->configuration['featured_image' . $c] = NULL;
        $this->configuration['featured_link' . $c] = NULL;
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $content = '';

    for ($c = 1; $c <= 3; $c++) {
      $file_uuid = $this->configuration['featured_image' . $c];
      $fid = db_query("SELECT fid FROM {file_managed} WHERE uuid = :uuid", array(':uuid' => $file_uuid))->fetchColumn();
      $link = $this->configuration['featured_link' . $c];
      $file = file_load($fid);

      if (!empty($file)) {
        $style = entity_load('image_style', 'homepage_thumb');
        $image = array(
          '#theme' => 'image',
          '#uri' => $style->buildUrl($file->getFileUri()),
        );

        if (!empty($link)) {
          $url = Url::fromUri($link);
          $content .= '<li>' . \Drupal::l(drupal_render($image), $url) . '</li>';
        }
        else {
          $content .= '<li>' . drupal_render($image) . '</li>';
        }
      }
    }

    if ($content) {
      $content = '<ul>' . $content . '</ul>';
    }

    return array(
      '#type' => 'markup',
      '#markup' => $content,
    );
  }

}
