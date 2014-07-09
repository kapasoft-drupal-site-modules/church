<?php
/**
 * @file
 * designssquare_com_site_church_configurations_data_structures.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function designssquare_com_site_church_configurations_data_structures_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_about__content_block__content';
  $strongarm->value = '<p>Pēc trīs mēnešiem, ko esam pavadījuši mūsu jaunajās mājās, Mineapolē, nu varam teikt, ka daudz ir redzēts, daudz ir darīts un līdz ar to arī daudz ir iepazīts..<a href="iepazīsimies-tuvāk-ar-draudzes-mācītāju-dāgu-demandtu-un-viņ-sievu-ediju">.Turpināt lasī†</a></p>
';
  $export['ds_about__content_block__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_about__content_block__image';
  $strongarm->value = '197';
  $export['ds_about__content_block__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_about__content_block__reference';
  $strongarm->value = 'iepazīsimies-tuvāk-ar-draudzes-mācītāju-dāgu-demandtu-un-viņ-sievu-ediju';
  $export['ds_about__content_block__reference'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_about__content_block__title';
  $strongarm->value = 'Iepazīsimies tuvāk ar draudzes mācītāju Dāgu Demandtu un viņa sievu Ediju';
  $export['ds_about__content_block__title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_announcement__content_block__content';
  $strongarm->value = '<p>Svētdien, 29. jūnijā, pulksten 10:00 dievkalpojums Benjamina un Betsijas Aļļes vadībā.  Sekos sadraudzība blakus telpā</p>
<p>Sakarā ar Amerikas Savienoto Valstu Neatkarības dienu nenotiks dievkalpojums svētdien, 6. jūlijā.</p>';
  $export['ds_announcement__content_block__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_announcement__content_block__title';
  $strongarm->value = 'Ziņojums: ';
  $export['ds_announcement__content_block__title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_copy_rights__content_block__content';
  $strongarm->value = '<p>© Copyright Latviešu Evan. Lut. Baznīca. Izveidotājs: <a href="http://www.kapasoft.com">KapaSoft Web Solutions</a></p>
';
  $export['ds_copy_rights__content_block__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_recent_tweets__content_block__button_text';
  $strongarm->value = 'Follow me on Twitter';
  $export['ds_recent_tweets__content_block__button_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_recent_tweets__content_block__content';
  $strongarm->value = '        <blockquote>
        Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua
    </blockquote>';
  $export['ds_recent_tweets__content_block__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_recent_tweets__content_block__link';
  $strongarm->value = '#';
  $export['ds_recent_tweets__content_block__link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_recent_tweets__content_block__title';
  $strongarm->value = 'Recent Tweets';
  $export['ds_recent_tweets__content_block__title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_social__content_block__content';
  $strongarm->value = '<ul class="nav">
        <li><a href="/"><span class="glyphicon glyphicon-link"></span> Twitter</a></li>
        <li><a href="/"><span class="glyphicon glyphicon-link"></span> Facebook</a></li>
        <li><a href="/"><span class="glyphicon glyphicon-link"></span> Flickr</a></li>
        <li><a href="/"><span class="glyphicon glyphicon-link"></span> Last.fm</a></li>
    </ul>';
  $export['ds_social__content_block__content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_social__content_block__title';
  $strongarm->value = 'MN Draudze Tīmeklī';
  $export['ds_social__content_block__title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = '';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/3';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'espresso';
  $export['theme_default'] = $strongarm;

  return $export;
}
