<?php

/**
 * @file
 * Install content with require fields only.
 */

 use Drupal\block_content\Entity\BlockContent;
 use Drupal\media\Entity\Media;
 use Drupal\node\Entity\Node;
 use Drupal\Core\File\FileSystemInterface;

// Delete all custom block entities.
$block_content = \Drupal::entityTypeManager()->getStorage('block_content')->loadMultiple();
foreach ($block_content as $block) {
  $block->delete();
}

// Create a basic address block.
$block = BlockContent::create([
  'type' => 'basic',
  'info' => 'Address',
  'uuid' => 'c0b5b8a1-5b1f-4b1f-9b1f-5b1f4b1f9b1f',
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
]);

$block->save();

// Create a basic about block.
$block = BlockContent::create([
  'type' => 'basic',
  'info' => 'About',
  'uuid' => 'c7844630-a903-4f91-8525-ab5612b2e996',
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
]);

$block->save();

// Save media images.
$homepage_images = [
  'Beach 1' => 'derek-thomson-TWoL-QCZubY-unsplash.jpg',
  'Beach 2' => 'frank-mckenna-eXHeq48Z-Q4-unsplash.jpg',
  'Church' => 'karl-fredrickson-86DI4OKDkCc-unsplash.jpg',
  'Climb' => 'nathan-dumlao-pLoMDKtl-JY-unsplash.jpg',
  'Flower' => 'nicolas-reymond-tNm6DL_nO-o-unsplash.jpg',
  'City' => 'roman-kraft-g_gwdpsCVAY-unsplash.jpg',
  'Children' => 'erika-giraud-4EFeD-VTgu4-unsplash.jpg',
  'Students' => 'brooke-cagle--uHVRvDr7pg-unsplash.jpg',
  'Groups' => 'small-group-network-e5juUFoRHpE-unsplash.jpg',
  'Hero' => 'church-hero.png',
];

$media_files = [];

// Save each homepage image.
foreach ($homepage_images as $image_alt => $image_name) {
  $module_path = \Drupal::service('extension.list.module')->getPath('openchurch_core');
  $image_path = $module_path . '/images/' . $image_name;
  $data = file_get_contents($image_path);
  $file = \Drupal::service('file.repository')->writeData($data, 'public://' . $image_name, FileSystemInterface::EXISTS_REPLACE);
  $media = Media::create([
    'bundle' => 'image',
    'name' => $image_name,
    'field_media_image' => [
      'target_id' => $file->id(),
      'alt' => $image_alt,
      'title' => $image_alt,
    ],
  ]);
  $media->save();

  // Save the media entity for later use.
  $media_files[$image_alt] = $media;
}

// Create a Gallery block.
$block = BlockContent::create([
  'type' => 'gallery',
  'info' => 'Homepage Gallery',
  'uuid' => '36981c55-fa8c-484c-b99a-640335329e00',
  'field_images' => [
    [
      'target_id' => $media_files['Beach 1']->id(),
    ],
  ],
]);

$block->save();

// Create Contact Hero block.
$block = BlockContent::create([
  'type' => 'hero',
  'info' => 'Contact Hero',
  'field_title' => 'Reach Out',
  'uuid' => 'e6ce06bf-6463-4fe9-9eec-44f66b74c60c',
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
  'field_image' => [
    'target_id' => $media_files['Hero']->id(),
  ],
]);

$block->save();

// Create homepage CTA block.
$block = BlockContent::create([
  'type' => 'cta',
  'info' => 'Homepage CTA block',
  'field_title' => 'Find a place to connect and grow through a small group, class, or regular gathering.',
  'uuid' => '2a47ba12-37d1-462a-bf73-89527ab481ad',
  'field_link' => [
    'uri' => 'https://www.drupal.org',
    'title' => 'Become a Member',
  ],
  'field_image' => [
    'target_id' => $media_files['Church']->id(),
  ],
]);

$block->save();

// Create homepage quote block.
$block = BlockContent::create([
  'type' => 'quote',
  'info' => 'Homepage Quote block',
  'field_summary' => 'For God so loved the world that he gave his one and only begotten Son, that who ever believes in him shall not perish but have eternal life.',
  'uuid' => '9a6dcb9c-f27e-4c8e-afc3-b9028d38bce2',
  'field_author' => 'John 3:16 (KJV)',
]);

$block->save();

// Create homepage cards block.
$block = BlockContent::create([
  'type' => 'cards',
  'info' => 'Homepage Cards block',
  'uuid' => 'c990ba75-f2fc-478d-a4e3-658634df7aaf',
]);

$block->save();

