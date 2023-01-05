<?php

namespace Drupal\openchurch_core\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Provides a newsletter block.
 *
 * @Block(
 *   id = "openchurch_core_map",
 *   admin_label = @Translation("Map"),
 *   category = @Translation("OpenChurch")
 * )
 */
class MapBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return [
      'script' => '<iframe src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d1575.9186034720387!2d144.95541222452604!3d-37.817281929786624!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x6ad642c9a8d8495f%3A0xedc33f230d1355b1!2sEnvato+Pty+Ltd!5e0!3m2!1sen!2sin!4v1407063773571" height="260"></iframe>',
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function blockForm($form, FormStateInterface $form_state) {
    $form['script'] = [
      '#type' => 'textarea',
      '#title' => $this->t('Map embed script'),
      '#default_value' => $this->configuration['script'],
      '#description' => $this->t('Paste the embed script from Google Maps here.'),
    ];
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $this->configuration['script'] = $form_state->getValue('script');
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $build = [
      '#theme' => 'openchurch_core_map',
      '#script' => $this->configuration['script'],
    ];

    $build['#cache']['max-age'] = 0;

    return $build;
  }

}
