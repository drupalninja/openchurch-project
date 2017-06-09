/**
 * @file
 *
 * Javascript functionality for OpenChurch platform.
 */

(function ($) {

  // Add fitvids to all videos.
  Drupal.behaviors.openchurchFitVids = {
    attach: function (context, settings) {
      $('.node--type-video').fitVids();
    }
  };

  // Add auto-submit to OpenChurch Views exposed forms.
  Drupal.behaviors.openchurchAutoSubmit = {
    attach: function (context, settings) {
      $('.openchurch-events-list .views-exposed-form .form-select, ' +
        '.openchurch-latest-blogs-list .views-exposed-form .form-select').change(function () {
        $(this).closest('.views-exposed-form').find('.form-submit').click();
      });
    }
  };

  // Activate submenu items on touch.
  Drupal.behaviors.mobileMenuHover = {
    attach: function (context, settings) {
      // Expand menu the first time it is clicked/touched.
      $('.region-primary-menu .menu li.menu-item--expanded').bind('touchstart click', function() {
        var menu = $(this).find('.menu:hidden');
        if (menu.length) {
          menu.show();
          return false;
        }
      });
    }
  }

  // Set active menu items based on Paths.
  Drupal.behaviors.setActivePaths = {
    attach: function (context, settings) {
      if (context == document) {
        var path_mappings = settings.openchurch.path_mappings;
        var current_path = $('link[rel=canonical]').attr('href');

        // Go through each path mapping and if there is a match, set the menu item to active.
        if (current_path !== undefined) {
          $.each(path_mappings, function (index, obj) {
            if (current_path.match(settings.path.baseUrl + obj.path)) {
              $('a[data-drupal-link-system-path="' + obj.parent_path + '"]')
                .addClass('is-active').closest('.menu-item--expanded')
                .addClass('menu-item--active-trail');
              return false;
            }
          });
        }
      }
    }
  }

  // Handle long site names.
  Drupal.behaviors.siteNameFitText = {
    attach: function (context, settings) {
      if (context == document) {
        // Adjust text size if we have a long title.
        if ($('#name-and-slogan a span').text().length > 19) {
          $('#name-and-slogan a span').attr('style', 'font-size: .6em;');
        }
        else if ($('#name-and-slogan a span').text().length > 14) {
          $('#name-and-slogan a span').attr('style', 'font-size: .7em;');
        }
      }
    }
  };

})(jQuery);
