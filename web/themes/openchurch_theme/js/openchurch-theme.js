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
        if (scroll > 30) {
          document.querySelector('.sticky-top').classList.add('scrolled');
        } else {
          document.querySelector('.sticky-top').classList.remove('scrolled');
        }
      });
    }
  };

} (Drupal));
