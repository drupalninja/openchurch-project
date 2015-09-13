<?php

/**
 * @file
 * Contains \Drupal\openchurch\Plugin\Block\OpenChurchShare.
 */

namespace Drupal\openchurch\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Url;

/**
 * Provides a block for sharing content from OpenChurch.
 *
 * @Block(
 *   id = "openchurch_share",
 *   admin_label = @Translation("OpenChurch Share")
 * )
 */
class OpenChurchShare extends BlockBase {

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
    $publisher_key = \Drupal::configFactory()->get('openchurch.settings')->get('sharethis_publisher_key');
    $form['publisher_key'] = array(
      '#type' => 'textfield',
      '#title' => t('ShareThis Publisher Key'),
      '#required' => TRUE,
      '#default_value' => !empty($publisher_key) ? $publisher_key : NULL,
      '#description' => t('Add your publisher key from http://sharethis.com/.'),
    );

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Update ShareThis settings'),
    );

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $values = $form_state->getValues();
    \Drupal::configFactory()->getEditable('openchurch.settings')
      ->set('sharethis_publisher_key',$values['publisher_key'])
      ->save();
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $url = Url::fromRoute('<current>')->toString();
    $content = '<div class="sharethis-wrapper"><span st_url="' . $url . '" st_title="" class="st_twitter_large" displayText="twitter"></span>
      <span st_url="' . $url . '" st_title="" class="st_facebook_large" displayText="facebook"></span>
      <span st_url="' . $url . '" st_title="" class="st_googleplus_large" displayText="googleplus"></span>
      <span st_url="' . $url . '" st_title="" class="st_sharethis_large" displayText="sharethis"></span>
      </div>';

    return array(
      '#type' => 'markup',
      '#markup' => $content,
    );
  }

}
