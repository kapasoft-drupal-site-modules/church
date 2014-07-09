<?php
/**
 * @file
 * designssquare_com_site_church_configurations_data_structures.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function designssquare_com_site_church_configurations_data_structures_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_blog';
  $context->description = 'layout for a blog entry - post';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ds_church_recent_posts_b-ver1' => array(
          'module' => 'views',
          'delta' => 'ds_church_recent_posts_b-ver1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ds_church_blog_categories_b-cat' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_categories_b-cat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-ds_church_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('layout for a blog entry - post');
  $export['espresso_site_church_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_blog_entry';
  $context->description = 'layout for a blog entry - post';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ds_church_recent_posts_b-ver1' => array(
          'module' => 'views',
          'delta' => 'ds_church_recent_posts_b-ver1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ds_church_blog_categories_b-cat' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_categories_b-cat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-ds_church_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('layout for a blog entry - post');
  $export['espresso_site_church_blog_entry'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_blog_posts';
  $context->description = 'layout for blog posts';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ds_blog_content-posts' => array(
          'module' => 'views',
          'delta' => 'ds_blog_content-posts',
          'region' => 'content',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-ds_church_recent_posts_b-ver1' => array(
          'module' => 'views',
          'delta' => 'ds_church_recent_posts_b-ver1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ds_church_blog_categories_b-cat' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_categories_b-cat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-ds_church_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('layout for blog posts');
  $export['espresso_site_church_blog_posts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_blog_taxanomy';
  $context->description = 'layout for a blog entry - post';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ds_church_recent_posts_b-ver1' => array(
          'module' => 'views',
          'delta' => 'ds_church_recent_posts_b-ver1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ds_church_blog_categories_b-cat' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_categories_b-cat',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-ds_church_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_church_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('layout for a blog entry - post');
  $export['espresso_site_church_blog_taxanomy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_gallery_index';
  $context->description = 'context for the Site Church Photo Gallery Index space';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_gallery_index' => 'ds_gallery_index',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ds_church_gallery_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_church_gallery_all-all',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for the Site Church Photo Gallery Index space');
  t('designssquare.com.site.church');
  $export['espresso_site_church_gallery_index'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_home';
  $context->description = 'home page layout for site Church';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'home' => 'home',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_blocks-ds_announcement' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_announcement',
          'region' => 'row_one',
          'weight' => '-30',
        ),
        'designssquare_com_theme_blocks-ds_about' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about',
          'region' => 'row_two',
          'weight' => '-10',
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'row_two',
          'weight' => '-6',
        ),
        'views-blog_church_slider-slider' => array(
          'module' => 'views',
          'delta' => 'blog_church_slider-slider',
          'region' => 'row_two',
          'weight' => '-8',
        ),
        'views-church_newsletter_teaser-teaser' => array(
          'module' => 'views',
          'delta' => 'church_newsletter_teaser-teaser',
          'region' => 'row_three',
          'weight' => '-10',
        ),
        'views-church_gallery_teaser-teaser' => array(
          'module' => 'views',
          'delta' => 'church_gallery_teaser-teaser',
          'region' => 'row_three',
          'weight' => '-9',
        ),
        'views-ds_church_podcast_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_church_podcast_t-teaser',
          'region' => 'row_three',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('home page layout for site Church');
  $export['espresso_site_church_home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_newsletter_index';
  $context->description = '';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_newsletter_index' => 'ds_newsletter_index',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-newsletter' => 'ds-newsletter',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ds_church_newsletter_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_church_newsletter_all-all',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  $export['espresso_site_church_newsletter_index'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_podcast_entry';
  $context->description = 'context for episode of Audio Sprediķis';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_podcast' => 'ds_podcast',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ds_chruch_podcast_b-block' => array(
          'module' => 'views',
          'delta' => 'ds_chruch_podcast_b-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for episode of Audio Sprediķis');
  t('designssquare.com.site.church');
  $export['espresso_site_church_podcast_entry'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_podcast_index';
  $context->description = 'context for Audio Sprediķis space';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_podcast_index' => 'ds_podcast_index',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ds_church_podcast_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_church_podcast_all-all',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for Audio Sprediķis space');
  t('designssquare.com.site.church');
  $export['espresso_site_church_podcast_index'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'espresso_site_church_site_wide';
  $context->description = 'state wide context for site church';
  $context->tag = 'designssquare.com.site.church';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-calendar-notikumi' => array(
          'module' => 'views',
          'delta' => 'calendar-notikumi',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-ds_chruch_newsletter_b-block' => array(
          'module' => 'views',
          'delta' => 'ds_chruch_newsletter_b-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-ds_church_gallery_b-block' => array(
          'module' => 'views',
          'delta' => 'ds_church_gallery_b-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-ds_chruch_podcast_b-spredikis' => array(
          'module' => 'views',
          'delta' => 'ds_chruch_podcast_b-spredikis',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-ds_church_recent_posts_b-ver1' => array(
          'module' => 'views',
          'delta' => 'ds_church_recent_posts_b-ver1',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'designssquare_com_theme_blocks-ds_copy_rights' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_copy_rights',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'menu-menu-bottom-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-bottom-menu',
          'region' => 'footer_navigation',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('designssquare.com.site.church');
  t('state wide context for site church');
  $export['espresso_site_church_site_wide'] = $context;

  return $export;
}
