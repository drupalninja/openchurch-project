<?php

namespace Drupal\openchurch_core\Plugin\Block;

use Drupal\Core\Block\BlockBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Provides a footer block.
 *
 * @Block(
 *   id = "openchurch_core_map",
 *   admin_label = @Translation("Footer"),
 *   category = @Translation("OpenChurch")
 * )
 */
class FooterBlock extends BlockBase {

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return [
      'footer_col1' => [
        'value' => '<h5>About the Church</h5><p>For the word of God is living and active. Sharper than any double-edged sword, it penetrates even to dividing soul and spirit, joints and marrow; it judges the thoughts and attitudes.</p>',
        'format' => 'full_html'
      ],
      'footer_col2' => [
        'value' => '<h5>Quick Links</h5><ul class="list-unstyled"><li><a href="#" class="text-decoration-none">Upcoming events</a></li><li><a href="#" class="text-decoration-none">Ministries</a></li><li><a href="#" class="text-decoration-none">Recent Sermons</a></li><li><a href="#" class="text-decoration-none">Contact us</a></li></ul>',
        'format' => 'full_html'
      ],
      'footer_col3' => [
        'value' => '<h5>Our Address</h5><p> Catholic Church<br />121 King Street, Melbourne <br />Victoria 3000 Australia<br /><br />Phone: +61 3 8376 6284<br />Email: <a href="#">mail@catholicwebsite.com</a></p>',
        'format' => 'full_html'
      ],
      'footer_connect' => TRUE,
      'footer_facebook' => 'https://facebook.com/',
      'footer_twitter' => 'https://twitter.com/',
      'footer_youtube' => 'https://youtube.com/',
      'footer_instagram' => 'https://instagram.com/',
    ];
  }

  /**
   * {@inheritdoc}
   */
  public function blockForm($form, FormStateInterface $form_state) {
    for ($c = 1; $c <= 3; $c++) {
      $footer_setting = $this->configuration['footer_col' . $c];
      $form['footer_col' . $c] = [
        '#type' => 'text_format',
        '#title' => t('Footer Column #' . $c),
        '#rows' => 2,
        '#default_value' => $footer_setting['value'],
        '#format' => $footer_setting['format'],
        '#description' => t('Set content for footer column (leave blank to hide).'),
      ];
    }

    // Show Connect column.
    $form['footer_connect'] = [
      '#type' => 'checkbox',
      '#title' => t('Show Social column?'),
      '#default_value' => $this->configuration['footer_connect'],
      '#description' => t('Show "Connect" column in footer.'),
    ];

    $form['footer_facebook'] = [
      '#type' => 'textfield',
      '#title' => t('Facebook URL'),
      '#default_value' => $this->configuration['footer_facebook'],
      '#description' => t('Facebook URL.'),
    ];

    $form['footer_twitter'] = [
      '#type' => 'textfield',
      '#title' => t('Twitter URL'),
      '#default_value' => $this->configuration['footer_twitter'],
      '#description' => t('Twitter URL.'),
    ];

    $form['footer_youtube'] = [
      '#type' => 'textfield',
      '#title' => t('YouTube URL'),
      '#default_value' => $this->configuration['footer_youtube'],
      '#description' => t('YouTube URL.'),
    ];

    $form['footer_instagram'] = [
      '#type' => 'textfield',
      '#title' => t('Instagram URL'),
      '#default_value' => $this->configuration['footer_instagram'],
      '#description' => t('Instagram URL.'),
    ];

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function blockSubmit($form, FormStateInterface $form_state) {
    $this->configuration['footer_col1'] = $form_state->getValue('footer_col1');
    $this->configuration['footer_col2'] = $form_state->getValue('footer_col2');
    $this->configuration['footer_col3'] = $form_state->getValue('footer_col3');
    $this->configuration['footer_connect'] = $form_state->getValue('footer_connect');
    $this->configuration['footer_facebook'] = $form_state->getValue('footer_facebook');
    $this->configuration['footer_twitter'] = $form_state->getValue('footer_twitter');
    $this->configuration['footer_instagram'] = $form_state->getValue('footer_instagram');
    $this->configuration['footer_youtube'] = $form_state->getValue('footer_youtube');
  }

  /**
   * {@inheritdoc}
   */
  public function build() {

    $build = [];
    $build['#theme'] = 'openchurch_core_footer';

    for ($c = 1; $c <= 3; $c++) {
      $footer_setting = $this->configuration['footer_col' . $c];
      $build['#footer_col' . $c] = $footer_setting['value'];
    }

    $build['#footer_connect'] = $this->configuration['footer_connect'];
    $build['#footer_facebook'] = $this->configuration['footer_facebook'];
    $build['#footer_twitter'] = $this->configuration['footer_twitter'];
    $build['#footer_instagram'] = $this->configuration['footer_instagram'];
    $build['#footer_youtube'] = $this->configuration['footer_youtube'];

    $build['#cache']['max-age'] = 0;

    return $build;
  }

}
