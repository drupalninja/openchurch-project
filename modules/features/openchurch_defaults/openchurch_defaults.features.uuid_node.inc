<?php
/**
 * @file
 * openchurch_defaults.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function openchurch_defaults_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Image Acknowledgements',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323218955',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Thank you wonderful internet for allowing me to find and share these images:</p>
<table style="width: 90%;">
<tbody style="border: 0;">
<tr>
<td>
<p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/"><img src="/profiles/openchurch/images/acknowledge-thumbs/a-lesson-in-generosity.jpg" alt="A Lesson in Generosity" /></a></p>
<p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/">A lesson in generosity</a></p>
</td>
<td>
<p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/"><img src="/profiles/openchurch/images/acknowledge-thumbs/moments-to-remember.jpg" alt="Moments to Remember" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/">Moments to Remember</a></p>
</td>
<td>
<p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/"><img src="/profiles/openchurch/images/acknowledge-thumbs/our-future-north.jpg" alt="Our future North" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/">Our future North</a></p>
</td>
</tr>
<tr>
<td>
<p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/"><img src="/profiles/openchurch/images/acknowledge-thumbs/untitled.jpg" alt="Untitled" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/">Untitled</a></p>
</td>
<td>
<p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/"><img src="/profiles/openchurch/images/acknowledge-thumbs/yip.jpg" alt="YIP: 07.16.09" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/">YIP: 07.16.09</a></p>
</td>
</tr>
</tbody>
</table>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Thank you wonderful internet for allowing me to find and share these images:</p>
<table style="width: 90%;"><tbody style="border: 0;"><tr><td>
<p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/"><img src="/profiles/openchurch/images/acknowledge-thumbs/a-lesson-in-generosity.jpg" alt="A Lesson in Generosity" /></a></p>
<p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/">A lesson in generosity</a></p>
</td>
<td>
<p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/"><img src="/profiles/openchurch/images/acknowledge-thumbs/moments-to-remember.jpg" alt="Moments to Remember" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/">Moments to Remember</a></p>
</td>
<td>
<p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/"><img src="/profiles/openchurch/images/acknowledge-thumbs/our-future-north.jpg" alt="Our future North" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/">Our future North</a></p>
</td>
</tr><tr><td>
<p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/"><img src="/profiles/openchurch/images/acknowledge-thumbs/untitled.jpg" alt="Untitled" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/">Untitled</a></p>
</td>
<td>
<p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/"><img src="/profiles/openchurch/images/acknowledge-thumbs/yip.jpg" alt="YIP: 07.16.09" width="150" height="100" /></a></p>
<p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/">YIP: 07.16.09</a></p>
</td>
</tr></tbody></table>',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '0d36991b-efc8-7b94-1df7-c3820415f930',
  'vuuid' => 'f6c21a4b-94ae-6454-c570-fd27c65faed3',
  'cid' => '0',
  'last_comment_timestamp' => '1323218955',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:49:15 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'About Open Church',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323219277',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum congue consectetur purus sit amet blandit. Suspendisse id libero varius justo pharetra ullamcorper. Proin interdum scelerisque tortor sit amet pulvinar. Ut gravida, justo quis rhoncus pharetra, ante est accumsan augue, sed ultrices velit orci vitae velit. Aliquam faucibus placerat mollis. Donec rhoncus leo ac ante sollicitudin scelerisque. Aenean tortor mi, feugiat id ultricies sed, iaculis id tellus. Donec rhoncus ligula velit, id mattis magna. Aenean vel consequat orci. Fusce lectus nisi, dictum vel hendrerit in, tincidunt ac eros. Vestibulum sed elit risus, id scelerisque urna. Sed vestibulum, felis nec porta scelerisque, nibh metus egestas nunc, eget commodo orci risus non dolor. Maecenas auctor vulputate enim ut fermentum.

Aenean sit amet nulla ante. Nulla lobortis luctus nisi, vestibulum pulvinar libero varius sit amet. Sed vehicula mauris vel elit facilisis cursus. Pellentesque pulvinar urna leo. Aenean sed enim vel dolor egestas ornare in vel erat. Phasellus iaculis sodales nisl, non mattis est fermentum ac. Integer rhoncus tortor rhoncus purus egestas posuere. Mauris sed ante quam, non adipiscing erat. Quisque interdum sollicitudin hendrerit. In purus purus, aliquet in ultrices at, viverra non augue. Quisque porta imperdiet tellus id tempus. Suspendisse ac malesuada dolor. Praesent tempus lorem porttitor tortor ultrices fringilla faucibus turpis molestie. Phasellus blandit tincidunt mi vel pretium. Quisque vel nunc nec dolor blandit sodales id elementum risus. Sed sed odio purus, non cursus velit.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum congue consectetur purus sit amet blandit. Suspendisse id libero varius justo pharetra ullamcorper. Proin interdum scelerisque tortor sit amet pulvinar. Ut gravida, justo quis rhoncus pharetra, ante est accumsan augue, sed ultrices velit orci vitae velit. Aliquam faucibus placerat mollis. Donec rhoncus leo ac ante sollicitudin scelerisque. Aenean tortor mi, feugiat id ultricies sed, iaculis id tellus. Donec rhoncus ligula velit, id mattis magna. Aenean vel consequat orci. Fusce lectus nisi, dictum vel hendrerit in, tincidunt ac eros. Vestibulum sed elit risus, id scelerisque urna. Sed vestibulum, felis nec porta scelerisque, nibh metus egestas nunc, eget commodo orci risus non dolor. Maecenas auctor vulputate enim ut fermentum.</p>
<p>Aenean sit amet nulla ante. Nulla lobortis luctus nisi, vestibulum pulvinar libero varius sit amet. Sed vehicula mauris vel elit facilisis cursus. Pellentesque pulvinar urna leo. Aenean sed enim vel dolor egestas ornare in vel erat. Phasellus iaculis sodales nisl, non mattis est fermentum ac. Integer rhoncus tortor rhoncus purus egestas posuere. Mauris sed ante quam, non adipiscing erat. Quisque interdum sollicitudin hendrerit. In purus purus, aliquet in ultrices at, viverra non augue. Quisque porta imperdiet tellus id tempus. Suspendisse ac malesuada dolor. Praesent tempus lorem porttitor tortor ultrices fringilla faucibus turpis molestie. Phasellus blandit tincidunt mi vel pretium. Quisque vel nunc nec dolor blandit sodales id elementum risus. Sed sed odio purus, non cursus velit.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '17d1ced3-fcca-b524-a184-ea395e03ce96',
  'vuuid' => '89b1558a-c788-0164-89e5-579a8958bd22',
  'cid' => '0',
  'last_comment_timestamp' => '1323219277',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:54:37 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Youth Ministry',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_ministry',
  'language' => 'und',
  'created' => '1323217639',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Welcome to the Youth Ministry - A Sample Ministry Page of Open Church

Open Church allows each ministry to have their own page where the ministry can share the ideas and activities.

Here you see that you can upload an associated header image that is unique to the specific ministry. A fun feature that can be updated as the year goes on to keep your church site looking fresh.

You can even upload associated files with this ministry where they will be kept in a centralized location that is relevant to the ministry.

It doesn\'t end there. When your ministry has an event that you want to let people know about you can add an event page where people can find all the details of the event, and even register online if you so desire. At open church we provide you with a great open platform that can grow with you as your ministry grows.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Welcome to the Youth Ministry - A Sample Ministry Page of Open Church</p>
<p>Open Church allows each ministry to have their own page where the ministry can share the ideas and activities.</p>
<p>Here you see that you can upload an associated header image that is unique to the specific ministry. A fun feature that can be updated as the year goes on to keep your church site looking fresh.</p>
<p>You can even upload associated files with this ministry where they will be kept in a centralized location that is relevant to the ministry.</p>
<p>It doesn\'t end there. When your ministry has an event that you want to let people know about you can add an event page where people can find all the details of the event, and even register online if you so desire. At open church we provide you with a great open platform that can grow with you as your ministry grows.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_thumb' => array(),
  'field_oc_image' => array(
    'und' => array(
      0 => array(
        'fid' => '5',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'youth_ministry_banner.jpg',
        'uri' => 'public://youth_ministry_banner.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '67483',
        'status' => '1',
        'timestamp' => '1323217639',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '0e4f264c-592c-fbc4-7901-aa8a9011d6ee',
      ),
    ),
  ),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'fid' => '6',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_2.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217639',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '30300c16-bf11-7654-edaa-896b53a87d90',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '1829bc07-7301-eda4-c9b6-c8da79963ccb',
  'vuuid' => '87819774-16f8-6ce4-6d54-10737914b822',
  'cid' => '0',
  'last_comment_timestamp' => '1323217639',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:27:19 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Contact Us',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'webform',
  'language' => 'und',
  'created' => '1323220131',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'We at OpenChurch hope that if you have any questions, concerns, needs that you will feel free to contact us at anytime. You may contact us by any of the methods below or by filling out the form at the bottom of this page. Please keep in mind if use any method other than phone it will take some time to get into the hands of the appropriate person. We look forward to speaking with you soon.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We at OpenChurch hope that if you have any questions, concerns, needs that you will feel free to contact us at anytime. You may contact us by any of the methods below or by filling out the form at the bottom of this page. Please keep in mind if use any method other than phone it will take some time to get into the hands of the appropriate person. We look forward to speaking with you soon.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '1b29e410-ec40-2064-15c4-bfe92a022a9e',
  'vuuid' => '2e12df48-8ec3-2234-c99e-a867f118ed6b',
  'webform' => array(
    'nid' => '25',
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => 25,
        'cid' => '1',
        'pid' => '0',
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 25,
        'cid' => '2',
        'pid' => '0',
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '1',
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 25,
        'cid' => '3',
        'pid' => '0',
        'form_key' => 'email_address',
        'name' => 'Email Address',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '2',
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 25,
        'cid' => '4',
        'pid' => '0',
        'form_key' => 'phone_number',
        'name' => 'Phone Number',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'width' => '25',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '3',
        'page_num' => 1,
      ),
      5 => array(
        'nid' => 25,
        'cid' => '5',
        'pid' => '0',
        'form_key' => 'questions_or_comments',
        'name' => 'Questions or Comments',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '4',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_timestamp' => '1323220131',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:08:51 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Blog Post From Last Week',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_blog',
  'language' => 'und',
  'created' => '1323216696',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.

Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
<p>Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_blog_topc' => array(
    'und' => array(
      0 => array(
        'tid' => '1',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '337abff4-53ed-ecc4-bd74-be52535fd618',
  'vuuid' => 'af4c9db4-734e-d854-81ff-a7959602b704',
  'cid' => '0',
  'last_comment_timestamp' => '1323216696',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:11:36 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Scream Free Parenting',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_event',
  'language' => 'und',
  'created' => '1323218007',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.

Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.</p>
<p>Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2012-12-07 00:30:00',
        'value2' => '2012-12-07 10:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_oc_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://google.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_oc_cost' => array(
    'und' => array(
      0 => array(
        'value' => 'FREE',
        'format' => NULL,
        'safe_value' => 'FREE',
      ),
    ),
  ),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'fid' => '9',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_5.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323218007',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'ea15d7be-d078-f8a4-cdcc-8363ba1aa556',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'nid' => '7',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Dallas',
        'dependent_locality' => NULL,
        'postal_code' => '75081',
        'thoroughfare' => '1949 Old Hickory Blvd.',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '3a9b2395-d71b-a014-19aa-33305cfd0069',
  'vuuid' => '968589cd-ba11-dbc4-058e-30a3cdb12fa5',
  'cid' => '0',
  'last_comment_timestamp' => '1323218007',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:33:27 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Do It Anyway',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_podcast',
  'language' => 'und',
  'created' => '1323219886',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You have the ability to type a detailed lesson or sermon description which allows people to learn more before they download or subscribe to listen.  It also provides a great way to have your church\'s lessons indexed in major search engines.  

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.

Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You have the ability to type a detailed lesson or sermon description which allows people to learn more before they download or subscribe to listen.  It also provides a great way to have your church\'s lessons indexed in major search engines.  </p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.</p>
<p>Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_author' => array(
    'und' => array(
      0 => array(
        'value' => 'C.S. Lewis',
        'format' => NULL,
        'safe_value' => 'C.S. Lewis',
      ),
    ),
  ),
  'field_oc_audio' => array(
    'und' => array(
      0 => array(
        'fid' => '21',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_mp3.mp3',
        'uri' => 'public://test_mp3.mp3',
        'filemime' => 'audio/mpeg',
        'filesize' => '2398080',
        'status' => '1',
        'timestamp' => '1323219886',
        'type' => 'audio',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '3f72540b-7ffb-f954-0977-3b8809ef6059',
      ),
    ),
  ),
  'field_oc_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-07 01:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '455303ae-b79d-ee64-4139-92cfc032fe9e',
  'vuuid' => 'e0eaf244-8416-8894-5d96-97f3f3611afb',
  'cid' => '0',
  'last_comment_timestamp' => '1323219886',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:04:46 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'The power of love',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_homepage_rotator',
  'language' => 'und',
  'created' => '1323218583',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'field_oc_image' => array(
    'und' => array(
      0 => array(
        'fid' => '18',
        'alt' => '',
        'title' => '',
        'width' => '700',
        'height' => '357',
        'uid' => '1',
        'filename' => 'homepage_image.jpg',
        'uri' => 'public://homepage_image.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '351270',
        'status' => '1',
        'timestamp' => '1323218603',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'fb044b9e-4a8a-b054-cd79-983ed33a0846',
      ),
    ),
  ),
  'field_oc_link' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '546fe2f8-12e5-49f4-099b-11fa50398d15',
  'vuuid' => 'de2c2c12-9178-3a44-dd23-db172ca6e041',
  'cid' => '0',
  'last_comment_timestamp' => '1323218583',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:43:03 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'November 14th, 2010 Bulletin',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_bulletin',
  'language' => 'und',
  'created' => '1323217062',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.

In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.</p>
<p>In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_bulletin_file' => array(
    'und' => array(
      0 => array(
        'fid' => '1',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217119',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '9eed9ed9-295b-5514-4590-d49f37be7703',
      ),
    ),
  ),
  'field_oc_bulletin_date' => array(
    'und' => array(
      0 => array(
        'value' => '2010-11-14 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '591007bc-9418-1e94-c16e-668c88c1e039',
  'vuuid' => 'cb5ba055-0466-6594-09f2-6d788097c955',
  'cid' => '0',
  'last_comment_timestamp' => '1323217062',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:17:42 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Sunday, November 28, 2010',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_bulletin',
  'language' => 'und',
  'created' => '1323217239',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.

In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.</p>
<p>In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_bulletin_file' => array(
    'und' => array(
      0 => array(
        'fid' => '3',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_1.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217239',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'd472ca14-110f-ce14-b5dc-11a1d0f00219',
      ),
    ),
  ),
  'field_oc_bulletin_date' => array(
    'und' => array(
      0 => array(
        'value' => '2010-11-28 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '5f54cb7c-d165-89a4-992e-253811daf521',
  'vuuid' => '78b498b6-00da-6c94-5101-fbcf0e741e30',
  'cid' => '0',
  'last_comment_timestamp' => '1323217239',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:20:39 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Serve',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323490498',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Lorem ipsum dolor sit amet, consectetur adipiscing elit</h3>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
<p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
<p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
<p>Suspendisse convallis pulvinar tincidunt. Cras adipiscing, magna quis auctor tincidunt, tortor dolor adipiscing diam, nec pellentesque nisi ligula eu nunc. Nunc id vestibulum urna. Nam eu nibh nisi, ut ullamcorper nulla. Nam sit amet purus vel nisi pretium interdum vitae quis neque. Integer id tellus sit amet elit rutrum ultrices. Aliquam metus magna, ullamcorper et faucibus ac, mollis non turpis. Nam iaculis diam sit amet metus porttitor id eleifend mauris sagittis. Duis neque orci, eleifend sit amet consequat at, scelerisque at eros. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean aliquam porta augue ac placerat. Aenean a varius neque. Sed hendrerit rhoncus volutpat. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas nec velit eget enim molestie ullamcorper. Cras sollicitudin fermentum risus ut eleifend. Nulla commodo hendrerit enim, ac lacinia ligula volutpat quis. Nam vel tortor a purus iaculis auctor. Morbi ac nisl non enim cursus fringilla.</p>
<p>Ut tempus facilisis augue vitae sodales. Nunc bibendum ullamcorper elit, luctus tincidunt neque feugiat at. Integer in ipsum a massa suscipit luctus vel ut nunc. Aliquam id pulvinar orci. Pellentesque id odio nulla. Duis sed convallis lorem. Nam orci turpis, vulputate sed faucibus vitae, congue quis erat. Proin luctus turpis nec est malesuada rhoncus. Fusce a felis ut metus pharetra consequat id non justo. Aliquam aliquet erat at mi vestibulum feugiat fringilla odio facilisis.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>Lorem ipsum dolor sit amet, consectetur adipiscing elit</h3>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
<p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
<p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
<p>Suspendisse convallis pulvinar tincidunt. Cras adipiscing, magna quis auctor tincidunt, tortor dolor adipiscing diam, nec pellentesque nisi ligula eu nunc. Nunc id vestibulum urna. Nam eu nibh nisi, ut ullamcorper nulla. Nam sit amet purus vel nisi pretium interdum vitae quis neque. Integer id tellus sit amet elit rutrum ultrices. Aliquam metus magna, ullamcorper et faucibus ac, mollis non turpis. Nam iaculis diam sit amet metus porttitor id eleifend mauris sagittis. Duis neque orci, eleifend sit amet consequat at, scelerisque at eros. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean aliquam porta augue ac placerat. Aenean a varius neque. Sed hendrerit rhoncus volutpat. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas nec velit eget enim molestie ullamcorper. Cras sollicitudin fermentum risus ut eleifend. Nulla commodo hendrerit enim, ac lacinia ligula volutpat quis. Nam vel tortor a purus iaculis auctor. Morbi ac nisl non enim cursus fringilla.</p>
<p>Ut tempus facilisis augue vitae sodales. Nunc bibendum ullamcorper elit, luctus tincidunt neque feugiat at. Integer in ipsum a massa suscipit luctus vel ut nunc. Aliquam id pulvinar orci. Pellentesque id odio nulla. Duis sed convallis lorem. Nam orci turpis, vulputate sed faucibus vitae, congue quis erat. Proin luctus turpis nec est malesuada rhoncus. Fusce a felis ut metus pharetra consequat id non justo. Aliquam aliquet erat at mi vestibulum feugiat fringilla odio facilisis.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '6ca8034e-7518-53a4-615f-60ada94f5f7f',
  'vuuid' => 'f2d64dde-65c8-e7b4-391c-bbdb53cc553c',
  'cid' => '0',
  'last_comment_timestamp' => '1323490498',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-10 04:14:58 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'What Do You Do After Easter?',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_podcast',
  'language' => 'und',
  'created' => '1323219909',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You have the ability to type a detailed lesson or sermon description which allows people to learn more before they download or subscribe to listen.  It also provides a great way to have your church\'s lessons indexed in major search engines.  

Lorem ipsum dolor sit amet, consectetur adipiscing elit. In sodales est et augue facilisis vel gravida tortor dapibus. Quisque porta lorem vitae metus suscipit hendrerit. Aliquam ut pulvinar odio. Mauris non justo quis ligula facilisis facilisis in nec velit. Suspendisse posuere leo quis est laoreet sed bibendum arcu mattis. Donec vitae tellus tincidunt eros adipiscing scelerisque. Nunc mollis purus id arcu aliquet suscipit ut at ligula. Sed sapien magna, vulputate quis eleifend nec, rhoncus eu neque. Sed lectus turpis, fringilla at scelerisque ut, laoreet at dui. Praesent convallis lectus vitae augue cursus in tincidunt odio dictum. Cras arcu tellus, fermentum ac tempor sit amet, consequat nec justo. Nam auctor molestie turpis nec vulputate. Integer vitae enim mi, ac hendrerit dolor. Proin pellentesque fermentum tristique. Duis molestie orci id mauris pellentesque nec rhoncus nibh dapibus. Nam vel tempus dui. Etiam vel consequat est. Pellentesque vitae diam lorem, et pretium massa.

Maecenas ac purus ut odio sagittis gravida. Nunc massa quam, sagittis a malesuada sed, euismod varius justo. Duis vehicula aliquam magna, quis ornare arcu congue ut. Sed vitae libero magna. Quisque eget enim mauris. Vivamus ut condimentum turpis. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed lorem arcu, blandit rutrum molestie ac, tristique at orci. Suspendisse ornare tincidunt enim eu facilisis. Curabitur malesuada, libero nec pretium varius, lectus justo elementum nulla, consequat pulvinar nisl sem sed eros. Mauris massa augue, rhoncus a blandit sit amet, aliquam eget erat. Nam pretium lacinia velit, a posuere eros convallis ut. Vestibulum tempor magna ut massa rhoncus ultrices.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You have the ability to type a detailed lesson or sermon description which allows people to learn more before they download or subscribe to listen.  It also provides a great way to have your church\'s lessons indexed in major search engines.  </p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. In sodales est et augue facilisis vel gravida tortor dapibus. Quisque porta lorem vitae metus suscipit hendrerit. Aliquam ut pulvinar odio. Mauris non justo quis ligula facilisis facilisis in nec velit. Suspendisse posuere leo quis est laoreet sed bibendum arcu mattis. Donec vitae tellus tincidunt eros adipiscing scelerisque. Nunc mollis purus id arcu aliquet suscipit ut at ligula. Sed sapien magna, vulputate quis eleifend nec, rhoncus eu neque. Sed lectus turpis, fringilla at scelerisque ut, laoreet at dui. Praesent convallis lectus vitae augue cursus in tincidunt odio dictum. Cras arcu tellus, fermentum ac tempor sit amet, consequat nec justo. Nam auctor molestie turpis nec vulputate. Integer vitae enim mi, ac hendrerit dolor. Proin pellentesque fermentum tristique. Duis molestie orci id mauris pellentesque nec rhoncus nibh dapibus. Nam vel tempus dui. Etiam vel consequat est. Pellentesque vitae diam lorem, et pretium massa.</p>
<p>Maecenas ac purus ut odio sagittis gravida. Nunc massa quam, sagittis a malesuada sed, euismod varius justo. Duis vehicula aliquam magna, quis ornare arcu congue ut. Sed vitae libero magna. Quisque eget enim mauris. Vivamus ut condimentum turpis. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Sed lorem arcu, blandit rutrum molestie ac, tristique at orci. Suspendisse ornare tincidunt enim eu facilisis. Curabitur malesuada, libero nec pretium varius, lectus justo elementum nulla, consequat pulvinar nisl sem sed eros. Mauris massa augue, rhoncus a blandit sit amet, aliquam eget erat. Nam pretium lacinia velit, a posuere eros convallis ut. Vestibulum tempor magna ut massa rhoncus ultrices.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_author' => array(
    'und' => array(
      0 => array(
        'value' => 'John Calvin',
        'format' => NULL,
        'safe_value' => 'John Calvin',
      ),
    ),
  ),
  'field_oc_audio' => array(
    'und' => array(
      0 => array(
        'fid' => '22',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_mp3.mp3',
        'uri' => 'public://test_mp3_0.mp3',
        'filemime' => 'audio/mpeg',
        'filesize' => '2398080',
        'status' => '1',
        'timestamp' => '1323219909',
        'type' => 'audio',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '44b04895-e022-9f24-6532-545fb947666d',
      ),
    ),
  ),
  'field_oc_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-07 01:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '734f1dd2-8621-50a4-7961-07ba89c9ed36',
  'vuuid' => '796d34f5-677b-3d94-f54c-a5d74aedb8fa',
  'cid' => '0',
  'last_comment_timestamp' => '1323219909',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:05:09 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Support our Food Pantry',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_charity',
  'language' => 'und',
  'created' => '1323217456',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.

Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.

Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
<p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
<p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_image' => array(
    'und' => array(
      0 => array(
        'fid' => '4',
        'alt' => '',
        'title' => '',
        'width' => '220',
        'height' => '110',
        'uid' => '1',
        'filename' => 'food_pantry.jpg',
        'uri' => 'public://food_pantry.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '8626',
        'status' => '1',
        'timestamp' => '1323217456',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '967fc430-b8ed-e9f4-e1e0-78d33bd4bccf',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => '9b975fd0-a01a-2ac4-39ea-448df2da3011',
  'vuuid' => '30c64612-ad0e-1714-e177-fe7b4b61f6d4',
  'cid' => '0',
  'last_comment_timestamp' => '1323217456',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:24:16 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Map and Directions',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323219295',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Come Visit Us at OpenChurch!</h3>
<p>Come find us just three right turns past the downtown circle then left into the big open parking lot. &nbsp;Look for the brick building and come on in!</p>
<p>If you want to share a map you could embed a custom map from google, mapquest, or bing. &nbsp;Whatever you decide just be sure to consider those who may come from any direction and might need different instructions. &nbsp;</p>
<p>
<iframe width="550" height="350" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1&amp;output=embed"></iframe><br /><small><a href="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1" style="color:#0000FF;text-align:left">View Larger Map</a></small>
</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>Come Visit Us at OpenChurch!</h3>
<p>Come find us just three right turns past the downtown circle then left into the big open parking lot.  Look for the brick building and come on in!</p>
<p>If you want to share a map you could embed a custom map from google, mapquest, or bing.  Whatever you decide just be sure to consider those who may come from any direction and might need different instructions.  </p>
<p><iframe width="550" height="350" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1&amp;output=embed"></iframe></p><p><small><a href="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1" style="color:#0000FF;text-align:left">View Larger Map</a></small>
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'ac89f669-61a5-b8a4-05c6-7a2c533b4d2f',
  'vuuid' => 'f6879cef-d891-9194-c936-3606204b660f',
  'cid' => '0',
  'last_comment_timestamp' => '1323219295',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:54:55 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'This Week\'s Blog Post',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_blog',
  'language' => 'und',
  'created' => '1323216676',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.

Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed lacinia, eros vel mollis ornare, lorem enim condimentum ligula, id mollis purus nunc sed odio. Donec at dolor ante. Aenean in ligula sit amet leo scelerisque luctus at sit amet dolor. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas sagittis malesuada velit sed volutpat. Donec nunc ligula, convallis interdum aliquam et, blandit at justo. Duis dapibus fermentum suscipit. Sed eleifend varius tellus in rhoncus. Pellentesque pellentesque, lorem sed tincidunt semper, urna libero pulvinar tortor, vel posuere diam justo vel mi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer metus ligula, lacinia a iaculis in, placerat in diam. Proin sit amet sagittis est. Quisque molestie varius molestie. Pellentesque a augue ut ligula cursus vestibulum id id mi. Phasellus tincidunt aliquam sapien, sit amet aliquam felis tincidunt sit amet. Phasellus consequat cursus lectus, vel placerat elit porta sit amet. Nulla et diam leo, vitae euismod lorem. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas.</p>
<p>Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Mauris volutpat pharetra egestas. Vestibulum vulputate ipsum et quam blandit vehicula. Phasellus orci tortor, gravida aliquam placerat vitae, varius at nisi. Sed ultrices cursus tristique. Mauris eget diam vitae sapien pellentesque dictum. Vestibulum in posuere libero. Duis posuere iaculis faucibus. Fusce egestas tellus a arcu pellentesque et iaculis justo faucibus. Morbi ornare laoreet leo lobortis euismod. Proin neque eros, accumsan non vehicula eget, luctus et massa. Fusce dapibus sapien non ante suscipit adipiscing. Aenean ultricies lobortis convallis. Morbi lectus quam, pellentesque sed venenatis eu, iaculis ac velit. In vestibulum fermentum lacus, elementum mattis dui sagittis eu. Aliquam sit amet urna nec erat semper fringilla. Suspendisse felis risus, interdum ac scelerisque eget, pulvinar ut lorem.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_blog_topc' => array(
    'und' => array(
      0 => array(
        'tid' => '1',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'af6b3748-2876-9474-65a2-84b8ff86ac19',
  'vuuid' => '7441feaf-4b0b-bfc4-8529-14d89ac7f6a0',
  'cid' => '0',
  'last_comment_timestamp' => '1323216676',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:11:16 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'John Doe',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_staff',
  'language' => 'und',
  'created' => '1323220049',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.

Proin malesuada, lectus vel pulvinar auctor, nulla libero placerat sem, eget tincidunt tellus libero in mi..',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.</p>
<p>Proin malesuada, lectus vel pulvinar auctor, nulla libero placerat sem, eget tincidunt tellus libero in mi..</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_staff_type' => array(
    'und' => array(
      0 => array(
        'tid' => '5',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'nid' => '7',
      ),
    ),
  ),
  'field_oc_image' => array(),
  'field_oc_position' => array(
    'und' => array(
      0 => array(
        'value' => 'Ministry Assistant',
        'format' => NULL,
        'safe_value' => 'Ministry Assistant',
      ),
    ),
  ),
  'field_oc_phone' => array(
    'und' => array(
      0 => array(
        'value' => '(x114)',
        'format' => NULL,
        'safe_value' => '(x114)',
      ),
    ),
  ),
  'field_oc_email' => array(
    'und' => array(
      0 => array(
        'email' => 'test@test.com',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'b1f6e653-43a9-5f84-6534-05516a8cdab6',
  'vuuid' => '07669125-9983-82b4-6515-410f0630930a',
  'cid' => '0',
  'last_comment_timestamp' => '1323220049',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:07:29 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'John Smith',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_staff',
  'language' => 'und',
  'created' => '1323220084',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac libero nunc. Nunc tempor magna et lectus interdum et congue augue dictum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_staff_type' => array(
    'und' => array(
      0 => array(
        'tid' => '5',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'nid' => '7',
      ),
    ),
  ),
  'field_oc_image' => array(),
  'field_oc_position' => array(
    'und' => array(
      0 => array(
        'value' => 'Ministry Assistant',
        'format' => NULL,
        'safe_value' => 'Ministry Assistant',
      ),
    ),
  ),
  'field_oc_phone' => array(
    'und' => array(
      0 => array(
        'value' => '(x113)',
        'format' => NULL,
        'safe_value' => '(x113)',
      ),
    ),
  ),
  'field_oc_email' => array(
    'und' => array(
      0 => array(
        'email' => 'test@test.com',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'bfa183f1-5bac-4f34-6129-f40c3aad774a',
  'vuuid' => 'a028da5a-cd69-9a84-f1f6-108dc54efcc8',
  'cid' => '0',
  'last_comment_timestamp' => '1323220084',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:08:04 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Dinner at Bethlehem',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_event',
  'language' => 'und',
  'created' => '1323217798',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.

In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.</p>
<p>In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_dates' => array(
    'und' => array(
      0 => array(
        'value' => '2012-12-07 05:30:00',
        'value2' => '2012-12-07 10:30:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_oc_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.google.com',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'field_oc_cost' => array(
    'und' => array(
      0 => array(
        'value' => '$8.00 - Per Attendee',
        'format' => NULL,
        'safe_value' => '$8.00 - Per Attendee',
      ),
    ),
  ),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'fid' => '8',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_4.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217847',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '173d108f-418e-2614-d5fd-00b101c74c90',
      ),
    ),
  ),
  'field_oc_ministry' => array(
    'und' => array(
      0 => array(
        'nid' => '7',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'OH',
        'sub_administrative_area' => NULL,
        'locality' => 'Cleveland',
        'dependent_locality' => NULL,
        'postal_code' => '37027',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'c9dadebb-7c21-2954-4de4-a18ac8049344',
  'vuuid' => 'a9d55a7b-1915-75f4-e563-fdb715c4c5fc',
  'cid' => '0',
  'last_comment_timestamp' => '1323217798',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:29:58 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Autumn Is Here!',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_homepage_rotator',
  'language' => 'und',
  'created' => '1323218649',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'field_oc_image' => array(
    'und' => array(
      0 => array(
        'fid' => '19',
        'alt' => '',
        'title' => '',
        'width' => '700',
        'height' => '355',
        'uid' => '1',
        'filename' => 'autumn_hero.jpg',
        'uri' => 'public://autumn_hero.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '91149',
        'status' => '1',
        'timestamp' => '1323218649',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '37de0dad-317f-b5b4-ed07-32828f663c4c',
      ),
    ),
  ),
  'field_oc_link' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'ca0b596b-eb02-eda4-011c-1ddbe27a7b16',
  'vuuid' => 'd26f63b5-9410-fdc4-6901-2d446b4b2abf',
  'cid' => '0',
  'last_comment_timestamp' => '1323218649',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:44:09 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Singles Ministry',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_ministry',
  'language' => 'und',
  'created' => '1323217698',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Welcome to the Singles Ministry - A Sample Ministry Page of Open Church

Open Church allows each ministry to have their own page where the ministry can share the ideas and activities.

You can even upload associated files with this ministry where they will be kept in a centralized location that is relevant to the ministry.

It doesn\'t end there.  When your ministry has an event that you want to let people know about you can add an event page where people can find all the details of the event, and even register online if you so desire.  At open church we provide you with a great open platform that can grow with you as your ministry grows.  ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Welcome to the Singles Ministry - A Sample Ministry Page of Open Church</p>
<p>Open Church allows each ministry to have their own page where the ministry can share the ideas and activities.</p>
<p>You can even upload associated files with this ministry where they will be kept in a centralized location that is relevant to the ministry.</p>
<p>It doesn\'t end there.  When your ministry has an event that you want to let people know about you can add an event page where people can find all the details of the event, and even register online if you so desire.  At open church we provide you with a great open platform that can grow with you as your ministry grows.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_thumb' => array(),
  'field_oc_image' => array(),
  'field_oc_downloads' => array(
    'und' => array(
      0 => array(
        'fid' => '7',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_3.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217698',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'b0387bd9-8296-0904-d1fe-5c63d6e2a48d',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'cc1abc50-5d9d-5984-397d-bb9c9e0ff324',
  'vuuid' => '792a4432-01b7-a554-29bc-8993d307438e',
  'cid' => '0',
  'last_comment_timestamp' => '1323217698',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:28:18 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Sunday, November 21, 2010',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_bulletin',
  'language' => 'und',
  'created' => '1323217174',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.

In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus sed neque lacus. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Quisque ultrices, dui non bibendum scelerisque, nisl enim porttitor ipsum, fermentum laoreet ligula mauris ac nulla. Phasellus tempor scelerisque purus quis egestas. Morbi commodo nisl a nulla bibendum facilisis. In hac habitasse platea dictumst. Nam vitae nisl nec nisi malesuada consequat. Integer lobortis vulputate ipsum, in ullamcorper elit tristique at. Morbi non convallis odio. Donec sagittis semper eros, quis accumsan tortor commodo ut. Sed elementum pellentesque diam eget imperdiet.</p>
<p>In accumsan mattis eros, at bibendum elit interdum id. Integer eu sem libero, id dapibus ipsum. Maecenas vulputate pharetra lobortis. Mauris pharetra iaculis turpis ac interdum. Pellentesque tincidunt aliquet diam. Nullam sodales neque ut nunc ultrices sit amet faucibus tortor sagittis. Nunc convallis pretium rhoncus. Sed eleifend pharetra metus, sit amet pulvinar dolor pulvinar dictum. Nulla facilisi. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec convallis blandit urna, et lobortis risus faucibus non. Donec eu tortor diam. Proin adipiscing venenatis dui. Maecenas eget arcu in dolor rhoncus posuere. Donec lobortis augue ipsum, in scelerisque tortor. Proin vehicula, urna at mollis placerat, lorem urna semper nisi, dictum blandit diam felis vitae neque. Etiam egestas pharetra odio, nec pretium nulla dictum non. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Maecenas ipsum velit, sagittis auctor facilisis quis, porttitor eu ipsum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_bulletin_file' => array(
    'und' => array(
      0 => array(
        'fid' => '2',
        'display' => '1',
        'description' => '',
        'uid' => '1',
        'filename' => 'test_pdf.pdf',
        'uri' => 'public://test_pdf_0.pdf',
        'filemime' => 'application/pdf',
        'filesize' => '5935',
        'status' => '1',
        'timestamp' => '1323217174',
        'type' => 'application',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '6c8d944a-3320-ea14-cd6a-ba6c2140bd46',
      ),
    ),
  ),
  'field_oc_bulletin_date' => array(
    'und' => array(
      0 => array(
        'value' => '2010-11-21 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'd40ee120-8b45-9964-3141-01b1962cce95',
  'vuuid' => '7117b10a-f2b5-dd74-3117-5f5203a82134',
  'cid' => '0',
  'last_comment_timestamp' => '1323217174',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:19:34 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'High School Retreat',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_gallery',
  'language' => 'und',
  'created' => '1323218456',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Share your photo memories with the world, and include descriptions of where the event took place and anything else you think people would be interested in reading.  It\'s a great way to keep people connected by sharing the moments with others even if they could not be there in person.

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur consequat suscipit nisl et laoreet. Mauris commodo, nisl sit amet ultricies congue, nisl lacus fringilla tortor, eget ultricies ipsum neque at erat. Nam hendrerit fermentum felis id dapibus. Sed aliquet posuere dictum. Praesent dictum erat vitae magna ultrices volutpat. Duis ac nibh mi. Sed fermentum congue aliquet. Mauris sed molestie ante. Vestibulum mi felis, posuere at pulvinar sit amet, posuere varius arcu. Integer ullamcorper neque enim, non feugiat sem. Etiam euismod lacus in libero consequat tristique. Etiam mattis, urna id volutpat ultrices, ligula libero imperdiet massa, rhoncus sollicitudin ligula ipsum eget nisi. Nam tempus adipiscing porta. In hac habitasse platea dictumst. Aenean rhoncus sem facilisis lacus aliquet posuere. Proin viverra sapien nec erat interdum aliquam posuere ante sodales. Cras fringilla purus eget lorem vehicula posuere. Integer eu ipsum non nulla dictum interdum quis in urna. Duis varius fringilla purus sed pellentesque. Vivamus condimentum fringilla dolor pharetra auctor.

Nam gravida risus ac turpis porta vitae pretium arcu convallis. Nullam quis tortor sit amet mauris ullamcorper tristique. Fusce gravida hendrerit neque sed dictum. Nullam at venenatis metus. Morbi eget ligula magna, at gravida mi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque in mauris dui. Mauris et ante mauris. Ut quis vehicula erat. Suspendisse potenti. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Sed urna risus, lacinia non fermentum rhoncus, ornare sit amet mauris. Pellentesque pharetra metus ac quam dictum malesuada. Morbi libero risus, condimentum et varius vel, convallis a urna.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Share your photo memories with the world, and include descriptions of where the event took place and anything else you think people would be interested in reading.  It\'s a great way to keep people connected by sharing the moments with others even if they could not be there in person.</p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur consequat suscipit nisl et laoreet. Mauris commodo, nisl sit amet ultricies congue, nisl lacus fringilla tortor, eget ultricies ipsum neque at erat. Nam hendrerit fermentum felis id dapibus. Sed aliquet posuere dictum. Praesent dictum erat vitae magna ultrices volutpat. Duis ac nibh mi. Sed fermentum congue aliquet. Mauris sed molestie ante. Vestibulum mi felis, posuere at pulvinar sit amet, posuere varius arcu. Integer ullamcorper neque enim, non feugiat sem. Etiam euismod lacus in libero consequat tristique. Etiam mattis, urna id volutpat ultrices, ligula libero imperdiet massa, rhoncus sollicitudin ligula ipsum eget nisi. Nam tempus adipiscing porta. In hac habitasse platea dictumst. Aenean rhoncus sem facilisis lacus aliquet posuere. Proin viverra sapien nec erat interdum aliquam posuere ante sodales. Cras fringilla purus eget lorem vehicula posuere. Integer eu ipsum non nulla dictum interdum quis in urna. Duis varius fringilla purus sed pellentesque. Vivamus condimentum fringilla dolor pharetra auctor.</p>
<p>Nam gravida risus ac turpis porta vitae pretium arcu convallis. Nullam quis tortor sit amet mauris ullamcorper tristique. Fusce gravida hendrerit neque sed dictum. Nullam at venenatis metus. Morbi eget ligula magna, at gravida mi. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque in mauris dui. Mauris et ante mauris. Ut quis vehicula erat. Suspendisse potenti. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Sed urna risus, lacinia non fermentum rhoncus, ornare sit amet mauris. Pellentesque pharetra metus ac quam dictum malesuada. Morbi libero risus, condimentum et varius vel, convallis a urna.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Dallas',
        'dependent_locality' => NULL,
        'postal_code' => '75081',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_oc_thumb' => array(
    'und' => array(
      0 => array(
        'fid' => '15',
        'alt' => '',
        'title' => '',
        'width' => '720',
        'height' => '480',
        'uid' => '1',
        'filename' => 'high_school_retreat_album.jpg',
        'uri' => 'public://high_school_retreat_album.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '137325',
        'status' => '1',
        'timestamp' => '1323218456',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'a59f18b9-abd5-2ea4-5181-cb42aa75dcdd',
      ),
    ),
  ),
  'field_oc_images' => array(
    'und' => array(
      0 => array(
        'fid' => '16',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'sampleimage1.jpg',
        'uri' => 'public://sampleimage1_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '92878',
        'status' => '1',
        'timestamp' => '1323218456',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '312b7da5-bbc9-a3c4-29e6-ea247101deb3',
      ),
      1 => array(
        'fid' => '17',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'sampleimage2.jpg',
        'uri' => 'public://sampleimage2_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '89485',
        'status' => '1',
        'timestamp' => '1323218483',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'd38ca89c-025e-b504-59d5-2feb2159df28',
      ),
    ),
  ),
  'field_oc_ministry' => array(),
  'field_oc_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-07 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'd7d1c0b2-8494-4d74-e916-a224da763b0a',
  'vuuid' => '2b0a29a3-e938-4224-b903-00b3d09ae573',
  'cid' => '0',
  'last_comment_timestamp' => '1323218456',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:40:56 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Youth Ministry Spring Break Gallery',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'openchurch_gallery',
  'language' => 'und',
  'created' => '1323218252',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Share your photo memories with the world, and include descriptions of where the event took place and anything else you think people would be interested in reading.  It\'s a great way to keep people connected by sharing the moments with others even if they could not be there in person.

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras posuere blandit nisi a ullamcorper. Maecenas rutrum, tellus vel rutrum luctus, ipsum dolor auctor quam, sed vestibulum sem nibh quis nisi. Sed bibendum luctus neque ac viverra. Donec viverra nibh eget dui vestibulum non convallis elit luctus. Duis eget sem augue, et posuere mauris. Etiam varius aliquam lectus, non lobortis lacus molestie ac. Morbi laoreet imperdiet tortor, sit amet pellentesque tortor euismod eget. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus congue pulvinar leo, ac rutrum sapien volutpat quis. Donec fermentum quam eu tortor bibendum ullamcorper. Etiam interdum diam ac neque convallis mollis. Praesent lobortis tellus justo, quis mattis orci. Aliquam ullamcorper orci et eros viverra blandit. Aenean diam felis, ullamcorper non facilisis et, auctor sit amet diam. Nam imperdiet eleifend leo, ut fermentum risus luctus ut. Ut eu nunc consequat justo posuere interdum.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Share your photo memories with the world, and include descriptions of where the event took place and anything else you think people would be interested in reading.  It\'s a great way to keep people connected by sharing the moments with others even if they could not be there in person.</p>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras posuere blandit nisi a ullamcorper. Maecenas rutrum, tellus vel rutrum luctus, ipsum dolor auctor quam, sed vestibulum sem nibh quis nisi. Sed bibendum luctus neque ac viverra. Donec viverra nibh eget dui vestibulum non convallis elit luctus. Duis eget sem augue, et posuere mauris. Etiam varius aliquam lectus, non lobortis lacus molestie ac. Morbi laoreet imperdiet tortor, sit amet pellentesque tortor euismod eget. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus congue pulvinar leo, ac rutrum sapien volutpat quis. Donec fermentum quam eu tortor bibendum ullamcorper. Etiam interdum diam ac neque convallis mollis. Praesent lobortis tellus justo, quis mattis orci. Aliquam ullamcorper orci et eros viverra blandit. Aenean diam felis, ullamcorper non facilisis et, auctor sit amet diam. Nam imperdiet eleifend leo, ut fermentum risus luctus ut. Ut eu nunc consequat justo posuere interdum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_oc_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => '',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => '',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
      ),
    ),
  ),
  'field_oc_thumb' => array(
    'und' => array(
      0 => array(
        'fid' => '10',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'youth-group-album.jpg',
        'uri' => 'public://youth-group-album.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '55593',
        'status' => '1',
        'timestamp' => '1323218252',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '36e7f028-1313-20e4-c12b-47bffa96fe8b',
      ),
    ),
  ),
  'field_oc_images' => array(
    'und' => array(
      0 => array(
        'fid' => '11',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'sampleimage1.jpg',
        'uri' => 'public://sampleimage1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '92878',
        'status' => '1',
        'timestamp' => '1323218296',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '9b8a24ce-d8ea-ea64-cdc2-a98864d53fe9',
      ),
      1 => array(
        'fid' => '12',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'sampleimage2.jpg',
        'uri' => 'public://sampleimage2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '89485',
        'status' => '1',
        'timestamp' => '1323218326',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '2fb042ae-d72a-48f4-b96d-ede4b1eff3fb',
      ),
      2 => array(
        'fid' => '13',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'sampleimage3.jpg',
        'uri' => 'public://sampleimage3.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '67483',
        'status' => '1',
        'timestamp' => '1323218359',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => 'ded326f7-ff2f-b4a4-d154-fee7c34fb71d',
      ),
      3 => array(
        'fid' => '14',
        'alt' => '',
        'title' => '',
        'width' => '604',
        'height' => '453',
        'uid' => '1',
        'filename' => 'youth-group-album.jpg',
        'uri' => 'public://youth-group-album_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '55593',
        'status' => '1',
        'timestamp' => '1323218371',
        'type' => 'image',
        'metatags' => array(),
        'rdf_mapping' => array(),
        'uuid' => '12f1ee6a-956c-8ea4-c1f3-26496ac74140',
      ),
    ),
  ),
  'field_oc_ministry' => array(),
  'field_oc_date' => array(
    'und' => array(
      0 => array(
        'value' => '2011-12-07 00:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'e6e69c1a-383c-2ff4-9ded-9a6b6d5686c8',
  'vuuid' => '37fb0f14-ca1d-ccd4-c527-a99eeea7df11',
  'cid' => '0',
  'last_comment_timestamp' => '1323218252',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 00:37:32 +0000',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Time & Locations',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1323219683',
  'tnid' => '0',
  'translate' => '0',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>SUNDAY MORNING BIBLE CLASSES &amp; SERVICE</h3>
<p>A wide variety of classes meet each week to welcome and nurture adults in their faith journey. &nbsp;Classes differ in size, format, and focus. &nbsp;Offerings may include textual, topical, ministry specific, or special needs studies. &nbsp;Some are age-specific while others are inter-generational. Many are on-ongoing throughout the year while special series are also provided.</p>
<p>&nbsp;</p>
<h3>WEEK AND EVENING BIBLE CLASSES &amp; SERVICE</h3>
<p>Daytime and evening classes meet for study and discussion throughout the year. &nbsp;A wide variety of opportunities are available for men and women as well as general adult groups. &nbsp;Wednesday evenings offer several choices including "Peak of the Week," short term presentations that inspire and inform.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>SUNDAY MORNING BIBLE CLASSES &amp; SERVICE</h3>
<p>A wide variety of classes meet each week to welcome and nurture adults in their faith journey.  Classes differ in size, format, and focus.  Offerings may include textual, topical, ministry specific, or special needs studies.  Some are age-specific while others are inter-generational. Many are on-ongoing throughout the year while special series are also provided.</p>
<p> </p>
<h3>WEEK AND EVENING BIBLE CLASSES &amp; SERVICE</h3>
<p>Daytime and evening classes meet for study and discussion throughout the year.  A wide variety of opportunities are available for men and women as well as general adult groups.  Wednesday evenings offer several choices including "Peak of the Week," short term presentations that inspire and inform.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'uuid' => 'f875686d-7dfb-e524-99b4-f779bf862006',
  'vuuid' => '607bf636-6de2-b084-994f-804ccd3531f6',
  'cid' => '0',
  'last_comment_timestamp' => '1323219683',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2011-12-07 01:01:23 +0000',
);
  return $nodes;
}
