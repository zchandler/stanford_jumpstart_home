<?php
/**
 * Description of context goes here.
 */

$context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = '12-col-banner-nsb-homepage';
$context->description = 'Home page layout with a 12 column banner and no sidebars';
$context->tag = 'Home Page';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'dev/home' => 'dev/home',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'bean-flexi-block-for-the-home-page' => array(
        'module' => 'bean',
        'delta' => 'flexi-block-for-the-home-page',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
      'bean-homepage-about-block' => array(
        'module' => 'bean',
        'delta' => 'homepage-about-block',
        'region' => 'sidebar_first',
        'weight' => '-10',
      ),
      'bean-homepage-banner-image' => array(
        'module' => 'bean',
        'delta' => 'homepage-banner-image',
        'region' => 'main_upper',
        'weight' => '-10',
      ),
      'bean-announcements-block' => array(
        'module' => 'bean',
        'delta' => 'announcements-block',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Home Page');
t('Home page layout with a 12 column banner and no sidebars');
