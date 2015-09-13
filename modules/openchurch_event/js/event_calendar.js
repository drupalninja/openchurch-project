/**
 * @file
 */

(function ($) {

  /**
   * FullCalendar behavior.
   */
  Drupal.behaviors.fullCalendar = {
    attach: function (context, settings) {
      var $url = settings.path.baseUrl;
      $('#calendar').fullCalendar({
        events: $url + 'events/calendar.json'
      });
    }
  };

})(jQuery);