// Create homepage hero no video block.
$block = BlockContent::create([
  'type' => 'hero',
  'info' => 'Homepage Hero No Video',
  'uuid' => '78fa9985-e444-48aa-baec-a0ddd5674a35',
  'field_title' => 'Grace and Truth',
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
  'field_image' => [
    'target_id' => $media_files['Church']->id(),
  ],
]);

$block->save();

// Create homepage carousel block.
$block = BlockContent::create([
  'type' => 'carousel',
  'info' => 'Homepage Carousel block',
  'uuid' => '8808c2ce-8398-11ed-a1eb-0242ac120002',
  'field_image' => [
    'target_id' => $media_files['Climb']->id(),
    'alt' => 'Climb',
  ],
]);

$block->save();

// Create 404 page.
$node = Node::create([
  'type' => 'page',
  'title' => 'Page not found',
  'uid' => 1,
  'status' => 1,
  'promote' => 1,
  'sticky' => 1,
  'body' => [
    'value' => 'The page you are looking for might have been removed, had its name changed, or is temporarily unavailable.',
    'format' => 'full_html',
  ],
  'path' => [
    'alias' => '/404',
  ],
]);

$node->save();

// Create 403 page.
$node = Node::create([
  'type' => 'page',
  'title' => 'Access denied',
  'uid' => 1,
  'status' => 1,
  'promote' => 1,
  'sticky' => 1,
  'body' => [
    'value' => 'You are not authorized to access this page.',
    'format' => 'full_html',
  ],
  'path' => [
    'alias' => '/403',
  ],
]);

$node->save();

// Set 404 page.
\Drupal::configFactory()->getEditable('system.site')->set('page.404', '/404')->save();

// Set 403 page.
\Drupal::configFactory()->getEditable('system.site')->set('page.403', '/403')->save();

// Create homepage basic node.
$node = Node::create([
  'type' => 'page',
  'title' => 'Welcome!',
  'uid' => 1,
  'status' => 1,
  'promote' => 1,
  'sticky' => 1,
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
  'path' => [
    'alias' => '/welcome',
  ],
]);

$node->save();

// Set front page to welcome node.
\Drupal::configFactory()->getEditable('system.site')->set('page.front', '/welcome')->save();

// Create homepage alt node.
$node = Node::create([
  'type' => 'page',
  'title' => 'Homepage (Alt)',
  'uid' => 1,
  'status' => 1,
  'promote' => 1,
  'sticky' => 1,
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
  'path' => [
    'alias' => '/homepage-alt',
  ],
]);

$node->save();

// Create About us basic page.
$node = Node::create([
  'type' => 'page',
  'title' => 'About us',
  'uid' => 1,
  'status' => 1,
  'body' => [
    'value' => '',
    'format' => 'full_html',
  ],
  'path' => [
    'alias' => '/about-us',
  ],
]);

$node->save();

$x = $y = 0;

// Create sample article nodes.
for ($c = 0; $c < 6; $c++) {
  $created = strtotime('-' . ($c + $y) . ' months');

  $node = Node::create([
    'type' => 'article',
    'title' => 'Perseverance of the Saints',
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
    'created' => $created + 3600,
  ]);

  $node->save();

  $node = Node::create([
    'type' => 'article',
    'title' => 'Lord is Sufficient for all of our needs',
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
    'created' => $created,
  ]);

  $node->save();

  $y++;
}

$x = $y = 0;

// Create sample event nodes.
for ($c = 0; $c < 6; $c++) {
  $created = strtotime('-' . ($c + $y) . ' months');
  $created_iso = date('Y-m-d\TH:i:s', $created);

  $node = Node::create([
    'type' => 'event',
    'title' => 'Perseverance of the Saints',
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
    'field_date' => [
      'value' => $created_iso,
    ],
  ]);

  $node->save();

  $node = Node::create([
    'type' => 'event',
    'title' => 'Lord is Sufficient for all of our needs',
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
    'field_date' => [
      'value' => $created_iso,
    ],
  ]);

  $node->save();

  $y++;
}

$ministries = [
  'Children' => 'Children\'s Ministry',
  'Students' => 'Students Ministry',
  'Groups' => 'Groups',
];

$ministry_nids = [];

// Save ministry nodes.
foreach ($ministries as $media_key => $title) {
  $node = Node::create([
    'type' => 'ministry',
    'title' => $title,
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
  ]);

  $node->save();
}

$sermons = [
  'Christ-Occupied',
  'God\'s Love',
  'Faithfulness',
];

$sermons_nids = [];

// Save sermon nodes.
foreach ($sermons as $c => $title) {
  $node = Node::create([
    'type' => 'sermon',
    'title' => $title,
    'uid' => 1,
    'status' => 1,
    'body' => [
      'value' => '',
      'format' => 'full_html',
      'summary' => '',
    ],
    'created' => strtotime('-' . $c . ' days'),
  ]);

  $node->save();
}
