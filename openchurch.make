api = 2
core = 7.0
projects[drupal][type] = core
projects[addressfield][subdir] = contrib
projects[admin][subdir] = contrib
projects[apps][subdir] = contrib
projects[backup_migrate][subdir] = contrib
projects[captcha][subdir] = contrib
projects[cck][subdir] = contrib
projects[content_taxonomy][subdir] = contrib
projects[context][subdir] = contrib
projects[ctools][subdir] = contrib
projects[date][subdir] = contrib
projects[defaultcontent][subdir] = contrib
projects[email][subdir] = contrib
projects[entity][subdir] = contrib
projects[features][subdir] = contrib
projects[features_extra][subdir] = contrib
projects[file_entity][subdir] = contrib
projects[filefield_sources][subdir] = contrib
projects[fusion_accelerator][subdir] = contrib
projects[google_fonts][subdir] = contrib
projects[imce][subdir] = contrib
projects[imce_wysiwyg][subdir] = contrib
projects[libraries][subdir] = contrib
projects[lightbox2][subdir] = contrib
projects[link][subdir] = contrib
projects[media][subdir] = contrib
projects[media_vimeo][subdir] = contrib
projects[media_youtube][subdir] = contrib
projects[menu_breadcrumb][subdir] = contrib
projects[metatag][subdir] = contrib
projects[nodequeue][subdir] = contrib
projects[page_title][subdir] = contrib
projects[panels][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[recaptcha][subdir] = contrib
projects[references][subdir] = contrib
projects[references][version] = 2.x-dev
projects[references_dialog][subdir] = contrib
projects[rules][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[styles][subdir] = contrib
projects[superfish][subdir] = contrib
projects[token][subdir] = contrib
projects[uuid][subdir] = contrib
projects[views][subdir] = contrib
projects[views_bulk_operations][subdir] = contrib
projects[views_php][subdir] = contrib
projects[views_slideshow][subdir] = contrib
projects[webform][subdir] = contrib
projects[wysiwyg][subdir] = contrib

; Base theme for OpenChurch
projects[fusion][type] = "theme"

; Alternative base theme for OpenChurch
projects[mix_and_match][type] = "theme"

; Custom theme developed for OpenChurch (get latest)
projects[openchurch_theme][type] = "theme"

; Libraries

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

libraries[superfish][download][type] = "get"
libraries[superfish][download][url] = "http://dl.dropbox.com/u/22795799/superfish-library-for-drupal-v1.1.zip"
libraries[superfish][directory_name] = "superfish"

libraries[jquery.cycle][type] = "libraries"
libraries[jquery.cycle][download][type] = "file"
libraries[jquery.cycle][download][url] = "https://raw.github.com/malsup/cycle/master/jquery.cycle.all.js"