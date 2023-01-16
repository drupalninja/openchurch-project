#!/bin/bash

## Install OpenChurch.
ddev . drush si -y --site-name=OpenChurch && ddev . drush en -y openchurch_core && ddev . drush theme:enable openchurch_theme && ddev . drush config-set -y system.theme default openchurch_theme

## Delete all nodes.
ddev . drush entity:delete node

## Enable devel and devel_generate.
ddev . drush en -y devel devel_generate

## Create dummy content for testing.
ddev . drush devel-generate:content 100

## Output the login link.
ddev . drush uli
