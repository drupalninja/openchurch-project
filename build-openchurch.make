api = 2
core = 8.x
; Include the definition for how to build Drupal core directly, including patches:
includes[] = drupal-org-core.make
projects[openchurch][download][type] = "git"
projects[openchurch][download][profile] = "contributions/profiles/openchurch"
projects[openchurch][download][revision] = "8.x-2.x"
