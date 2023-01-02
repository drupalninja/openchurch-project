/**
 * @file
 * OpenChurch Theme behaviors.
 */
(function (Drupal) {

  'use strict';

  Drupal.behaviors.openchurchTheme = {
    attach: function (context, settings) {
      document.addEventListener("scroll", (event) => {
        let scroll = window.scrollY;
        if (scroll > 50) {
          document.querySelector('.sticky-top').classList.add('scrolled');
          document.querySelector('.toolbar-tab .toolbar-tray-horizontal').classList.remove('is-active');
        } else {
          document.querySelector('.sticky-top').classList.remove('scrolled');
          document.querySelector('.toolbar-tab .toolbar-tray-horizontal').classList.add('is-active');
        }
      });
    }
  };

} (Drupal));
