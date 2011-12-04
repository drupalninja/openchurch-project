<?php

/**
 * Fixing empty breadcrumb issue
 */
function openchurch_mm_breadcrumb($breadcrumb) {
  if (!empty($breadcrumb) AND !empty($breadcrumb[0])) {
    return '<div class="breadcrumb">' . implode(' › ', $breadcrumb) . '</div>';
  }
}