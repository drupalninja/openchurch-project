<?php
/**
 * @file
 * openchurch_events_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_events_demo_content_content_defaults() {
  $content = array();

  $content['oc_event1'] = (object) array(
    'exported_path' => 'events/scream-free-parenting',
    'title' => 'Scream Free Parenting',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_event',
    'language' => 'und',
    'created' => '1323218007',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_event1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.
      
      Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna.</p>
  <p>    Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
  ',
          'safe_summary' => '',
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
    'field_oc_dates' => array(
      'und' => array(
        0 => array(
          'value' => '2014-12-07 00:30:00',
          'value2' => '2014-12-07 10:30:00',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_oc_downloads' => array(
      'und' => array(
        0 => array(
          'display' => '1',
          'description' => '',
          'filename' => 'test_pdf.pdf',
          'uri' => 'public://test_pdf.pdf',
          'filemime' => 'application/pdf',
          'filesize' => '5935',
          'status' => '1',
          'type' => 'application',
          'uuid' => '766940fc-d9d4-c664-71a7-3cccc3775424',
          'metatags' => array(),
          'rdf_mapping' => array(),
          'image' => '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EOrCq72K9gaXoDRG5SZkrRAS2stFMnTmn9bsiWHUnyqSsyKnEA+3knBd8P1dxs3+3pQZV3eelr/70xL0GiM1LDsp1XIp6/B3bcGHnCrnG97uchYKZW5kc3RyZWFtCmVuZG9iagoKOSAwIG9iago8PC9UeXBlL0ZvbnQvU3VidHlwZS9UcnVlVHlwZS9CYXNlRm9udC9CQUFBQUErTGliZXJhdGlvblNlcmlmCi9GaXJzdENoYXIgMAovTGFzdENoYXIgMwovV2lkdGhzWzM2NSAyNzcgNDQzIDM4OSBdCi9Gb250RGVzY3JpcHRvciA3IDAgUgovVG9Vbmljb2RlIDggMCBSCj4+CmVuZG9iagoKMTAgMCBvYmoKPDwvRjEgOSAwIFIKPj4KZW5kb2JqCgoxMSAwIG9iago8PC9Gb250IDEwIDAgUgovUHJvY1NldFsvUERGL1RleHRdCj4+CmVuZG9iagoKMSAwIG9iago8PC9UeXBlL1BhZ2UvUGFyZW50IDQgMCBSL1Jlc291cmNlcyAxMSAwIFIvTWVkaWFCb3hbMCAwIDYxMiA3OTJdL0dyb3VwPDwvUy9UcmFuc3BhcmVuY3kvQ1MvRGV2aWNlUkdCL0kgdHJ1ZT4+L0NvbnRlbnRzIDIgMCBSPj4KZW5kb2JqCgo0IDAgb2JqCjw8L1R5cGUvUGFnZXMKL1Jlc291cmNlcyAxMSAwIFIKL01lZGlhQm94WyAwIDAgNjEyIDc5MiBdCi9LaWRzWyAxIDAgUiBdCi9Db3VudCAxPj4KZW5kb2JqCgoxMiAwIG9iago8PC9UeXBlL0NhdGFsb2cvUGFnZXMgNCAwIFIKL09wZW5BY3Rpb25bMSAwIFIgL1hZWiBudWxsIG51bGwgMF0KL0xhbmcoZW4tVVMpCj4+CmVuZG9iagoKMTMgMCBvYmoKPDwvQXV0aG9yPEZFRkYwMDRBMDA2MTAwNzkwMDIwMDA0MzAwNjEwMDZDMDA2QzAwNjkwMDYzMDA2RjAwNzQwMDc0PgovQ3JlYXRvcjxGRUZGMDA1NzAwNzIwMDY5MDA3NDAwNjUwMDcyPgovUHJvZHVjZXI8RkVGRjAwNEYwMDcwMDA2NTAwNkUwMDRGMDA2NjAwNjYwMDY5MDA2MzAwNjUwMDJFMDA2RjAwNzIwMDY3MDAyMDAwMzMwMDJFMDAzMj4KL0NyZWF0aW9uRGF0ZShEOjIwMTAwODE2MjAxODU4LTA1JzAwJyk+PgplbmRvYmoKCnhyZWYKMCAxNAowMDAwMDAwMDAwIDY1NTM1IGYgCjAwMDAwMDQ4NjAgMDAwMDAgbiAKMDAwMDAwMDAxOSAwMDAwMCBuIAowMDAwMDAwMTg4IDAwMDAwIG4gCjAwMDAwMDUwMDMgMDAwMDAgbiAKMDAwMDAwMDIwNyAwMDAwMCBuIAowMDAwMDA0MDgzIDAwMDAwIG4gCjAwMDAwMDQxMDQgMDAwMDAgbiAKMDAwMDAwNDI5OCAwMDAwMCBuIAowMDAwMDA0NjAyIDAwMDAwIG4gCjAwMDAwMDQ3NzMgMDAwMDAgbiAKMDAwMDAwNDgwNSAwMDAwMCBuIAowMDAwMDA1MTAyIDAwMDAwIG4gCjAwMDAwMDUxOTkgMDAwMDAgbiAKdHJhaWxlcgo8PC9TaXplIDE0L1Jvb3QgMTIgMCBSCi9JbmZvIDEzIDAgUgovSUQgWyA8RDJCNkU0QTExNzExOTUxMURDNjg5NzE3MkNBMzI5MTk+CjxEMkI2RTRBMTE3MTE5NTExREM2ODk3MTcyQ0EzMjkxOT4gXQovRG9jQ2hlY2tzdW0gL0I4MEU4QTM0Qjg5RTUwMDg4QzlCMTlFMTcxMjA4QTAxCj4+CnN0YXJ0eHJlZgo1NDUyCiUlRU9GCg==',
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
    'field_oc_ministry' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'oc_ministry1',
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
  );

  $content['oc_event2'] = (object) array(
    'exported_path' => 'events/dinner-bethlehem',
    'title' => 'Dinner at Bethlehem',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'openchurch_event',
    'language' => 'und',
    'created' => '1323217798',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_event2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.
      
      In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo.</p>
  <p>    In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
  ',
          'safe_summary' => '',
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
    'field_oc_dates' => array(
      'und' => array(
        0 => array(
          'value' => '2014-12-07 05:30:00',
          'value2' => '2014-12-07 10:30:00',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_oc_downloads' => array(
      'und' => array(
        0 => array(
          'display' => '1',
          'description' => '',
          'filename' => 'test_pdf.pdf',
          'uri' => 'public://test_pdf.pdf',
          'filemime' => 'application/pdf',
          'filesize' => '5935',
          'status' => '1',
          'type' => 'application',
          'uuid' => 'c0409662-6456-9614-8d43-1cbe6b5901eb',
          'metatags' => array(),
          'rdf_mapping' => array(),
          'image' => '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EOrCq72K9gaXoDRG5SZkrRAS2stFMnTmn9bsiWHUnyqSsyKnEA+3knBd8P1dxs3+3pQZV3eelr/70xL0GiM1LDsp1XIp6/B3bcGHnCrnG97uchYKZW5kc3RyZWFtCmVuZG9iagoKOSAwIG9iago8PC9UeXBlL0ZvbnQvU3VidHlwZS9UcnVlVHlwZS9CYXNlRm9udC9CQUFBQUErTGliZXJhdGlvblNlcmlmCi9GaXJzdENoYXIgMAovTGFzdENoYXIgMwovV2lkdGhzWzM2NSAyNzcgNDQzIDM4OSBdCi9Gb250RGVzY3JpcHRvciA3IDAgUgovVG9Vbmljb2RlIDggMCBSCj4+CmVuZG9iagoKMTAgMCBvYmoKPDwvRjEgOSAwIFIKPj4KZW5kb2JqCgoxMSAwIG9iago8PC9Gb250IDEwIDAgUgovUHJvY1NldFsvUERGL1RleHRdCj4+CmVuZG9iagoKMSAwIG9iago8PC9UeXBlL1BhZ2UvUGFyZW50IDQgMCBSL1Jlc291cmNlcyAxMSAwIFIvTWVkaWFCb3hbMCAwIDYxMiA3OTJdL0dyb3VwPDwvUy9UcmFuc3BhcmVuY3kvQ1MvRGV2aWNlUkdCL0kgdHJ1ZT4+L0NvbnRlbnRzIDIgMCBSPj4KZW5kb2JqCgo0IDAgb2JqCjw8L1R5cGUvUGFnZXMKL1Jlc291cmNlcyAxMSAwIFIKL01lZGlhQm94WyAwIDAgNjEyIDc5MiBdCi9LaWRzWyAxIDAgUiBdCi9Db3VudCAxPj4KZW5kb2JqCgoxMiAwIG9iago8PC9UeXBlL0NhdGFsb2cvUGFnZXMgNCAwIFIKL09wZW5BY3Rpb25bMSAwIFIgL1hZWiBudWxsIG51bGwgMF0KL0xhbmcoZW4tVVMpCj4+CmVuZG9iagoKMTMgMCBvYmoKPDwvQXV0aG9yPEZFRkYwMDRBMDA2MTAwNzkwMDIwMDA0MzAwNjEwMDZDMDA2QzAwNjkwMDYzMDA2RjAwNzQwMDc0PgovQ3JlYXRvcjxGRUZGMDA1NzAwNzIwMDY5MDA3NDAwNjUwMDcyPgovUHJvZHVjZXI8RkVGRjAwNEYwMDcwMDA2NTAwNkUwMDRGMDA2NjAwNjYwMDY5MDA2MzAwNjUwMDJFMDA2RjAwNzIwMDY3MDAyMDAwMzMwMDJFMDAzMj4KL0NyZWF0aW9uRGF0ZShEOjIwMTAwODE2MjAxODU4LTA1JzAwJyk+PgplbmRvYmoKCnhyZWYKMCAxNAowMDAwMDAwMDAwIDY1NTM1IGYgCjAwMDAwMDQ4NjAgMDAwMDAgbiAKMDAwMDAwMDAxOSAwMDAwMCBuIAowMDAwMDAwMTg4IDAwMDAwIG4gCjAwMDAwMDUwMDMgMDAwMDAgbiAKMDAwMDAwMDIwNyAwMDAwMCBuIAowMDAwMDA0MDgzIDAwMDAwIG4gCjAwMDAwMDQxMDQgMDAwMDAgbiAKMDAwMDAwNDI5OCAwMDAwMCBuIAowMDAwMDA0NjAyIDAwMDAwIG4gCjAwMDAwMDQ3NzMgMDAwMDAgbiAKMDAwMDAwNDgwNSAwMDAwMCBuIAowMDAwMDA1MTAyIDAwMDAwIG4gCjAwMDAwMDUxOTkgMDAwMDAgbiAKdHJhaWxlcgo8PC9TaXplIDE0L1Jvb3QgMTIgMCBSCi9JbmZvIDEzIDAgUgovSUQgWyA8RDJCNkU0QTExNzExOTUxMURDNjg5NzE3MkNBMzI5MTk+CjxEMkI2RTRBMTE3MTE5NTExREM2ODk3MTcyQ0EzMjkxOT4gXQovRG9jQ2hlY2tzdW0gL0I4MEU4QTM0Qjg5RTUwMDg4QzlCMTlFMTcxMjA4QTAxCj4+CnN0YXJ0eHJlZgo1NDUyCiUlRU9GCg==',
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
    'field_oc_ministry' => array(
      'und' => array(
        0 => array(
          'machine_name' => 'oc_ministry1',
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
  );

return $content;
}
