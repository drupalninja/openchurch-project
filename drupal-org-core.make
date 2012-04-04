api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.12
;Apply core fixed from http://drupal.org/node/1245332, see http://drupal.org/node/1493626#comment-5824436
projects[drupal][patch][] = http://drupal.org/files/field_info_instances_fix_returns-1245332-14-7.x_0.patch