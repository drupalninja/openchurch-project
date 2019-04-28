/**
 * @file
 * Preview for the OpenChurch theme.
 */
(function ($, Drupal, drupalSettings) {

  "use strict";

  Drupal.color = {
    logoChanged: false,
    callback: function (context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', drupalSettings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off.
      if (drupalSettings.color.logo === null) {
        $('div').remove('#preview-logo');
      }

      // Main menu.
      form.find('#preview-main-menu-links li.active a').css('border-top-color', form.find('.js-color-palette input[name="palette[menuitem]"]').val());

      // Solid background.
      form.find('#preview').css('backgroundColor', $('.js-color-palette input[name="palette[bg]"]').val());

      // Text preview.
      form.find('#preview #preview-main h2, #preview .preview-content').css('color', form.find('.js-color-palette input[name="palette[text]"]').val());
      form.find('#preview #preview-content a').css('color', form.find('.js-color-palette input[name="palette[link]"]').val());

      // Sidebar block.
      form.find('#preview #preview-sidebar #preview-block').css('background-color', form.find('.js-color-palette input[name="palette[sidebar]"]').val());
      form.find('#preview #preview-sidebar #preview-block h2').css('background-color', form.find('.js-color-palette input[name="palette[sidebartitlebg]"]').val());
      form.find('#preview #preview-sidebar #preview-block h2').css('color', form.find('.js-color-palette input[name="palette[sidebartitletext]"]').val());

      // Footer wrapper background.
      form.find('#preview #preview-footer-wrapper').css('background-color', form.find('.js-color-palette input[name="palette[footer]"]').val());

      // CSS3 Gradients.
      var gradient_start = form.find('.js-color-palette input[name="palette[top]"]').val();
      var gradient_end = form.find('.js-color-palette input[name="palette[bottom]"]').val();

      form.find('#preview #preview-header').attr('style', "background-color: " + gradient_start + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_start + "), to(" + gradient_end + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_start + ", " + gradient_end + ");");
      form.find('#preview #preview-site-name, #preview-main-menu-links a').css('color', form.find('.js-color-palette input[name="palette[titleslogan]"]').val());

      form.find('.tripych-block h2').css('background-color', form.find('.js-color-palette input[name="palette[contentblocktitlebg]"]').val());
      form.find('.tripych-block h2').css('color', form.find('.js-color-palette input[name="palette[contentblocktitletext]"]').val());
    }
  };
})(jQuery, Drupal, drupalSettings);
