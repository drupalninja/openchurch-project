<?php
/**
 * @file
 * openchurch_defaults.features.block.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openchurch_defaults_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Contact Us Bottom Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oc_block_contact_bottom';
  $fe_block_boxes->body = '<p><img style="float: right;" src="/profiles/openchurch/images/phone.png" alt="" /><span style="font-size: x-large;"><span style="color: #4a7470;">123-456-7890</span></span><br /><a href="#">info@openchurchsite.com</a><br /><strong>OpenChurch</strong><br />1234 Belt Line Rd<br />Dallas, TX 75000</p>';

  $export['oc_block_contact_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'View Maps and Directions Sidebar Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'oc_block_directions_sidebar';
  $fe_block_boxes->body = '<p><a href="/about/map-and-directions">View Maps and Directions</a></p>';

  $export['oc_block_directions_sidebar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Location & Directions Bottom Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oc_block_location_bottom';
  $fe_block_boxes->body = '<p><img style="float: right;" src="/profiles/openchurch/images/location-google-map.jpg" alt="" width="150" height="115" />We\'re located on Belt Line Rd., just south of Downtown.</p>';

  $export['oc_block_location_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Weekly Meeting Times Bottom Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oc_block_times_bottom';
  $fe_block_boxes->body = '<p><img style="float: right;" src="/profiles/openchurch/images/clock.png" alt="" /><strong>Sundays</strong> - 8:30, 9:45, 10:50 am<br /><strong>Bible Classes</strong> - Sunday Events<br /><strong>LIFE Groups</strong> - Sunday Evenings<br /><strong>Wednesday Evening</strong> - 7 pm<br /><a href="/about/time-and-locations"><strong>View More Details</strong></a></p>';

  $export['oc_block_times_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Weekly Meeting Times Sidebar Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'oc_block_times_sidebar';
  $fe_block_boxes->body = '<p><strong>Sundays</strong> - 8:30, 9:45, 10:50 am<br /><strong>Bible Classes</strong> - Sunday Events<br /><strong>LIFE Groups</strong> - Sunday Evenings<br /><strong>Wednesday Evening</strong> - 7 pm<br /><a href="/about/time-and-locations"><strong>View More Details</strong></a></p>';

  $export['oc_block_times_sidebar'] = $fe_block_boxes;

  return $export;
}
