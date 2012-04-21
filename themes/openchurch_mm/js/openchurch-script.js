Drupal.behaviors.openchurchEqualheights = function (context) {
  //adding equal heights to content-inner
  if (jQuery().equalHeights) {
    $("#content-inner div.equal-heights div.content").equalHeights();
  }

  //adds rounded corners via js for IE
  $('.rounded-corners .inner, .rounded-corners .pane-content').corner(".3em");
}