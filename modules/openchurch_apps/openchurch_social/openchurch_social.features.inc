<?php
/**
 * @file
 * openchurch_social.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openchurch_social_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
