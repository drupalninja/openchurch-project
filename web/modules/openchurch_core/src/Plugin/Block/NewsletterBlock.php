<?php

namespace Drupal\openchurch_core\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Provides a newsletter block.
 *
 * @Block(
 *   id = "openchurch_core_newsletter",
 *   admin_label = @Translation("Newsletter"),
 *   category = @Translation("OpenChurch")
 * )
 */
class NewsletterBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return [
      'action' => 'https://formspree.io/f/{form id}',
      'title' => 'Subscribe To Our Newsletter',
      'description' => 'Subcribe Us And Tell Us About Your Story',
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function blockForm($form, FormStateInterface $form_state) {
    $form['action'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Newsletter form action'),
      '#default_value' => $this->configuration['action'],
      '#description' => $this->t('The action attribute of the form. Third party services like Formspree.io can be used as the form action.'),
    ];
    $form['title'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Newsletter block title'),
      '#default_value' => $this->configuration['title'],
    ];
    $form['description'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Newsletter block description.'),
      '#default_value' => $this->configuration['description'],
    ];
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $this->configuration['action'] = $form_state->getValue('action');
    $this->configuration['title'] = $form_state->getValue('title');
    $this->configuration['description'] = $form_state->getValue('description');
  }

  /**
   * {@inheritdoc}
   */
  public function build() {
    $build = [
      '#theme' => 'openchurch_core_newsletter',
      '#action' => $this->configuration['action'],
      '#title' => $this->configuration['title'],
      '#description' => $this->configuration['description'],
    ];

    $build['#cache']['max-age'] = 0;

    return $build;
  }

}
