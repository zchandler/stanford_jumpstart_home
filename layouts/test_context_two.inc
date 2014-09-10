<?php
/**
 * Description of context goes here.
 */

$context = new stdClass();
$context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'test_context_two';
$context->description = 'test';
$context->tag = 'Test Contexts';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
);
$context->reactions = array(
  'debug' => array(
    'debug' => 1,
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Test Contexts');
t('test');
