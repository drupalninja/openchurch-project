api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.15
;Apply core fixed from http://drupal.org/node/1785696, see http://drupal.org/node/1400256
projects[drupal][patch][] = http://drupal.org/files/field_info_collate_fields-1400256-25.patch