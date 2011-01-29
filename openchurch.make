api = 2
core = 6.x
projects[] = drupal
projects[admin_menu][subdir] = contrib
projects[adminrole][subdir] = contrib
projects[backup_migrate][subdir] = contrib
projects[better_formats][subdir] = contrib
projects[calendar][subdir] = contrib
projects[cck][subdir] = contrib
projects[content_taxonomy][subdir] = contrib
projects[context][subdir] = contrib
projects[ctools][subdir] = contrib
projects[date][subdir] = contrib
projects[email][subdir] = contrib
projects[features][subdir] = contrib
projects[features_extra][subdir] = contrib
projects[filefield][subdir] = contrib
projects[filefield_sources][subdir] = contrib
projects[globalredirect][subdir] = contrib
projects[google_analytics][subdir] = contrib
projects[google_fonts][subdir] = contrib
projects[imageapi][subdir] = contrib
projects[imagecache][subdir] = contrib
projects[imagefield][subdir] = contrib
projects[imce][subdir] = contrib
projects[imce_wysiwyg][subdir] = contrib
projects[itunes][subdir] = contrib
projects[jquery_ui][subdir] = contrib
projects[lightbox2][subdir] = contrib
projects[link][subdir] = contrib
projects[location][subdir] = contrib
projects[menu_breadcrumb][subdir] = contrib
projects[menu_editor][subdir] = contrib
projects[module_filter][subdir] = contrib
projects[nodequeue][subdir] = contrib
projects[panels][subdir] = contrib
projects[page_title][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[pathologic][subdir] = contrib
projects[recaptcha][subdir] = contrib
projects[skinr][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[swftools][subdir] = contrib
projects[token][subdir] = contrib
projects[unlimited_css][subdir] = contrib
projects[vertical_tabs][subdir] = contrib
projects[views][subdir] = contrib
projects[views_bulk_operations][subdir] = contrib
projects[views_customfield][subdir] = contrib
projects[views_slideshow][subdir] = contrib
projects[webform][subdir] = contrib
projects[wysiwyg][subdir] = contrib

; Base theme for OpenChurch
projects[fusion][type] = "theme"
projects[fusion][version] = "1.0"

; Custom theme developed for OpenChurch
projects[openchurch_theme][version] = "1.x-dev"

; Features
projects[openchurch_features][type] = "module"
projects[openchurch_features][download][type] = "svn"
projects[openchurch_features][download][url] = "http://openchurch-features.googlecode.com/svn/trunk/"

; Libraries

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = jquery.ui
libraries[jquery_ui][destination] = modules/contrib/jquery_ui

libraries[1pixelout][download][type] = "get"
libraries[1pixelout][download][url] = "http://downloads.wordpress.org/plugin/audio-player.1.2.3.zip"
libraries[1pixelout][directory_name] = 1pixelout
libraries[1pixelout][destination] = modules/contrib/swftools/shared

libraries[swfobject2][download][type] = "get"
libraries[swfobject2][download][url] = "http://swfobject.googlecode.com/files/swfobject_2_2.zip"
libraries[swfobject2][directory_name] = swfobject2
libraries[swfobject2][destination] = modules/contrib/swftools/shared
