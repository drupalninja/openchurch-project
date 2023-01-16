#!/bin/bash

## Install OpenChurch.
ddev . drush si -y --site-name=OpenChurch && ddev . drush en -y openchurch_core && ddev . drush theme:enable openchurch_theme && ddev . drush config-set -y system.theme default openchurch_theme

## Delete all content.
ddev . drush entity:delete node

## Create min content.
ddev . drush scr scripts/create-min-content.php

## Run cron to ensure all content is indexed.
ddev . drush cron

## Output the login link.
ddev . drush uli
