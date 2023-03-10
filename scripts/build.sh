#!/bin/bash

## Install OpenChurch.
ddev . drush si -y --site-name=OpenChurch && ddev . drush en -y openchurch_core && ddev . drush theme:enable openchurch_theme && ddev . drush config-set -y system.theme default openchurch_theme

## Output the login link.
ddev . drush uli
