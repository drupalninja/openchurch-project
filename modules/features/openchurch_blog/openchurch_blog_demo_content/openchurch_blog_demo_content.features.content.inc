<?php
/**
 * @file
 * openchurch_blog_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_blog_demo_content_content_defaults() {
  $content = array();

  $content['oc_blog1'] = (object) array(
    'exported_path' => 'blog/blog-post-last-week',
    'title' => 'Blog Post From Last Week',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_blog',
    'language' => 'und',
    'created' => '1323216696',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'oc_blog1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.
      
      Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
  <p>    Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_blog_topic' => array(
      'und' => array(
        0 => array(
          'tid' => '11',
        ),
      ),
    ),
  );

  $content['oc_blog2'] = (object) array(
    'exported_path' => 'blog/weeks-blog-post',
    'title' => 'This Week\'s Blog Post',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_blog',
    'language' => 'und',
    'created' => '1323216676',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'oc_blog2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.
      
      Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
  <p>    Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_oc_blog_topic' => array(
      'und' => array(
        0 => array(
          'tid' => '12',
        ),
      ),
    ),
  );

return $content;
}
