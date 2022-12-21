## Overview
This composer project is used for testing the OpenChurch install profile for Drupal 10+.

## Quick start

1. **Enable DDEV**

   ```shell
   ddev start
   ```
   
2. **Install Composer**

   ```shell
   ddev composer install
   ```

3. **Install Standard install profile**

   ```shell
   ddev . drush si -y
   ```

2. **Enable the OpenChurch Core module**

   ```shell
   ddev . drush en -y openchurch_core
   ```

3. **Enable the OpenChurch Themee**

   ```shell
   ddev . drush theme:enable openchurch_theme
   ddev . drush config-set -y system.theme default openchurch_theme
   ```

4. **Login to test**

   ```shell
   ddev . drush uli
   ```
