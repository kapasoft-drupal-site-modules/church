<?php
/**
 * @file
 * designssquare_com_site_church_configurations_data_structures.features.inc
 */

/**
 * Implements hook_context_override_default_settings().
 */
function designssquare_com_site_church_configurations_data_structures_context_override_default_settings() {
$context_override = array();

$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_category',
  'description' => 'for posts of certain category',
  'tag' => '',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_entry',
  'description' => 'blog_entry',
  'tag' => '',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -7,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_theme_espresso_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_posts',
  'description' => 'blog posts',
  'tag' => '',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_blog_content-posts' => array(
          'module' => 'views',
          'delta' => 'ds_blog_content-posts',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -7,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_theme_espresso_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_tags',
  'description' => 'blog_tags',
  'tag' => '',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'espresso_blog_entry',
  'description' => 'layout for a blog entry - post',
  'tag' => 'designssquare.com.theme.espresso',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_portfolio_block-projects' => array(
          'module' => 'views',
          'delta' => 'ds_portfolio_block-projects',
          'region' => 'sidebar_second',
          'weight' => -7,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_second',
          'weight' => -6,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_second',
          'weight' => -5,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => -4,
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'sidebar_second',
          'weight' => -3,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_theme_espresso_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'name' => 'espresso_blog_posts',
  'description' => 'layout for blog posts',
  'tag' => 'designssquare.com.theme.espresso',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_blog_content-posts' => array(
          'module' => 'views',
          'delta' => 'ds_blog_content-posts',
          'region' => 'content',
          'weight' => -9,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -7,
        ),
        'views-ds_portfolio_block-projects' => array(
          'module' => 'views',
          'delta' => 'ds_portfolio_block-projects',
          'region' => 'sidebar_second',
          'weight' => -24,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_second',
          'weight' => -23,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_second',
          'weight' => -22,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_second',
          'weight' => -21,
        ),
        'designssquare_com_theme_blocks-ds_social_sidebar' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social_sidebar',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'disabled' => TRUE,
  'export_module' => 'designssquare_com_theme_espresso_structure',
);
$context_override[] = array(
  'name' => 'espresso_home',
  'description' => 'home page layout',
  'tag' => 'designssquare.com.theme.espresso',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home' => 'home',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_blocks-ds_announcement' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_announcement',
          'region' => 'row_one',
          'weight' => -9,
        ),
        'views-558bb08c8f89a316f80e530b926f4bef' => array(
          'module' => 'views',
          'delta' => '558bb08c8f89a316f80e530b926f4bef',
          'region' => 'row_two',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about',
          'region' => 'row_three',
          'weight' => -9,
        ),
        'views-ds_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_blog_slider-slider',
          'region' => 'row_three',
          'weight' => -7,
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'row_three',
          'weight' => -6,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'disabled' => TRUE,
  'export_module' => 'designssquare_com_theme_espresso_structure',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'espresso_site_wide',
  'description' => 'state wide context for espresso theme',
  'tag' => 'designssquare.com.theme.espresso',
  'conditions' => array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => -10,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_copy_rights' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_copy_rights',
          'region' => 'footer',
          'weight' => -10,
        ),
        'menu-menu-bottom-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-bottom-menu',
          'region' => 'footer_navigation',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_theme_espresso_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'gallery_index',
  'description' => 'context for the Photo Gallery Index space',
  'tag' => 'designssquare.com.widget.gallery',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_gallery_index' => 'ds_gallery_index',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_gallery_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_gallery_all-all',
          'region' => 'content',
          'weight' => -19,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -18,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_photo_gallery_configurations_structure_data',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'newsletter_entry',
  'description' => '',
  'tag' => 'designssquare.com.widget.newsletter',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_newsletter' => 'ds_newsletter',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_newsletter_block-block' => array(
          'module' => 'views',
          'delta' => 'ds_newsletter_block-block',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_newsletter_configurations_data_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'newsletter_index',
  'description' => '',
  'tag' => 'designssquare.com.widget.newsletter',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_newsletter_index' => 'ds_newsletter_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_newsletter_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_newsletter_all-all',
          'region' => 'content',
          'weight' => -10,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -9,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_newsletter_configurations_data_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'podcast_entry',
  'description' => '',
  'tag' => 'designssquare.com.widget.podcast',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_podcast' => 'ds_podcast',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_podcast_block-block' => array(
          'module' => 'views',
          'delta' => 'ds_podcast_block-block',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_podcast_configurations_data_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'podcast_index',
  'description' => '',
  'tag' => 'designssquare.com.widget.podcast',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_podcast_index' => 'ds_podcast_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_podcast_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_podcast_all-all',
          'region' => 'content',
          'weight' => -10,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -9,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_podcast_configurations_data_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'portfolio_index',
  'description' => '',
  'tag' => 'designssquare.com.widget.portfolio',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_portfolio_index' => 'ds_portfolio_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_portfolio_projects-projects' => array(
          'module' => 'views',
          'delta' => 'ds_portfolio_projects-projects',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_portfolio_structure_and_configurations',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
return $context_override;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function designssquare_com_site_church_configurations_data_structures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function designssquare_com_site_church_configurations_data_structures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function designssquare_com_site_church_configurations_data_structures_image_default_styles() {
  $styles = array();

  // Exported image style: ds_blog_img_post_big.
  $styles['ds_blog_img_post_big'] = array(
    'name' => 'ds_blog_img_post_big',
    'label' => 'DS Image Post Teaser Big',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 780,
          'height' => 468,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_img_post_slider.
  $styles['ds_blog_img_post_slider'] = array(
    'name' => 'ds_blog_img_post_slider',
    'label' => 'DS Image Post Teaser Slider',
    'effects' => array(
      8 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_img_post_small.
  $styles['ds_blog_img_post_small'] = array(
    'name' => 'ds_blog_img_post_small',
    'label' => 'DS Img Post Teaser Small',
    'effects' => array(
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 370,
          'height' => 222,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_video_post_big.
  $styles['ds_blog_video_post_big'] = array(
    'name' => 'ds_blog_video_post_big',
    'label' => 'DS Video Post Teaser Big',
    'effects' => array(
      6 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_video_post_slider.
  $styles['ds_blog_video_post_slider'] = array(
    'name' => 'ds_blog_video_post_slider',
    'label' => 'DS Video Post Teaser Slider',
    'effects' => array(
      7 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_video_post_small.
  $styles['ds_blog_video_post_small'] = array(
    'name' => 'ds_blog_video_post_small',
    'label' => 'DS Video Post Teaser Small',
    'effects' => array(
      4 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 122,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_vimeo_post_big.
  $styles['ds_blog_vimeo_post_big'] = array(
    'name' => 'ds_blog_vimeo_post_big',
    'label' => 'DS Vimeo Post Teaser Big',
    'effects' => array(
      5 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_vimeo_post_slider.
  $styles['ds_blog_vimeo_post_slider'] = array(
    'name' => 'ds_blog_vimeo_post_slider',
    'label' => 'DS Vimeo Post Teaser Slider',
    'effects' => array(
      9 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_blog_vimeo_post_small.
  $styles['ds_blog_vimeo_post_small'] = array(
    'name' => 'ds_blog_vimeo_post_small',
    'label' => 'DS Vimeo Post Teaser Small',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 1,
          'height' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_foto_gallery_block.
  $styles['ds_foto_gallery_block'] = array(
    'name' => 'ds_foto_gallery_block',
    'label' => 'DS Foto Gallery Block',
    'effects' => array(
      3 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 80,
          'height' => 52,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_foto_gallery_single.
  $styles['ds_foto_gallery_single'] = array(
    'name' => 'ds_foto_gallery_single',
    'label' => 'DS Foto Gallery Single',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 720,
          'height' => 467.53,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_foto_gallery_teaser.
  $styles['ds_foto_gallery_teaser'] = array(
    'name' => 'ds_foto_gallery_teaser',
    'label' => 'DS Foto Gallery Teaser',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 245,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_podcast_block_img.
  $styles['ds_podcast_block_img'] = array(
    'name' => 'ds_podcast_block_img',
    'label' => 'DS Podcast Block Img',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 80,
          'height' => 52,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ds_podcast_teaser_img.
  $styles['ds_podcast_teaser_img'] = array(
    'name' => 'ds_podcast_teaser_img',
    'label' => 'DS Podcast Teaser Img',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 252,
          'height' => 164,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function designssquare_com_site_church_configurations_data_structures_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_strongarm_override_default_settings().
 */
function designssquare_com_site_church_configurations_data_structures_strongarm_override_default_settings() {
$strongarm_override = array();

$strongarm_override[] = array(
  'name' => 'site_name',
  'value' => 'Latviešu Draudze Dvīņu Pilsētās',
);
$strongarm_override[] = array(
  'name' => 'site_slogan',
  'value' => 'Minneapoles - St.Paulas evaņģēliski luteriskā latviešu draudze',
);
$strongarm_override[] = array(
  'name' => 'theme_espresso_settings',
  'value' => array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-theme-settings',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_breadcrumb' => 1,
    'bootstrap_breadcrumb_home' => 1,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-page_header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => 'well',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-row_one' => '',
    'bootstrap_region_well-row_two' => '',
    'bootstrap_region_well-row_three' => '',
    'bootstrap_region_well-footer_navigation' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => 0,
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_descriptions' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => 0,
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_cdn' => '',
    'bootstrap_bootswatch' => '',
    'bootstrap_rebuild_registry' => 0,
    'bootstrap_toggle_jquery_error' => 0,
    'espresso__active_tab' => 'edit-backgrounds',
    'espresso_layout' => NULL,
    'espresso_color_scheme' => 'blue',
    'ds_theme_predefined_background' => '010',
    'ds_custom_bg_enabled' => 1,
    'ds_theme_custom_background' => 199,
  ),
);
return $strongarm_override;
}
