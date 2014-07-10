<?php
/**
 * @file
 * designssquare_com_site_church_data_assets.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function designssquare_com_site_church_data_assets_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. marts',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6c539d70-658d-461c-aef9-e8d7bdce1a33',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470420,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1ef06d83-9669-4734-98c5-71fd08566c16',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SvZv marts 2014.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/SvZv marts 2014.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 3589219,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => 'd54ebbd5-0277-4e9e-803a-98041500982d',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/SvZv marts 2014.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1393632000,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:53:40 +0000',
  'alias_url' => 'content/newsletter-5',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Dāmu saime',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aad353de-0da4-41fe-abfe-b529e9d12651',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404063712,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3afad769-7a44-4f99-9a51-2aa027dafd3e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="span3" style="text-align:justify;">
<p>Katra dāma, kas pieder Mineapoles - St. Paulas draudzē, neatkarīgi no vecuma un aktivitātes automātiski pieder arī draudzes dāmu saimē. Dāmu saimei ir valde un četras darba grupas. Tā kā dāmu saimei nav priekšnieces, tad tieši darba grupas ir tās, kas uzņemas lielāku atbildību. Parasti katra darba grupa uzņemas 3 mēnešus gadā, šajos mēnešos darba grupa galvenokārt atbild par kafijas galdu sadraudzības stundas laikā, kas parasti notiek pēc dievkalpojuma. Lielākā sarīkojumā, kā piemēram, Pļaujas svētkos un divos tirdziņos gadā - pavasara un Ziemsvētku, protams, iesaistās arī pārējās darba grupas. Dāmu saimes tirdziņi ir viens no lielākajiem ienākumu avotiem, kur tiek pārdoti dažādi virtuves labumi, kā dzeltenmaize, pīrāgi utt., pārdod arī dažādas latviskas mantas, gleznas, rotas lietas, tirdziņos ir aicināti iesaistīties visi no pārējās latviešu sabiedrības pilsētā. Dāmu saime notur valdes sēdes reizi mēnesī, kur tiek pārrunāti aktuālie jautājumi.</p>
</div>

<div class="span3" style="text-align:justify;">
<p>Laikā, kad tuvojas dāmu saimes gada sapulce, Vija Pelēce un Zigrīda Freiberga apzvana visas dāmas, kas ir iesaistījušās dāmu saimes darbā, un apjautājas, vai iesāktais darbs tiks turpināts. Ja kāda dāma nolemj vairs neiesaistīties, kandidātu izraudzīšanas komitejas pārstāves meklē jaunus kandidātus. Edija Banka-Demandta ir uzņēmusies valdes pārstāves amatu, kas nozīmē, ka reizēs, kad tuvosies dāmu komiteju sēdes plašākā mērogā, piemēram, latviešu baznīcas vidienes apgabala dāmu komiteju sēde, viņa tur dosies pārstāvēt draudzes dāmu saimi. Dāmu saimes gada sapulce notiek reizi gadā, parasti februāra mēnesī. Sēžu laikā sekretāre, Ausma Ģiga, protokolē pārrunāto, lai nākamajā valdes sēdē varētu to pieņemt. Kasiere Skaidrīte Dombrovska pārvalda dāmu saimes finanses, katrā sēdē sniedzot atskaiti par to, kas ir izdots un kas ir ieņemts. Laima Dingley un Selga Pētersone atbild par altāri baznīcā, viņu pienākumos ietilpst sekot līdzi liturģiskajām altārsegu krāsām, ar viņām abām var izkārtot altārziedu nolikšanu.</p>
</div>

<div class="span3" style="text-align:justify;">
<p>Ilze Grotāne un Baiba Rudzīte atbild par aprūpi ar veco paaudzi, ziņojot, piemēram, draudzes mācītājam, kur būtu nepieciešams aiziet apciemojumā. Katram draudzes loceklim, kam pāri 75, tiek izsūtīta dzimšanas dienas kartīte. Tiem, kam pāri 80 gadiem, Lieldienās tiek dāvināts dzeltenmaizes kukulītis un Ziemassvētkos piparkūku paciņas ar baznīcas gada grāmatām. Laikā, kad tuvojas dāmu saimes gada sapulce, Vija Pelēce un Zigrīda Freiberga apzvana visas dāmas, kas ir iesaistījušās dāmu saimes darbā, un apjautājas, vai iesāktais darbs tiks turpināts. Ja kāda dāma nolemj vairs neiesaistīties, kandidātu izraudzīšanas komitejas pārstāves meklē jaunus kandidātus. Edija Banka-Demandta ir uzņēmusies valdes pārstāves amatu, kas nozīmē, ka reizēs, kad tuvosies dāmu komiteju sēdes plašākā mērogā, piemēram, latviešu baznīcas vidienes apgabala dāmu komiteju sēde, viņa tur dosies pārstāvēt draudzes dāmu saimi.</p>
</div>

<div class="span3" style="text-align:justify;">
<p>Dāmu saime kā viena no draudzes nozarēm ir ļoti svarīga draudzes darbībā. Tā ir ļoti plaša nozare, jo tā sevī ietver visas draudzes dāmas. Protams, tā ir dāmu pašu izvēle, cik daudz un cik aktīvi iesaistīties. Dāmu saime aizpilda lielu daļu no draudzes - rosība virtuvē, rosība pie baznīcas kārtošanas, aprūpe pie draudzes slimajiem un vientuļajiem. Un, ja tā padomā, kur tad citur, ja ne pie kafijas tases un gardām kūciņām draudzes locekļi var atraisīties un tuvāk iepazīties. Kur tad citur, ja ne kārtojot galdus un mantas tirdziņam, cilvēki var labāk un personīgāk parunāties. Dāmas mūsu draudzē ir ļoti devīgas, daudz tiek ziedots ārpus mūsu draudzes robežām, piemēram, Kazdangas bērniem Latvijā, kaimiņu Walker draudzei, kuras baznīcas ēka nelaimes gadījumā nodega, „Host” amerikāņu ģimenēm, kas uz kādu laiku pie sevis uzņem Latvijas bāreņus. Katru gadu tiek ziedots mūsu pašu latviešu skolai, Garezeram, ALA (Amerikas latviešu apvienība) organizācijai „Drošais Tilts” un Okupācijas muzejam Latvijā.</p>
</div>

<div class="span12">
<ul class="thumbnails">
	<li class="span6">
	<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7651.JPG" style="background-color: rgb(240, 240, 240);" /></div>
	</li>
	<li class="span6">
	<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7647.JPG" style="background-color: rgb(240, 240, 240);" /></div>
	</li>
</ul>

<ul class="thumbnails">
	<li class="span4">
	<div class="thumbnail"><img alt="" src="http://lat-church.com/sites/default/files/styles/large/public/IMG_7637.JPG" /></div>
	</li>
	<li class="span4">
	<div class="thumbnail"><img alt="" src="http://lat-church.com/sites/default/files/styles/large/public/IMG_7641.JPG" style="background-color: rgb(240, 240, 240);" /></div>
	</li>
	<li class="span4">
	<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7677.JPG" style="background-color: rgb(240, 240, 240);" /></div>
	</li>
</ul>
</div>

<div class="span12">
<div class="thumbnail"><img alt="" height="1547" src="http://mndraudze.org/sites/default/files/styles/large/public/Damu-saime-Table.jpg" style="background-color: rgb(240, 240, 240);" width="1200" /></div>
</div>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="span3" style="text-align:justify;">
<p>Katra dāma, kas pieder Mineapoles - St. Paulas draudzē, neatkarīgi no vecuma un aktivitātes automātiski pieder arī draudzes dāmu saimē. Dāmu saimei ir valde un četras darba grupas. Tā kā dāmu saimei nav priekšnieces, tad tieši darba grupas ir tās, kas uzņemas lielāku atbildību. Parasti katra darba grupa uzņemas 3 mēnešus gadā, šajos mēnešos darba grupa galvenokārt atbild par kafijas galdu sadraudzības stundas laikā, kas parasti notiek pēc dievkalpojuma. Lielākā sarīkojumā, kā piemēram, Pļaujas svētkos un divos tirdziņos gadā - pavasara un Ziemsvētku, protams, iesaistās arī pārējās darba grupas. Dāmu saimes tirdziņi ir viens no lielākajiem ienākumu avotiem, kur tiek pārdoti dažādi virtuves labumi, kā dzeltenmaize, pīrāgi utt., pārdod arī dažādas latviskas mantas, gleznas, rotas lietas, tirdziņos ir aicināti iesaistīties visi no pārējās latviešu sabiedrības pilsētā. Dāmu saime notur valdes sēdes reizi mēnesī, kur tiek pārrunāti aktuālie jautājumi.</p>
</div>
<div class="span3" style="text-align:justify;">
<p>Laikā, kad tuvojas dāmu saimes gada sapulce, Vija Pelēce un Zigrīda Freiberga apzvana visas dāmas, kas ir iesaistījušās dāmu saimes darbā, un apjautājas, vai iesāktais darbs tiks turpināts. Ja kāda dāma nolemj vairs neiesaistīties, kandidātu izraudzīšanas komitejas pārstāves meklē jaunus kandidātus. Edija Banka-Demandta ir uzņēmusies valdes pārstāves amatu, kas nozīmē, ka reizēs, kad tuvosies dāmu komiteju sēdes plašākā mērogā, piemēram, latviešu baznīcas vidienes apgabala dāmu komiteju sēde, viņa tur dosies pārstāvēt draudzes dāmu saimi. Dāmu saimes gada sapulce notiek reizi gadā, parasti februāra mēnesī. Sēžu laikā sekretāre, Ausma Ģiga, protokolē pārrunāto, lai nākamajā valdes sēdē varētu to pieņemt. Kasiere Skaidrīte Dombrovska pārvalda dāmu saimes finanses, katrā sēdē sniedzot atskaiti par to, kas ir izdots un kas ir ieņemts. Laima Dingley un Selga Pētersone atbild par altāri baznīcā, viņu pienākumos ietilpst sekot līdzi liturģiskajām altārsegu krāsām, ar viņām abām var izkārtot altārziedu nolikšanu.</p>
</div>
<div class="span3" style="text-align:justify;">
<p>Ilze Grotāne un Baiba Rudzīte atbild par aprūpi ar veco paaudzi, ziņojot, piemēram, draudzes mācītājam, kur būtu nepieciešams aiziet apciemojumā. Katram draudzes loceklim, kam pāri 75, tiek izsūtīta dzimšanas dienas kartīte. Tiem, kam pāri 80 gadiem, Lieldienās tiek dāvināts dzeltenmaizes kukulītis un Ziemassvētkos piparkūku paciņas ar baznīcas gada grāmatām. Laikā, kad tuvojas dāmu saimes gada sapulce, Vija Pelēce un Zigrīda Freiberga apzvana visas dāmas, kas ir iesaistījušās dāmu saimes darbā, un apjautājas, vai iesāktais darbs tiks turpināts. Ja kāda dāma nolemj vairs neiesaistīties, kandidātu izraudzīšanas komitejas pārstāves meklē jaunus kandidātus. Edija Banka-Demandta ir uzņēmusies valdes pārstāves amatu, kas nozīmē, ka reizēs, kad tuvosies dāmu komiteju sēdes plašākā mērogā, piemēram, latviešu baznīcas vidienes apgabala dāmu komiteju sēde, viņa tur dosies pārstāvēt draudzes dāmu saimi.</p>
</div>
<div class="span3" style="text-align:justify;">
<p>Dāmu saime kā viena no draudzes nozarēm ir ļoti svarīga draudzes darbībā. Tā ir ļoti plaša nozare, jo tā sevī ietver visas draudzes dāmas. Protams, tā ir dāmu pašu izvēle, cik daudz un cik aktīvi iesaistīties. Dāmu saime aizpilda lielu daļu no draudzes - rosība virtuvē, rosība pie baznīcas kārtošanas, aprūpe pie draudzes slimajiem un vientuļajiem. Un, ja tā padomā, kur tad citur, ja ne pie kafijas tases un gardām kūciņām draudzes locekļi var atraisīties un tuvāk iepazīties. Kur tad citur, ja ne kārtojot galdus un mantas tirdziņam, cilvēki var labāk un personīgāk parunāties. Dāmas mūsu draudzē ir ļoti devīgas, daudz tiek ziedots ārpus mūsu draudzes robežām, piemēram, Kazdangas bērniem Latvijā, kaimiņu Walker draudzei, kuras baznīcas ēka nelaimes gadījumā nodega, „Host” amerikāņu ģimenēm, kas uz kādu laiku pie sevis uzņem Latvijas bāreņus. Katru gadu tiek ziedots mūsu pašu latviešu skolai, Garezeram, ALA (Amerikas latviešu apvienība) organizācijai „Drošais Tilts” un Okupācijas muzejam Latvijā.</p>
</div>
<div class="span12">
<ul class="thumbnails"><li class="span6">
<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7651.JPG" style="background-color: rgb(240, 240, 240);" /></div>
</li>
<li class="span6">
<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7647.JPG" style="background-color: rgb(240, 240, 240);" /></div>
</li>
</ul><ul class="thumbnails"><li class="span4">
<div class="thumbnail"><img alt="" src="http://lat-church.com/sites/default/files/styles/large/public/IMG_7637.JPG" /></div>
</li>
<li class="span4">
<div class="thumbnail"><img alt="" src="http://lat-church.com/sites/default/files/styles/large/public/IMG_7641.JPG" style="background-color: rgb(240, 240, 240);" /></div>
</li>
<li class="span4">
<div class="thumbnail"><img alt="" src="http://mndraudze.org/sites/default/files/styles/large/public/IMG_7677.JPG" style="background-color: rgb(240, 240, 240);" /></div>
</li>
</ul></div>
<div class="span12">
<div class="thumbnail"><img alt="" height="1547" src="http://mndraudze.org/sites/default/files/styles/large/public/Damu-saime-Table.jpg" style="background-color: rgb(240, 240, 240);" width="1200" /></div>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:41:52 +0000',
  'alias_url' => 'dāmu-saime',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LELBA jaunā mājas lapa tagad ir pieejama!',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8cd2ec2d-680f-4fc0-a54e-f207fe623a33',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1404575418,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40b0602b-6471-4eb6-97d5-5fa6d80c37a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Latviešu ev. lut. baznīcai Amerikā (LELBA) tagad ir jauna satikšanās vieta - jauna mājas lapa!!!www.lelba.orgAicinām tevi apskatīties un būt daļai no tās!Jaunās mājas lapas redaktore Edija Banka-Demandta</p>

<p><iframe align="middle" frameborder="1" height="500" scrolling="yes" src="http://www.lelba.org/lv/?timeZone=America/Chicago" width="600"></iframe></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Latviešu ev. lut. baznīcai Amerikā (LELBA) tagad ir jauna satikšanās vieta - jauna mājas lapa!!!<a href="http://www.lelba.orgAicin">www.lelba.orgAicin</a>ām tevi apskatīties un būt daļai no tās!Jaunās mājas lapas redaktore Edija Banka-Demandta</p>
<p><iframe align="middle" frameborder="1" height="500" scrolling="yes" src="http://www.lelba.org/lv/?timeZone=America/Chicago" width="600"></iframe></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(
    'und' => array(
      0 => array(
        'tid' => 22,
        'uuid' => '78e3dd9f-9ce9-44b4-9d51-daa286031bce',
      ),
      1 => array(
        'tid' => 23,
        'uuid' => '7729daa8-5f36-4ec6-8c28-a17ac291e512',
      ),
    ),
  ),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'lelba.jpg',
        'uri' => 'public://blog/lelba.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 412069,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => 'c1d1a71f-6c9d-4211-bf0f-3c26471f6d92',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 1073,
          'height' => 695,
        ),
        'alt' => '',
        'title' => '',
        'width' => 1073,
        'height' => 695,
        'uuid_features_file_path' => 'public://blog/lelba.jpg',
      ),
    ),
  ),
  'field_blog_sidebar' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 25,
        'uuid' => '6718abb1-0d1d-49b4-9bc2-49f1e3bbdd45',
      ),
    ),
  ),
  'field_posts_format' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
        'uuid' => '4724e570-b398-44db-bc53-db323445d51c',
      ),
    ),
  ),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-05 15:50:18 +0000',
  'alias_url' => 'LELBA-jaunā-mājas-lapa-tagad-ir-pieejama',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. janvāris',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c7370609-1c2a-473a-97a3-e20e1b1416ca',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470352,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '490cb3eb-971b-4a68-80ac-07c0ab152f3d',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Svetrita Zvani 2014 jan.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/Svetrita Zvani 2014 jan.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 2504172,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '4302c583-27ae-4f74-8743-38ac62ce5301',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/Svetrita Zvani 2014 jan.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1388534400,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:52:32 +0000',
  'alias_url' => 'content/newsletter-3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'MN Draudzes Avīze',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a8d57238-a36c-4ed3-8f2e-284b84296a46',
  'type' => 'blog_posts',
  'language' => 'und',
  'created' => 1404501695,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4d25540e-ac3e-4de4-8fa4-f8b2c9d994ea',
  'revision_uid' => 1,
  'field_blog_sidebar' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-04 19:21:35 +0000',
  'alias_url' => 'mn-draudzes-avīze',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tikšanās ar māsu draudzēm Latvijā',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '190f6957-4966-40bd-b884-7930b32405d0',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367505,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '54c53a04-5c0e-4999-b6be-5be2b1ba07de',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ikdienas steigā un kalpošanā mūsu pašu draudzē šeit, Mineapolē, bieži nākas piemirst, cik svarīgas ir mūsu attiecības ar māsu draudzēm Latvijā. Mineapoles draudze ir īpaši svētīta ar 5 „māsām” – Nīcas, Augstkalnes-Mežmuižas, Slokas, Salas Sv. Jāņa un Varakļānu Sv. Krusta draudzēm. Ciemojoties Latvijā augusta mēnesī, man un māc. Dāgam bija iespēja satikties un iepazīties ar šo draudžu mācītājiem. Apskatījām dievnamus un ieguvām pirmos iespaidus.10. augusta pievakarē satikāmies ar Nīcas draudzes māc. Arvīdu Bobinski un viņa kundzi Inesi. Kā vēlāk uzzinājām, Inese ir draudzes ērģelniece. Nedaudz vēlāk mums pievienojās arī draudzes kasiere. Vispirms apskatījām dievnamu, kas ir tiešām skaists un uzturēts labā stāvoklī. Tā kā tikāmies sestdienas vakarā, tad altāris jau bija sagatavots nākamajā dienā paredzētajām kristībām. Dievkalpojums svētdienā nebija paredzēts, tā vietā mācītājam bija jānovada vairāki kapu svētki viens pēc otra. Pēc baznīcas apskates mūs mīļi pacienāja ar vietējiem labumiem. Tur tad arī varējām pasēdēt un vairāk iepazīties. Uzzinājām, ka Nīcas dievnamam agrāk bijis arī zvanu tornis. 2. pasaules karā tas ir „nobumbots”. Tagad baznīcas zvans atrodas blakus dievnamam speciāli izveidotā paaugstinājumā. Turklāt, šo baznīcas zvanu draudzei dāvinājis Kārlis Ulmanis.Nākamajā dienā devāmies tālāk ceļā, lai satiktos ar Augstkalnes-Mežmuižas māc. Guntaru Lūsīti, draudzes priekšnieku Edvīnu, kasieri un diviem draudzes locekļiem. Tāpat kā Nīcas draudzē, arī šeit apskatījām dievnamu. Redzējām, ka baznīcai ir uzlikts jauns jumts. Sakristejā, kur notiek arī svētdienas skoliņa, mūs atkal gaidīja galds ar dažādiem gardumiem. Tur mums gāja jautri, jo draudzes mācītājs dalījās dažādos jokos, kādus ir dzirdējis vai pieredzējis saistībā ar draudzes dzīvi.15. augustā apciemojām Slokas draudzi un māc. Aivaru Gusevu. Salīdzinot ar divām iepriekšējām draudzēm, kas atrodas laukos, Slokas draudzes dzīve jau ir vairāk raksturīga pilsētas draudzes dzīvei. Ir lielāks baznīcā nācēju skaits svētdienās, tāpat arī draudzei ir atsevišķa ēka – svētdienas skolas nams „Brīnums”, kur arī norisinās dažādas aktivitātes, kā piemēram, koris, nometnes utt. Arī Slokā mūs mīļi pacienāja ar ēdienu, ko bija sarūpējušas divas draudzes locekles. Sapratām, ka Slokas draudzei ir liela sadraudzība ar vienu amerikāņu draudzi Floridā. Floridieši cītīgi apciemo Sloku vasaras periodā, kad tiek rīkotas nometnes. Apskatīt Salas Sv. Jāņa dievnamu mums diemžēl neizdevās, taču māc. Aivars, kurš tur arī kalpo, pastāstīja, ka draudzīte turas labi.Māc. Dāgam bija tas gods 18. augusta dievkalpojumā kalpot Varakļānu Sv. Krusta draudzē kopā ar draudzes māc. Reini Kulbergu. Interesanti bija tas, ka abiem mācītājiem savā starpā nebija tik daudz laika sarunāt, kurš darīs ko. Pēdējā brīdī tika nolemts, ka māc. Dāgs varētu brīvi sprediķot. Tā kā mums nebija līdzi talāra, māc. Reinis aizdeva vienu no savējiem. Viss izdevās tiešām labi un svētīgi. Dievkalpojumam sekoja sadraudzība, kur māc. Dāgs pastāstīja par mūsu draudzi. Tad abi gani devās uz māc. Reiņa dzīvokli, lai iepazītos ar sievu un bērniem. Bērni vēl ir par mazu, lai dotos uz dievkalpojumu. Māc. Reinis vēl kalpo 3 draudzēs – Ludzā, Rēzeknē un Viļānos. No tikšanās varēja saprast, ka lielākā vajadzība pašlaik ir māc. Reiņa Rēzeknes dzīvokļa savešana kārtībā, kas atrodas blakus baznīcai.Kā sveiciens no mūsu draudzes katram mācītājam tika pasniegta naudas velte 100 latu vērtībā, par ko mācītāji bija ļoti pateicīgi. Esam priecīgi, ka varējām&nbsp;tuvāk iepazīt šīs draudzes un ceram uz turpmāku attiecību veidošanu. &nbsp;&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Ikdienas steigā un kalpošanā mūsu pašu draudzē šeit, Mineapolē, bieži nākas piemirst, cik svarīgas ir mūsu attiecības ar māsu draudzēm Latvijā. Mineapoles draudze ir īpaši svētīta ar 5 „māsām” – Nīcas, Augstkalnes-Mežmuižas, Slokas, Salas Sv. Jāņa un Varakļānu Sv. Krusta draudzēm. Ciemojoties Latvijā augusta mēnesī, man un māc. Dāgam bija iespēja satikties un iepazīties ar šo draudžu mācītājiem. Apskatījām dievnamus un ieguvām pirmos iespaidus.10. augusta pievakarē satikāmies ar Nīcas draudzes māc. Arvīdu Bobinski un viņa kundzi Inesi. Kā vēlāk uzzinājām, Inese ir draudzes ērģelniece. Nedaudz vēlāk mums pievienojās arī draudzes kasiere. Vispirms apskatījām dievnamu, kas ir tiešām skaists un uzturēts labā stāvoklī. Tā kā tikāmies sestdienas vakarā, tad altāris jau bija sagatavots nākamajā dienā paredzētajām kristībām. Dievkalpojums svētdienā nebija paredzēts, tā vietā mācītājam bija jānovada vairāki kapu svētki viens pēc otra. Pēc baznīcas apskates mūs mīļi pacienāja ar vietējiem labumiem. Tur tad arī varējām pasēdēt un vairāk iepazīties. Uzzinājām, ka Nīcas dievnamam agrāk bijis arī zvanu tornis. 2. pasaules karā tas ir „nobumbots”. Tagad baznīcas zvans atrodas blakus dievnamam speciāli izveidotā paaugstinājumā. Turklāt, šo baznīcas zvanu draudzei dāvinājis Kārlis Ulmanis.Nākamajā dienā devāmies tālāk ceļā, lai satiktos ar Augstkalnes-Mežmuižas māc. Guntaru Lūsīti, draudzes priekšnieku Edvīnu, kasieri un diviem draudzes locekļiem. Tāpat kā Nīcas draudzē, arī šeit apskatījām dievnamu. Redzējām, ka baznīcai ir uzlikts jauns jumts. Sakristejā, kur notiek arī svētdienas skoliņa, mūs atkal gaidīja galds ar dažādiem gardumiem. Tur mums gāja jautri, jo draudzes mācītājs dalījās dažādos jokos, kādus ir dzirdējis vai pieredzējis saistībā ar draudzes dzīvi.15. augustā apciemojām Slokas draudzi un māc. Aivaru Gusevu. Salīdzinot ar divām iepriekšējām draudzēm, kas atrodas laukos, Slokas draudzes dzīve jau ir vairāk raksturīga pilsētas draudzes dzīvei. Ir lielāks baznīcā nācēju skaits svētdienās, tāpat arī draudzei ir atsevišķa ēka – svētdienas skolas nams „Brīnums”, kur arī norisinās dažādas aktivitātes, kā piemēram, koris, nometnes utt. Arī Slokā mūs mīļi pacienāja ar ēdienu, ko bija sarūpējušas divas draudzes locekles. Sapratām, ka Slokas draudzei ir liela sadraudzība ar vienu amerikāņu draudzi Floridā. Floridieši cītīgi apciemo Sloku vasaras periodā, kad tiek rīkotas nometnes. Apskatīt Salas Sv. Jāņa dievnamu mums diemžēl neizdevās, taču māc. Aivars, kurš tur arī kalpo, pastāstīja, ka draudzīte turas labi.Māc. Dāgam bija tas gods 18. augusta dievkalpojumā kalpot Varakļānu Sv. Krusta draudzē kopā ar draudzes māc. Reini Kulbergu. Interesanti bija tas, ka abiem mācītājiem savā starpā nebija tik daudz laika sarunāt, kurš darīs ko. Pēdējā brīdī tika nolemts, ka māc. Dāgs varētu brīvi sprediķot. Tā kā mums nebija līdzi talāra, māc. Reinis aizdeva vienu no savējiem. Viss izdevās tiešām labi un svētīgi. Dievkalpojumam sekoja sadraudzība, kur māc. Dāgs pastāstīja par mūsu draudzi. Tad abi gani devās uz māc. Reiņa dzīvokli, lai iepazītos ar sievu un bērniem. Bērni vēl ir par mazu, lai dotos uz dievkalpojumu. Māc. Reinis vēl kalpo 3 draudzēs – Ludzā, Rēzeknē un Viļānos. No tikšanās varēja saprast, ka lielākā vajadzība pašlaik ir māc. Reiņa Rēzeknes dzīvokļa savešana kārtībā, kas atrodas blakus baznīcai.Kā sveiciens no mūsu draudzes katram mācītājam tika pasniegta naudas velte 100 latu vērtībā, par ko mācītāji bija ļoti pateicīgi. Esam priecīgi, ka varējām tuvāk iepazīt šīs draudzes un ceram uz turpmāku attiecību veidošanu.   </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Augstkalnes draudze.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Augstkalnes draudze_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 32925,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'e929eb27-7bad-44d2-a24e-01318d296ff8',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 381,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 381,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Augstkalnes draudze_0.jpg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Varaklanu draudze.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/Varaklanu draudze.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 17253,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '3d0a9686-0dcb-4f2f-bd55-5fda0c97cec9',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 277,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 277,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Varaklanu draudze.jpeg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Slokas draudze.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/Slokas draudze.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 26251,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f057d790-0611-4130-a6ec-0a8dc892bee7',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 320,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 320,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Slokas draudze.jpeg',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Augstkalnes draudze.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Augstkalnes draudze.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 32925,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'd030f234-561e-46d4-a92f-650a55529efc',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 381,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 381,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Augstkalnes draudze.jpg',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Nicas draudze.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Nicas draudze.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 35503,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'd1b077f8-0b33-4d0b-8803-fe9bed2c25a1',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 455,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 455,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Nicas draudze.jpg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ikdienas steigā un kalpošanā mūsu pašu draudzē šeit, Mineapolē, bieži nākas piemirst, cik svarīgas ir mūsu attiecības ar māsu draudzēm Latvijā. Mineapoles draudze ir īpaši svētīta ar 5 „māsām” – Nīcas, Augstkalnes-Mežmuižas, Slokas, Salas Sv. Jāņa un Varakļānu Sv. Krusta draudzēm.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Ikdienas steigā un kalpošanā mūsu pašu draudzē šeit, Mineapolē, bieži nākas piemirst, cik svarīgas ir mūsu attiecības ar māsu draudzēm Latvijā. Mineapoles draudze ir īpaši svētīta ar 5 „māsām” – Nīcas, Augstkalnes-Mežmuižas, Slokas, Salas Sv. Jāņa un Varakļānu Sv. Krusta draudzēm.</p>
',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:18:25 +0000',
  'alias_url' => 'content/photo-gallery-5',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Mūsu baznīca',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b1350725-811b-4889-ad7f-53d27b0c493d',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367363,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '56e887c3-0d19-43ef-8067-2d54354d4e8b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Latviešu Ev. Lut. Draudzes&nbsp;Baznīca Mineapolises pilsētā Minnesotā</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Latviešu Ev. Lut. Draudzes Baznīca Mineapolises pilsētā Minnesotā</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '031.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/031_0.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 26032,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '50a8cd90-60c9-4150-85ee-0ad5ec5d9f70',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 320,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 320,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/031_0.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '031.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/031.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 26032,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '5db288a0-2d02-48df-969e-f2dd986471f3',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 320,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 320,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/031.jpeg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '020.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/020.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 34222,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '217579ec-d35c-4161-bd9e-6d10aec8f4e9',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 320,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 320,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/020.jpeg',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'IMG_0153.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/IMG_0153.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 28103,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'd1a21d71-a374-40a2-84b9-2127bda2e4d0',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/IMG_0153.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Latviešu Ev. Lut. Draudzes Baznīca Mineapolises pilsētā Minnesotā</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Latviešu Ev. Lut. Draudzes Baznīca Mineapolises pilsētā Minnesotā</p>
',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:16:03 +0000',
  'alias_url' => 'content/photo-gallery-3',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. maijs',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c5436a91-753f-4c6b-bed8-6ae7ab1b2c0c',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470497,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '589bd4cb-22b8-451d-a785-151c59c1c9a1',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Sv.ZV_. maija 2014.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/Sv.ZV_. maija 2014.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 2274870,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '454c378d-ae5b-4217-98ad-6852b00b121f',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/Sv.ZV_. maija 2014.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1398902400,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:54:57 +0000',
  'alias_url' => 'content/newsletter-7',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Viens novilka savu kurpi un deva to otram (8. jūnijs)',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bafe2c22-2ad9-44e8-be03-fe57c9086dc1',
  'type' => 'ds_podcast',
  'language' => 'und',
  'created' => 1403575822,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5994d573-f3ac-4b97-8576-12557d557c8a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Vasarsvētki -- Svētā Gara svētki</p>
',
        'summary' => '<p>Vasarsvētki -- Svētā Gara svētki</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Vasarsvētki -- Svētā Gara svētki</p>
',
        'safe_summary' => '<p>Vasarsvētki -- Svētā Gara svētki</p>
',
      ),
    ),
  ),
  'field_ds_podcast_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Viens novilka savu kurpi (1).mp3',
        'uri' => 'public://designssquare_com/widget/podcast/Viens novilka savu kurpi (1).mp3',
        'filemime' => 'audio/mpeg',
        'filesize' => 13150267,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'audio',
        'uuid' => '01504402-b0d0-4a22-992f-a35f3b7135dd',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/Viens novilka savu kurpi (1).mp3',
      ),
    ),
  ),
  'field_ds_podcast_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'priecigas pedas.jpg',
        'uri' => 'public://designssquare_com/widget/podcast/priecigas pedas.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 13423,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '9aff6697-166d-47f2-9b67-90fb08dd117a',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 224,
          'height' => 225,
        ),
        'alt' => '',
        'title' => '',
        'width' => 224,
        'height' => 225,
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/priecigas pedas.jpg',
      ),
    ),
  ),
  'field_ds_podcast_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1402185600,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_podcast_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-24 02:10:22 +0000',
  'alias_url' => 'content/podcast-8',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Projekta plāns baznīcai (18. maijs)',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c81b66fc-4986-4124-b86e-c75aae48c0dc',
  'type' => 'ds_podcast',
  'language' => 'und',
  'created' => 1403575534,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5f5eee19-f3c6-46ca-b3c7-a805b538ade4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lieldienu laika 5. svētdiena</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lieldienu laika 5. svētdiena</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_podcast_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Projekta plans baznicai.mp3',
        'uri' => 'public://designssquare_com/widget/podcast/Projekta plans baznicai.mp3',
        'filemime' => 'audio/mpeg',
        'filesize' => 14696322,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'audio',
        'uuid' => 'b51268c0-79a4-454d-afe2-665799d08c51',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/Projekta plans baznicai.mp3',
      ),
    ),
  ),
  'field_ds_podcast_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'baznicas zimejums.png',
        'uri' => 'public://designssquare_com/widget/podcast/baznicas zimejums.png',
        'filemime' => 'image/png',
        'filesize' => 14635,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '055ec9d3-561c-45d9-9cd4-1596c54cc53a',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 100,
          'height' => 100,
        ),
        'alt' => '',
        'title' => '',
        'width' => 100,
        'height' => 100,
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/baznicas zimejums.png',
      ),
    ),
  ),
  'field_ds_podcast_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1400371200,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_podcast_summary' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lieldienu laika 5. svētdiena</p>
',
        'format' => 'filtered_html',
        'safe_value' => '&lt;p&gt;Lieldienu laika 5. svētdiena&lt;/p&gt;
',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-24 02:05:34 +0000',
  'alias_url' => 'content/podcast-6',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2013. g. Jūnijs',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a2283f78-7862-4b46-9890-556f67147499',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1404705310,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '603eb05e-e050-4611-b9a7-28562a4b2c4c',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SvZv jūnijs 2013.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/SvZv jūnijs 2013.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 1293936,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '685608bd-7b37-4a54-aa04-49f1f6162652',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/SvZv jūnijs 2013.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1370044800,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-07 03:55:10 +0000',
  'alias_url' => 'content/2013-g-jūnijs',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Atbalsts Sunākstes bērniem',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e12b8133-8ec5-4d84-8db8-9c3d389563a2',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367572,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '62fc85e6-c05d-4f2b-97db-fddf273b9ec4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Otrdien, 2013. gada 13. augusta rītā, 4 cilvēku komanda, māc. Dāgs, viņa sieva Edija, Edijas draudzenes Ilvija un Sarma, devās uz Sunākstes pagastu Sēlijā, netālu no Jēkabpils, lai iepriecinātu skolēnus, kuri tūlīt sāks savas skolas gaitas jaunajā mācību gadā. Ar māc. Alvja Āboliņa un skolotājas Dzintras organizēšanu, visi satikās Sunākstes pamatskolas lielajā zālē, kur notika iepazīšanās, bērniem un viņu vecākiem tika pastāstīts, ka šis atbalsts nāk no mineapolietes Veltas Zeltiņas (dzim. Sunākstē) piemiņas ziedojumiem un no LELBA projekta „Būsim gudri!” pāri palikušajiem līdzekļiem. Tika padziedātas pāris dziesmas un vēlāk uzspēlētas arī spēles. Kopā tika atbalstīti 13 bērni no 1. līdz 11. klasei. Atbalstā (katram bērnam apmēram 125 Ls) ietilpa apmaksātas siltas pusdienas visam mācību gadam, kā arī mugursomas, skolas piederumi un dāvanu kartes grāmatnīcā Zvaigzne ABC un sporta veikalā Fans - priekš sporta apaviem un sporta tērpiem. Tika atbalstīts viens puisis, kurš mācīsies 2. kursā (11. klasē) Saldus ugunsdzēsēju arodvidusskolā, ar stipendiju 300 Ls vērtībā. Laiks, kas tika pavadīts kopā ar bērniem, bija ļoti jauks un tas arī daudz ko mācīja. Šiem bērniem ikdienā neiet tik viegli, daudzi strādā smagus lauku darbus, lai varētu palīdzēt vecākiem. Bērni arī bija ļoti pieklājīgi un kārtīgi. Vairāk par šo var lasīt Daugavpils diecēzes mājas lapā: daugavpilsdieceze.lv</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Otrdien, 2013. gada 13. augusta rītā, 4 cilvēku komanda, māc. Dāgs, viņa sieva Edija, Edijas draudzenes Ilvija un Sarma, devās uz Sunākstes pagastu Sēlijā, netālu no Jēkabpils, lai iepriecinātu skolēnus, kuri tūlīt sāks savas skolas gaitas jaunajā mācību gadā. Ar māc. Alvja Āboliņa un skolotājas Dzintras organizēšanu, visi satikās Sunākstes pamatskolas lielajā zālē, kur notika iepazīšanās, bērniem un viņu vecākiem tika pastāstīts, ka šis atbalsts nāk no mineapolietes Veltas Zeltiņas (dzim. Sunākstē) piemiņas ziedojumiem un no LELBA projekta „Būsim gudri!” pāri palikušajiem līdzekļiem. Tika padziedātas pāris dziesmas un vēlāk uzspēlētas arī spēles. Kopā tika atbalstīti 13 bērni no 1. līdz 11. klasei. Atbalstā (katram bērnam apmēram 125 Ls) ietilpa apmaksātas siltas pusdienas visam mācību gadam, kā arī mugursomas, skolas piederumi un dāvanu kartes grāmatnīcā Zvaigzne ABC un sporta veikalā Fans - priekš sporta apaviem un sporta tērpiem. Tika atbalstīts viens puisis, kurš mācīsies 2. kursā (11. klasē) Saldus ugunsdzēsēju arodvidusskolā, ar stipendiju 300 Ls vērtībā. Laiks, kas tika pavadīts kopā ar bērniem, bija ļoti jauks un tas arī daudz ko mācīja. Šiem bērniem ikdienā neiet tik viegli, daudzi strādā smagus lauku darbus, lai varētu palīdzēt vecākiem. Bērni arī bija ļoti pieklājīgi un kārtīgi. Vairāk par šo var lasīt Daugavpils diecēzes mājas lapā: daugavpilsdieceze.lv</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Sunakste 2013_1.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Sunakste 2013_1_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 50119,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '7d4c16c7-ea33-4ca4-a507-1f1e842a6e18',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 365,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 365,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Sunakste 2013_1_0.jpg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Sunakste 2013_1.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Sunakste 2013_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 50119,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'ffb99326-a27e-4b11-8be2-6f2766a54e42',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 365,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 365,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Sunakste 2013_1.jpg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Sanukste 2013_2.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/Sanukste 2013_2.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 31907,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'e4389dc9-fcf9-4e46-96ae-24dc4562dcd2',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 320,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 320,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Sanukste 2013_2.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Otrdien, 2013. gada 13. augusta rītā, 4 cilvēku komanda, māc. Dāgs, viņa sieva Edija, Edijas draudzenes Ilvija un Sarma, devās uz Sunākstes pagastu Sēlijā, netālu no Jēkabpils, lai iepriecinātu skolēnus, kuri tūlīt sāks savas skolas gaitas jaunajā mācību gadā. Ar māc</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Otrdien, 2013. gada 13. augusta rītā, 4 cilvēku komanda, māc. Dāgs, viņa sieva Edija, Edijas draudzenes Ilvija un Sarma, devās uz Sunākstes pagastu Sēlijā, netālu no Jēkabpils, lai iepriecinātu skolēnus, kuri tūlīt sāks savas skolas gaitas jaunajā mācību gadā. Ar māc</p>
',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:19:32 +0000',
  'alias_url' => 'content/photo-gallery-6',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. jūnijs',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd9d128c1-acd7-405d-9971-35dc11fc7e36',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470546,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '641517bf-4744-4a2c-836c-edc7be99349a',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SZJunijs2014Krasas.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/SZJunijs2014Krasas_6.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 2043317,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '8d507ac8-3778-4ddc-af2b-f41227559c1f',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/SZJunijs2014Krasas_6.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1401580800,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:55:46 +0000',
  'alias_url' => 'content/newsletter-8',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Kontakts',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '56a25de6-ede0-4930-8c56-6810f4df6183',
  'type' => 'contact',
  'language' => 'und',
  'created' => 1404068562,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '70188351-b7b7-402b-98a1-481039dd940a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Sazinies ar MN Draudzi</h3>

<p>MN Draudze atrodas Latviešu Lut. Evan. Baznīcā dienvid Minneapolisē Minesotā. Te varētu bū† adrese un telefons.&nbsp;MN Draudze atrodas Latviešu Lut. Evan. Baznīcā dienvid Minneapolisē Minesotā. Te varētu bū† adrese un telefons.</p>

<h3>MN Draudze Virtuālajā vietā</h3>

<ul class="nav nav-vertical">
	<li><a href="/">Twitter</a></li>
	<li><a href="/">Facebook</a></li>
	<li><a href="/">Flickr</a></li>
</ul>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>Sazinies ar MN Draudzi</h3>
<p>MN Draudze atrodas Latviešu Lut. Evan. Baznīcā dienvid Minneapolisē Minesotā. Te varētu bū† adrese un telefons. MN Draudze atrodas Latviešu Lut. Evan. Baznīcā dienvid Minneapolisē Minesotā. Te varētu bū† adrese un telefons.</p>
<h3>MN Draudze Virtuālajā vietā</h3>
<ul class="nav nav-vertical"><li><a href="/">Twitter</a></li>
<li><a href="/">Facebook</a></li>
<li><a href="/">Flickr</a></li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 19:02:42 +0000',
  'alias_url' => 'sazinies-ar-minesotas-draudzi',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Skola',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'be2f5ddd-fe33-483b-ac52-b7fe69bc0573',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404064363,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '76cbdbe0-c895-459b-b8a8-921fcb50830d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1951. gadā pie draudzes nodibinājās arī svētdienas skola, kas gadu gaitā ieguva Latviešu skolas vārdu. Skolas darbs tagad notiek sestdienās. Tur piedalās bērni no bērnu dārza līdz devītai klasei. Daudzi no Latviešu skolas skolēniem pa vasarām turpina savu latvisko izglītību Gaŗezera Vasaras vidusskolā.</p>

<div class="span4">
<p><a href="http://www.latvianschool.com">http://www.latvianschool.com</a></p>
</div>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>1951. gadā pie draudzes nodibinājās arī svētdienas skola, kas gadu gaitā ieguva Latviešu skolas vārdu. Skolas darbs tagad notiek sestdienās. Tur piedalās bērni no bērnu dārza līdz devītai klasei. Daudzi no Latviešu skolas skolēniem pa vasarām turpina savu latvisko izglītību Gaŗezera Vasaras vidusskolā.</p>
<div class="span4">
<p><a href="http://www.latvianschool.com">http://www.latvianschool.com</a></p>
</div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:52:43 +0000',
  'alias_url' => 'minesotas-draudzes-skola',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pirmais Augsts',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c7e7ac17-71d1-4756-b880-29352ed93298',
  'type' => 'event',
  'language' => 'und',
  'created' => 1404100958,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8e477b6d-bb4e-4bc9-b4d7-77c169c9ada1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="color: rgba(255, 255, 255, 0.901961); font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 11px; line-height: 15.714285850524902px; background-color: rgba(255, 255, 255, 0.298039);">Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua</span></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Baznīca',
        'format' => NULL,
        'safe_value' => 'Baznīca',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-08-01T21:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-30 04:02:38 +0000',
  'alias_url' => 'content/pirmais-augsts',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pavisam vieni (25. maijs)',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9813079b-4405-4359-a956-11a46e9d9232',
  'type' => 'ds_podcast',
  'language' => 'und',
  'created' => 1403575688,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91a7594f-7312-47c0-80ee-9aefbbd9ce1a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Lieldienu laika 6. svētdiena</p>
',
        'summary' => '<p>Lieldienu laika 6. svētdiena</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lieldienu laika 6. svētdiena</p>
',
        'safe_summary' => '<p>Lieldienu laika 6. svētdiena</p>
',
      ),
    ),
  ),
  'field_ds_podcast_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Pavisam vieni.mp3',
        'uri' => 'public://designssquare_com/widget/podcast/Pavisam vieni.mp3',
        'filemime' => 'audio/mpeg',
        'filesize' => 13372384,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'audio',
        'uuid' => '9e766451-6195-412f-bd70-833d5e849946',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/Pavisam vieni.mp3',
      ),
    ),
  ),
  'field_ds_podcast_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'viens uz laipas.jpg',
        'uri' => 'public://designssquare_com/widget/podcast/viens uz laipas.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 1465,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '9478dacb-7568-46c0-a997-9654f0d55f17',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 100,
          'height' => 65,
        ),
        'alt' => '',
        'title' => '',
        'width' => 100,
        'height' => 65,
        'uuid_features_file_path' => 'public://designssquare_com/widget/podcast/viens uz laipas.jpg',
      ),
    ),
  ),
  'field_ds_podcast_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1400976000,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_podcast_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-24 02:08:08 +0000',
  'alias_url' => 'content/podcast-7',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. aprīlis',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '137cbff6-64c1-43c2-930c-4b8ce28fd387',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470456,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '92b8ef8d-b796-4d64-9216-13a4f5b96253',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Svetrita Zvani 2014 apr.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/Svetrita Zvani 2014 apr.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 1697587,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '03d08fdd-3856-4e4a-b216-fe60a60a0575',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/Svetrita Zvani 2014 apr.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1396310400,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:54:16 +0000',
  'alias_url' => 'content/newsletter-6',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Bibliotēka',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'eb108946-c4d1-4f6a-bd0b-4d5195e307c2',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404064464,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9a79e13d-e4ca-48c9-a705-ae222984b678',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="span4">
<p>Bibliotēka ir atvērta katra mēneša pirmajā svētdienā, vienu stundu pirms un pusstundu pēc dievkalpojuma, tas ir. : 9:00 – 10:00 un apm. 11:30 – 12:00 (pēc Lieldienām); 10:00 – 11:00 un 12:30 – 1:00 pp. (sākot ar pirmo Adventu līdz Lieldienām).</p>

<p>Draudzes locekļi vai citi, kam interesētu apskatīt vai lietot bibliotēkas grāmatas, var arī sarunāt citu laiku, zvanot draudzes bibliotēkārēm Annai Lindemanei-Hobbs 651 653-7301 vai Birutai Andersonei-Sprūds 651 636-0473</p>

<p>Pavasaŗa un Ziemassvētku tirdziņos bibliotēkāres pārdod jaunas un arī lietotas grāmatas, arī mūzikas tvartus (CD), video filmas, apsveikuma kartiņas, latviskus lipekļus / uzlīmes, u.c.</p>
</div>

<div class="span4">
<p>Jaunās grāmatas iegādājamies no ALAs, LELBAs un citiem apgādiem Amerikā, kā arī no vairākām grāmatnīcām Latvijā un Kanadā. Cilvēki, kam būtu interese, var ieteikt bibliotēkai vēlamo grāmatu nosaukumus.</p>

<p>Vairākas reizes gadā sūtām grāmatas uz Latviju, lietojot Latvian American Shipping Line pakalpojumus. Lielāko tiesu tās ir bibliotēkai saziedotas grāmatas, likvidējot personīgās māju bibliotēkas. Ir labi, ja ziedotāji pievieno kādu naudas summu sūtīšanas izdevumiem. Grāmatas sūtām Latvijas Nacionālās bibliotēkas sadales punktam (kur tās var saņemt Latvijas lauku bibliotēkas), Rakstniecības, teātŗa un mūzikas muzejam, arī Rīgas dizaina un mākslas vidusskolai, Lielvārdes grāmatu klētij, kā arī vairākām citām bibliotekām.</p>
</div>

<div class="span4">
<ul class="thumbnails">
	<li class="span4">
	<div class="thumbnail"><img alt="" src="sites/all/themes/latvianchurch/images/biblioteka/b_pic1.jpg" /></div>
	</li>
</ul>
</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Bibliotēka ir atvērta katra mēneša pirmajā svētdienā, vienu stundu pirms un pusstundu pēc dievkalpojuma, tas ir. : 9:00 – 10:00 un apm. 11:30 – 12:00 (pēc Lieldienām); 10:00 – 11:00 un 12:30 – 1:00 pp. (sākot ar pirmo Adventu līdz Lieldienām).</p>
<p>Draudzes locekļi vai citi, kam interesētu apskatīt vai lietot bibliotēkas grāmatas, var arī sarunāt citu laiku, zvanot draudzes bibliotēkārēm Annai Lindemanei-Hobbs 651 653-7301 vai Birutai Andersonei-Sprūds 651 636-0473</p>
<p>Pavasaŗa un Ziemassvētku tirdziņos bibliotēkāres pārdod jaunas un arī lietotas grāmatas, arī mūzikas tvartus (CD), video filmas, apsveikuma kartiņas, latviskus lipekļus / uzlīmes, u.c.</p>
<p>Jaunās grāmatas iegādājamies no ALAs, LELBAs un citiem apgādiem Amerikā, kā arī no vairākām grāmatnīcām Latvijā un Kanadā. Cilvēki, kam būtu interese, var ieteikt bibliotēkai vēlamo grāmatu nosaukumus.</p>
<p>Vairākas reizes gadā sūtām grāmatas uz Latviju, lietojot Latvian American Shipping Line pakalpojumus. Lielāko tiesu tās ir bibliotēkai saziedotas grāmatas, likvidējot personīgās māju bibliotēkas. Ir labi, ja ziedotāji pievieno kādu naudas summu sūtīšanas izdevumiem. Grāmatas sūtām Latvijas Nacionālās bibliotēkas sadales punktam (kur tās var saņemt Latvijas lauku bibliotēkas), Rakstniecības, teātŗa un mūzikas muzejam, arī Rīgas dizaina un mākslas vidusskolai, Lielvārdes grāmatu klētij, kā arī vairākām citām bibliotekām.</p>
<ul class="thumbnails"><li class="span4">
</li>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:54:24 +0000',
  'alias_url' => 'bibliotēka-minesotas-draudze',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Apciemojums mūsu draudzē!',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd802ca00-d921-4112-9c2c-e09dc11d2502',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367432,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9bbc168b-23e7-466b-b6f1-80661c5737b9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Svētdien, 28. jūlijā, draudzei bija tas prieks iepazīties ar trīs bāreņiem no Latvijas, kuri ciemojas divās amerikāņu ģimenēs. Pavadījām jaukas stundas ar bērniem, un viņu "Host" ģimenēm.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Svētdien, 28. jūlijā, draudzei bija tas prieks iepazīties ar trīs bāreņiem no Latvijas, kuri ciemojas divās amerikāņu ģimenēs. Pavadījām jaukas stundas ar bērniem, un viņu "Host" ģimenēm.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'grupa.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/grupa.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 34004,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '3a9d1b2e-0b73-4253-8cfa-ecd4e74405e4',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 360,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 360,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/grupa.jpg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'grupa.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/grupa_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 34004,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'a87dbd3f-351a-4613-b03e-ec56cadd32a9',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 360,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 360,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/grupa_0.jpg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '2_0.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/2_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 19648,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'eb49ce71-ccda-440a-a5c8-b3a07d1f3db1',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 360,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 360,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/2_0.jpg',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Cake.jpg',
        'uri' => 'public://designssquare_com/widget/gallery/Cake.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 36777,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'cbbc7433-3cc4-486d-8df5-9cba5ef83c10',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 360,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 360,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/Cake.jpg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Svētdien, 28. jūlijā, draudzei bija tas prieks iepazīties ar trīs bāreņiem no Latvijas, kuri ciemojas divās amerikāņu ģimenēs. Pavadījām jaukas stundas ar bērniem, un viņu "Host" ģimenēm.</p>
',
        'format' => 'filtered_html',
        'safe_value' => '<p>Svētdien, 28. jūlijā, draudzei bija tas prieks iepazīties ar trīs bāreņiem no Latvijas, kuri ciemojas divās amerikāņu ģimenēs. Pavadījām jaukas stundas ar bērniem, un viņu "Host" ģimenēm.</p>
',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:17:12 +0000',
  'alias_url' => 'content/photo-gallery-4',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pirmais Septembris',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a9deab2e-1f83-4419-9223-43b99dca99e0',
  'type' => 'event',
  'language' => 'und',
  'created' => 1404101166,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9efe34d7-8272-4d7b-8e01-fa64327c483b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="color: rgba(255, 255, 255, 0.901961); font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 11px; line-height: 15.714285850524902px; background-color: rgba(255, 255, 255, 0.298039);">Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua</span></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Baznīca',
        'format' => NULL,
        'safe_value' => 'Baznīca',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-09-01T04:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-30 04:06:06 +0000',
  'alias_url' => 'content/pirmais-septembris',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Piparkūku cepšana',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c272ab90-961f-4834-8e33-e43ee290862e',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367736,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bc8e34ff-eb8d-4fc2-b7f8-fe32df257eb7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 15px; line-height: 22.5px;">Ziemsvētku tirdziņš:&nbsp;sestdien, 7. decembrī, 2013,&nbsp;11 am - 3 pm.&nbsp;Loterija ar vērtīgiem laimestiem!&nbsp;</span></p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><span style="font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 15px; line-height: 22.5px;">Ziemsvētku tirdziņš: sestdien, 7. decembrī, 2013, 11 am - 3 pm. Loterija ar vērtīgiem laimestiem! </span></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'piparkukas_4.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/piparkukas_4.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 9890,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => 'a6c9e300-0385-49fd-90ca-217d2685585c',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 220,
          'height' => 165,
        ),
        'alt' => '',
        'title' => '',
        'width' => 220,
        'height' => 165,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/piparkukas_4.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'piparkukas_1.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/piparkukas_1.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 6730,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '0a41e1f5-fba5-4cc7-84cf-5467b67c5238',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 165,
          'height' => 220,
        ),
        'alt' => '',
        'title' => '',
        'width' => 165,
        'height' => 220,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/piparkukas_1.jpeg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'piparkukas_2.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/piparkukas_2.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 20333,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => 'acd9459f-9294-46fc-a474-a25d90b0e4da',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 360,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 360,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/piparkukas_2.jpeg',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'piparkukas_3.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/piparkukas_3.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 9342,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '42acc357-4c94-4ba0-bd54-259c6644dd07',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 165,
          'height' => 220,
        ),
        'alt' => '',
        'title' => '',
        'width' => 165,
        'height' => 220,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/piparkukas_3.jpeg',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'piparkukas_4.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/piparkukas_4_0.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 9890,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '1bc204a2-35c8-418f-8165-865e72dff2d9',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 220,
          'height' => 165,
        ),
        'alt' => '',
        'title' => '',
        'width' => 220,
        'height' => 165,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/piparkukas_4_0.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Ziemsvētku tirdziņš: sestdien, 7. decembrī, 2013, 11 am - 3 pm. Loterija ar vērtīgiem laimestiem!',
        'format' => NULL,
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:22:16 +0000',
  'alias_url' => 'content/photo-gallery-8',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Iepazīsimies tuvāk ar draudzes mācītāju Dāgu Demandtu un viņa sievu Ediju',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '77ef4f11-156e-4c84-a0bd-f7364a4b9b46',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404600458,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c9d7b606-5d20-4c3a-a86f-a115c8c3ebef',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Pēc trīs mēnešiem, ko esam pavadījuši mūsu jaunajās mājās, Mineapolē, nu varam teikt, ka daudz ir redzēts, daudz ir darīts un līdz ar to arī daudz ir iepazīts. Cilvēki draudzē un ārpus tās, pilsēta kā dienā, tā arī naktī. Un ja padomā, vēl daudz jaunā un nezināmā mums ir priekšā. Mēs cenšamies iepazīt draudzes cilvēkus, cik labi vien to spējam, bet rodas jautājums, vai tu esi paspējis iepazīt mūs? Iepazīsimies!<img alt="09_2010_DagsunEdija.jpg" class="thumbnail" height="167" src="/sites/default/files/09_2010_DagsunEdija.jpg" style="float:right" width="250" /></p>

<p>Mācītājs Dāgs, ar vidējo vārdu Aleksanders, ir dzimis 1976. gada 15. septembrī Ņujorkas pilsētā, Bruklinā. Ar trīs dienu vecumu viņš tika adoptēts vienā trimdas latviešu ģimenē, kur uzaudzis mammas, Māras Valdmanes, vecmammas un trīs vecmammas māsu gādībā. Pirmos trīs Dāga dzīves gadus ģimene dzīvoja Miami. Tad pārvācās uz Montreālu, Kanādā, kur ģimene bija dzīvojusi jau agrāk dzīvē. Dāgs ģimenē bija vienīgais bērns, tāpēc par uzmanības trūkumu sūdzēties nevarēja, īpaši, kad viņam divu vecmammu vietā bija veselas četras. Bērnībā Dāgam ļoti patika dzīvnieki, viņš rūpējās par kaķi Minnīti, kanārijputniņu Cherpy, zelta zivtiņu Ābrahāmu un bruņurupuci Gaiziņu. Viens no Dāga pirmajiem darbiem bija avīžu iznēsāšana vietējā rajonā. Pirmais grāds Dāgam ir tūrisma laukā, viņš strādāja Eurail firmā, kur pārdeva ekskursijas ar vilcienu pa Eiropu. Vēlāk dzīvē Dāgs palēnām juta, ka Kāds viņu aicina vienā citā kalpošanā. Tas bija aicinājums no Dieva. Vadot savu pirmo svētbrīdi 2004. gada 18. novembrī, viņš vēl nebija ņēmis nevienu kursu teoloģijā. Tas bija liels izaicinājums.</p>

<p>Un tagad, pēc apmēram 8 gadiem, ar Dieva palīgu un vadību Dāgs ir Dieva draudzes, Mineapoles - St. Paulas draudzes gans. Kopš 2008. gada Dāgs kalpoja kā ordinēts diakons, bet pavisam nesen, šī gada 3. martā, viņš tika ordinēts mācītāja amatā. Simboliski, ka ordinācija notika Floridā, netālu no Tampas, pavalstī, kur tika pavadīti Dāga pirmie dzīves gadi. Vasarā Dāgs pabeigs studijas maģistra grādā, kad iegūs Master of Divinity. Pašlaik viņš ņem pēdējo kursu Luther Seminary St. Paulā. Ar lielu prieku un lielu paļaušanos uz Dievu Dāgs ir uzsācis jaunu ceļu, ar Mineapoles draudzi kopīgi vienā solī staigājot.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Pēc trīs mēnešiem, ko esam pavadījuši mūsu jaunajās mājās, Mineapolē, nu varam teikt, ka daudz ir redzēts, daudz ir darīts un līdz ar to arī daudz ir iepazīts. Cilvēki draudzē un ārpus tās, pilsēta kā dienā, tā arī naktī. Un ja padomā, vēl daudz jaunā un nezināmā mums ir priekšā. Mēs cenšamies iepazīt draudzes cilvēkus, cik labi vien to spējam, bet rodas jautājums, vai tu esi paspējis iepazīt mūs? Iepazīsimies!</p>
<p>Mācītājs Dāgs, ar vidējo vārdu Aleksanders, ir dzimis 1976. gada 15. septembrī Ņujorkas pilsētā, Bruklinā. Ar trīs dienu vecumu viņš tika adoptēts vienā trimdas latviešu ģimenē, kur uzaudzis mammas, Māras Valdmanes, vecmammas un trīs vecmammas māsu gādībā. Pirmos trīs Dāga dzīves gadus ģimene dzīvoja Miami. Tad pārvācās uz Montreālu, Kanādā, kur ģimene bija dzīvojusi jau agrāk dzīvē. Dāgs ģimenē bija vienīgais bērns, tāpēc par uzmanības trūkumu sūdzēties nevarēja, īpaši, kad viņam divu vecmammu vietā bija veselas četras. Bērnībā Dāgam ļoti patika dzīvnieki, viņš rūpējās par kaķi Minnīti, kanārijputniņu Cherpy, zelta zivtiņu Ābrahāmu un bruņurupuci Gaiziņu. Viens no Dāga pirmajiem darbiem bija avīžu iznēsāšana vietējā rajonā. Pirmais grāds Dāgam ir tūrisma laukā, viņš strādāja Eurail firmā, kur pārdeva ekskursijas ar vilcienu pa Eiropu. Vēlāk dzīvē Dāgs palēnām juta, ka Kāds viņu aicina vienā citā kalpošanā. Tas bija aicinājums no Dieva. Vadot savu pirmo svētbrīdi 2004. gada 18. novembrī, viņš vēl nebija ņēmis nevienu kursu teoloģijā. Tas bija liels izaicinājums.</p>
<p>Un tagad, pēc apmēram 8 gadiem, ar Dieva palīgu un vadību Dāgs ir Dieva draudzes, Mineapoles - St. Paulas draudzes gans. Kopš 2008. gada Dāgs kalpoja kā ordinēts diakons, bet pavisam nesen, šī gada 3. martā, viņš tika ordinēts mācītāja amatā. Simboliski, ka ordinācija notika Floridā, netālu no Tampas, pavalstī, kur tika pavadīti Dāga pirmie dzīves gadi. Vasarā Dāgs pabeigs studijas maģistra grādā, kad iegūs Master of Divinity. Pašlaik viņš ņem pēdējo kursu Luther Seminary St. Paulā. Ar lielu prieku un lielu paļaušanos uz Dievu Dāgs ir uzsācis jaunu ceļu, ar Mineapoles draudzi kopīgi vienā solī staigājot.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-05 22:47:38 +0000',
  'alias_url' => 'iepazīsimies-tuvāk-ar-draudzes-mācītāju-dāgu-demandtu-un-viņ-sievu-ediju',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LOAM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '61968e5c-18ce-4018-8305-b9bb1f29a150',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404064663,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ca82b959-b7dd-4f52-97ca-8d2f3ec1a2e4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="span6">
<p>Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 13 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.</p>

<p>LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms." Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.</p>

<p>LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.</p>
</div>

<div class="span6">&nbsp;</div>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div class="span6">
<p>Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 13 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.</p>
<p>LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms." Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.</p>
<p>LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.</p>
</div>
<div class="span6"> </div>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:57:43 +0000',
  'alias_url' => 'latviešu-organizācijas-apvienība-minesotā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Brīvdabas dievkalpojums Bush Lake Park',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1d9ef767-d424-4044-a5c9-99ff95e50525',
  'type' => 'ds_gallery',
  'language' => 'und',
  'created' => 1403367660,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cc7eb6c7-fdf4-4f23-b137-96f10e274360',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Izbraukums iesākās ar dievkalpojumu plkst.10:00 no rīta. Dievkalpojumā arī bērniem&nbsp;bija iespēja ņemt dalību. Dziedājām divasbērnu dziesmiņas, kur varējām izkustēties,&nbsp;jo dziesmas bija ar kustībām. Tāpat arī&nbsp;draudzes māc. Dāgs bija sagatavojis uzrunu&nbsp;bērniem par visiem tik ļoti pazīstamajiem&nbsp;Oreo cepumiem. Kāds no māc. Dāga&nbsp;skolas, kur viņš studēja, viņam šos cepumus&nbsp;bija ieteicis pamēģināt. Esot ļoti labi ungaršīgi! Tā nu viņš uzticējās tam, ko draugsteica. Pamēģināja un tiešām – bija labi!&nbsp;Citreiz, kad ir brīži, kad kāds tuvs draugs&nbsp;mums kaut ko stāsta, kā piemēram, kaut ko&nbsp;par Dievu, Viņa dēlu Jēzu Kristu, tad ir vērts&nbsp;ieklausīties un pārbaudīt, ko tad tas draugsman ir teicis. Uzrunas sākumā bērniem bija&nbsp;jānosauc visi Oreo cepumu veidi, ko viņi&nbsp;pazīst. Saraksts bija garš. Dubultie,&nbsp;„fudge”, „winter” utt.er” utt.raugsman ir teicis. Uzrunas sākumā bērniem bija&nbsp;jānosauc visi Oreo cepumu veidi, ko viņi&nbsp;pazīst. Saraksts bija garš. Dubultie,&nbsp;„fudge”, „winter” utt.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Izbraukums iesākās ar dievkalpojumu plkst.10:00 no rīta. Dievkalpojumā arī bērniem bija iespēja ņemt dalību. Dziedājām divasbērnu dziesmiņas, kur varējām izkustēties, jo dziesmas bija ar kustībām. Tāpat arī draudzes māc. Dāgs bija sagatavojis uzrunu bērniem par visiem tik ļoti pazīstamajiem Oreo cepumiem. Kāds no māc. Dāga skolas, kur viņš studēja, viņam šos cepumus bija ieteicis pamēģināt. Esot ļoti labi ungaršīgi! Tā nu viņš uzticējās tam, ko draugsteica. Pamēģināja un tiešām – bija labi! Citreiz, kad ir brīži, kad kāds tuvs draugs mums kaut ko stāsta, kā piemēram, kaut ko par Dievu, Viņa dēlu Jēzu Kristu, tad ir vērts ieklausīties un pārbaudīt, ko tad tas draugsman ir teicis. Uzrunas sākumā bērniem bija jānosauc visi Oreo cepumu veidi, ko viņi pazīst. Saraksts bija garš. Dubultie, „fudge”, „winter” utt.er” utt.raugsman ir teicis. Uzrunas sākumā bērniem bija jānosauc visi Oreo cepumu veidi, ko viņi pazīst. Saraksts bija garš. Dubultie, „fudge”, „winter” utt.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_ds_gallery_featured_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'BushIzbraukums1.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/BushIzbraukums1.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 39329,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '924a2c76-18ab-4ef1-aeac-48c1e6200dd1',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 321,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 321,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/BushIzbraukums1.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_images' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'BushIzbraukums1.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/BushIzbraukums1_0.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 39329,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '8cecd1d8-4cbe-4d92-86f2-d37f040cf6ba',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 321,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 321,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/BushIzbraukums1_0.jpeg',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'BushLake2.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/BushLake2.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 32767,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '8ab44360-0b5d-46a6-95e9-4328c5fb4c3b',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 321,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 321,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/BushLake2.jpeg',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'BushLake3.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/BushLake3.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 42157,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '50184c1e-dfef-46b3-b51a-998a750aa878',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 480,
          'height' => 321,
        ),
        'alt' => '',
        'title' => '',
        'width' => 480,
        'height' => 321,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/BushLake3.jpeg',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'BushLake4.jpeg',
        'uri' => 'public://designssquare_com/widget/gallery/BushLake4.jpeg',
        'filemime' => 'image/jpeg',
        'filesize' => 23556,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '8d313883-6eb3-4c98-9a94-b715ad3d55c4',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 321,
          'height' => 480,
        ),
        'alt' => '',
        'title' => '',
        'width' => 321,
        'height' => 480,
        'uuid_features_file_path' => 'public://designssquare_com/widget/gallery/BushLake4.jpeg',
      ),
    ),
  ),
  'field_ds_gallery_summary' => array(
    'und' => array(
      0 => array(
        'value' => 'Izbraukums iesākās ar dievkalpojumu plkst.10:00 no rīta. Dievkalpojumā arī bērniem bija iespēja ņemt dalību. Dziedājām divasbērnu dziesmiņas, kur varējām izkustēties, jo dziesmas bija ar kustībām. Tāpat arī draudzes māc.',
        'format' => NULL,
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-21 16:21:00 +0000',
  'alias_url' => 'content/photo-gallery-7',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2014. g. februāris',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2ca5e102-d2ae-4b7a-a49d-27e2f51ccafe',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470385,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ccba83c6-3771-49a2-8505-52bfe8afa5aa',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Feb2014.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/Feb2014.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 740682,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => '235a67c3-339e-4157-b29c-1faa7ea11c37',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/Feb2014.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1391212800,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:53:05 +0000',
  'alias_url' => 'content/newsletter-4',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LELBA Jaunatnes nozares “Priecīgas pēdas” izdales brauciens sācies',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e3494a15-64f3-4b9c-9f50-5262a8a92c34',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1404575952,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e5550cf1-05c9-4da4-9506-ac9b89971664',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>15. jūnijā ar dievkalpojumu Rīgas Jēzus baznīcā sākās nedēļu garš brauciens 11 jauniešiem no Amerikas, Kanadas un Austrālijas, ko rīko Latviešu ev. lut. baznīcas Amerikā Jaunatnes nozare. Jaunatnes nozari vada māc. Dags Demandts, kurš kalpo Mineapoles un St. Paulas draudzē, ASV. Nedēļas laikā līdz 22. jūnijam iecerēts pāri par 300 jaunu apavu izdalīt trūcīgām ģimenēm Kurzemē.</p>

<p>Līdzekļi&nbsp; apavu iegādei pēdējā pusgada laikā saziedoti &nbsp;īpašās līdzekļu vākšanas akcijās - \'walk-a-thon\' un `bike-a-thon\' pasākumos , ko rīkojušas latviešu draudzes ASV, Kanadā un Austrālijā. Pasākumos plašākā sabiedrība atbalstījusi dalībniekus vai nu ziedojot naudu par katru dalībnieka nosoļoto/nobraukto kilometru vai arī noziedota zināma summa šim mērķim.</p>

<p>„Priecīgas pēdas" labdarības projekta idejas autori ir 2013. gada Garezera vasaras vidusskolas (GVV) 3. klases audzēkņi. Šis jau ir ceturtais labdarības projekts, kas rīkots Latvijā: pirmais bija Ziemassvētku projekts 2008. gadā, tam divus gadus vēlāk sekoja divriteņu projekts \'Lai rit!\' 2010. gadā un 2012. gadā notika labdarības projekts „Būsim gudri!"</p>

<p>Līdzekļu vākšanas pasākumi notika 15 pilsētās, galvenokārt Ziemeļamerikā, sākot ar 2013.g. novembra mēnesi līdz 2014. g. jūnijam. \'\'Walk-a-thon\'\' pasākumi notika Mineapolē, Denverā, Filadelfijā, Sietlā, Vašingtonā, Demoinā, Indianapolē, Kalamazū, Lansingā un Milvokos (ASV), Otavā, Hamiltonā un Toronto (CAN), un „Bike-a-thon" tika rīkots Melburnā (AUS).</p>

<p>Kopā ieņemtie līdzekļi līdz šim ir $45&nbsp;000 USD. Pa šo naudu tika iegādāti jauni apavi gan ASV (1/3 no kopīgā skaita), gan Latvijā (2/3). Tos izdalīs 15 izdales vietās Kurzemē: gan luterāņu un baptistu draudzēs, bērnu namos, internātpamatskolās un pamatskolās.</p>

<p>Izdales maršruts ir sekojošs:&nbsp; 15. jūnijā&nbsp; Rudbāržos; &nbsp;16. jūnijā Vaiņodē, Paplakā un Bārtā; 17. jūnijā Nīcā, Rucavā; 18. jūnijā Cīravā, Valtaiķos un Kazdangas Māteru Jura pamatskolā; 19. jūnijā Snēpelē, Pelču speciālā internātpamatskolā; 20. jūnijā Piltenē, Kolkā; 21. Jūnijā Strazdē, Nāriņciemā; 22. jūnijā Talsos.</p>

<p>Izdales komandā ir 11 personas: projekta vadītājs mācītājs Dāgs Demandts (ASV-MN), Edija Banka-Demandta (ASV-MN), Kristīne Ģiga (ASV-MN), Aina Budrevics (CAN-ON), Laura Vīksniņa (ASV-MN), Anna Inveiss (ASV-IN), Sarma Millere (ASV-IN), Larisa Kreišmane (ASV-MA), Stefans Brūvelis (ASV-MN), Toms Gross (AUS) un šoferis Arnis Banka (LV). Laura Vīksniņa, Anna Inveisa un Sarma Millere ir arī projekta idejas autores.</p>

<p>Tuvāku informāciju par šo projektu sniedz māc. Dāgs Demandts: tel. 28390256 vai dagdemandt@hotmail.com</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>15. jūnijā ar dievkalpojumu Rīgas Jēzus baznīcā sākās nedēļu garš brauciens 11 jauniešiem no Amerikas, Kanadas un Austrālijas, ko rīko Latviešu ev. lut. baznīcas Amerikā Jaunatnes nozare. Jaunatnes nozari vada māc. Dags Demandts, kurš kalpo Mineapoles un St. Paulas draudzē, ASV. Nedēļas laikā līdz 22. jūnijam iecerēts pāri par 300 jaunu apavu izdalīt trūcīgām ģimenēm Kurzemē.</p>
<p>Līdzekļi  apavu iegādei pēdējā pusgada laikā saziedoti  īpašās līdzekļu vākšanas akcijās - \'walk-a-thon\' un `bike-a-thon\' pasākumos , ko rīkojušas latviešu draudzes ASV, Kanadā un Austrālijā. Pasākumos plašākā sabiedrība atbalstījusi dalībniekus vai nu ziedojot naudu par katru dalībnieka nosoļoto/nobraukto kilometru vai arī noziedota zināma summa šim mērķim.</p>
<p>„Priecīgas pēdas" labdarības projekta idejas autori ir 2013. gada Garezera vasaras vidusskolas (GVV) 3. klases audzēkņi. Šis jau ir ceturtais labdarības projekts, kas rīkots Latvijā: pirmais bija Ziemassvētku projekts 2008. gadā, tam divus gadus vēlāk sekoja divriteņu projekts \'Lai rit!\' 2010. gadā un 2012. gadā notika labdarības projekts „Būsim gudri!"</p>
<p>Līdzekļu vākšanas pasākumi notika 15 pilsētās, galvenokārt Ziemeļamerikā, sākot ar 2013.g. novembra mēnesi līdz 2014. g. jūnijam. \'\'Walk-a-thon\'\' pasākumi notika Mineapolē, Denverā, Filadelfijā, Sietlā, Vašingtonā, Demoinā, Indianapolē, Kalamazū, Lansingā un Milvokos (ASV), Otavā, Hamiltonā un Toronto (CAN), un „Bike-a-thon" tika rīkots Melburnā (AUS).</p>
<p>Kopā ieņemtie līdzekļi līdz šim ir $45 000 USD. Pa šo naudu tika iegādāti jauni apavi gan ASV (1/3 no kopīgā skaita), gan Latvijā (2/3). Tos izdalīs 15 izdales vietās Kurzemē: gan luterāņu un baptistu draudzēs, bērnu namos, internātpamatskolās un pamatskolās.</p>
<p>Izdales maršruts ir sekojošs:  15. jūnijā  Rudbāržos;  16. jūnijā Vaiņodē, Paplakā un Bārtā; 17. jūnijā Nīcā, Rucavā; 18. jūnijā Cīravā, Valtaiķos un Kazdangas Māteru Jura pamatskolā; 19. jūnijā Snēpelē, Pelču speciālā internātpamatskolā; 20. jūnijā Piltenē, Kolkā; 21. Jūnijā Strazdē, Nāriņciemā; 22. jūnijā Talsos.</p>
<p>Izdales komandā ir 11 personas: projekta vadītājs mācītājs Dāgs Demandts (ASV-MN), Edija Banka-Demandta (ASV-MN), Kristīne Ģiga (ASV-MN), Aina Budrevics (CAN-ON), Laura Vīksniņa (ASV-MN), Anna Inveiss (ASV-IN), Sarma Millere (ASV-IN), Larisa Kreišmane (ASV-MA), Stefans Brūvelis (ASV-MN), Toms Gross (AUS) un šoferis Arnis Banka (LV). Laura Vīksniņa, Anna Inveisa un Sarma Millere ir arī projekta idejas autores.</p>
<p>Tuvāku informāciju par šo projektu sniedz māc. Dāgs Demandts: tel. 28390256 vai <a href="mailto:dagdemandt@hotmail.com">dagdemandt@hotmail.com</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(
    'und' => array(
      0 => array(
        'tid' => 23,
        'uuid' => '7729daa8-5f36-4ec6-8c28-a17ac291e512',
      ),
    ),
  ),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'lelba-brauciens.jpg',
        'uri' => 'public://blog/lelba-brauciens.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 220096,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '74c4501e-8e7f-44c0-a339-bf6ec8d2372b',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 790,
          'height' => 512,
        ),
        'alt' => '',
        'title' => '',
        'width' => 790,
        'height' => 512,
        'uuid_features_file_path' => 'public://blog/lelba-brauciens.jpg',
      ),
    ),
  ),
  'field_blog_sidebar' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 24,
        'uuid' => '3687df3b-31f0-4889-80d0-3fc8ec2a7f98',
      ),
    ),
  ),
  'field_posts_format' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => '770c84f6-5cf0-4310-b306-66f4c0037afc',
      ),
    ),
  ),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-05 15:59:12 +0000',
  'alias_url' => 'content/lelba-jaunatnes-nozares-“priecīgas-pēdas”-izdales-brauciens-sācies',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Mineapoles dvēsele',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2b5fd026-8806-4952-8204-80ec210c09d8',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1404512789,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e9ac6e96-3e5b-4faf-943e-e1b765e42116',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Draudzes slavēšanas grupa "Mineapoles dvēsele", kas spēlē un dzied mūsdienīgu kristīgo mūziku, meklē bundzinieku, basģitāristu un vīriešu vokālistu.Ja jums būtu interese, lūdzam sazināties ar Viktoru Konteru. E-pasts: kkvk3447@msn.com vai 952-412-4592. Mēģinājumi parasti notiek ceturtdienas vakaros. Our Congregation\'s new praise band "The soul of Minneapolis" that plays contemporary Christian music is looking for a drummer, base guitarist and male vocalist. If you are interested please contact Viktor by email: kkvk3447@msn.com or 952-412-4592. Practices usually are on Thursday evenings.</p>

<div class="embeddedContent" data-align="none" data-oembed="https://www.youtube.com/watch?v=FoAk8CbTmCM#t=20" data-resizetype="noresize"><iframe allowfullscreen="true" allowscriptaccess="always" frameborder="0" height="349" scrolling="no" src="//www.youtube.com/embed/FoAk8CbTmCM?wmode=transparent&amp;jqoemcache=epWCT" width="425"></iframe></div>

<div class="embeddedContent" data-align="none" data-oembed="https://www.youtube.com/watch?v=ExXq7L8glr0" data-resizetype="noresize"><iframe allowfullscreen="true" allowscriptaccess="always" frameborder="0" height="349" scrolling="no" src="//www.youtube.com/embed/ExXq7L8glr0?wmode=transparent&amp;jqoemcache=T6BTF" width="425"></iframe></div>

<p>&nbsp;</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Draudzes slavēšanas grupa "Mineapoles dvēsele", kas spēlē un dzied mūsdienīgu kristīgo mūziku, meklē bundzinieku, basģitāristu un vīriešu vokālistu.Ja jums būtu interese, lūdzam sazināties ar Viktoru Konteru. E-pasts: <a href="mailto:kkvk3447@msn.com">kkvk3447@msn.com</a> vai 952-412-4592. Mēģinājumi parasti notiek ceturtdienas vakaros. Our Congregation\'s new praise band "The soul of Minneapolis" that plays contemporary Christian music is looking for a drummer, base guitarist and male vocalist. If you are interested please contact Viktor by email: <a href="mailto:kkvk3447@msn.com">kkvk3447@msn.com</a> or 952-412-4592. Practices usually are on Thursday evenings.</p>
<div class="embeddedContent" data-align="none" data-oembed="https://www.youtube.com/watch?v=FoAk8CbTmCM#t=20" data-resizetype="noresize">
<iframe allowfullscreen="true" allowscriptaccess="always" frameborder="0" height="349" scrolling="no" src="//www.youtube.com/embed/FoAk8CbTmCM?wmode=transparent&amp;jqoemcache=epWCT" width="425"></iframe></div>
<div class="embeddedContent" data-align="none" data-oembed="https://www.youtube.com/watch?v=ExXq7L8glr0" data-resizetype="noresize">
<iframe allowfullscreen="true" allowscriptaccess="always" frameborder="0" height="349" scrolling="no" src="//www.youtube.com/embed/ExXq7L8glr0?wmode=transparent&amp;jqoemcache=T6BTF" width="425"></iframe></div>
<p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(
    'und' => array(
      0 => array(
        'tid' => 21,
        'uuid' => '1fd530f8-d0a3-4349-b050-ac39b41a90fa',
      ),
    ),
  ),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'MinneapolisDvesele.png',
        'uri' => 'public://blog/MinneapolisDvesele.png',
        'filemime' => 'image/png',
        'filesize' => 669231,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'undefined',
        'uuid' => '771978a6-16f8-41e9-ae04-0a18aafd8cab',
        'rdf_mapping' => array(),
        'image_dimensions' => array(
          'width' => 895,
          'height' => 641,
        ),
        'alt' => '',
        'title' => '',
        'width' => 895,
        'height' => 641,
        'uuid_features_file_path' => 'public://blog/MinneapolisDvesele.png',
      ),
    ),
  ),
  'field_blog_sidebar' => array(
    'und' => array(
      0 => array(
        'tid' => 14,
        'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 20,
        'uuid' => '6d63763e-4333-4235-8572-066c48c55296',
      ),
    ),
  ),
  'field_posts_format' => array(
    'und' => array(
      0 => array(
        'tid' => 11,
        'uuid' => '4724e570-b398-44db-bc53-db323445d51c',
      ),
    ),
  ),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-04 22:26:29 +0000',
  'alias_url' => 'Mineapoles-Dvēsele',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Home',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '88c7eaf8-8711-4148-b4a6-aedf6d3cc094',
  'type' => 'home',
  'language' => 'und',
  'created' => 1400986010,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ea3ca5f4-7c46-4038-8fcf-11996796c79a',
  'revision_uid' => 1,
  'body' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-25 02:46:50 +0000',
  'alias_url' => 'sākums-latviesu-draudze-minesotā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2013. g. novembris',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4ffa162e-3e93-4c11-86c4-57c376ee5aec',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470280,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eb7da80f-c87a-4e9f-a704-4bdfb9a4c1bc',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'SvZv novembris 2013.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/SvZv novembris 2013.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 2360394,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => 'a89b8d1c-d583-4d64-aeef-52c510323608',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/SvZv novembris 2013.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1383264000,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:51:20 +0000',
  'alias_url' => 'content/newsletter-1',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tautas Dejas',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '35c83507-0d35-46e6-bf71-c4c573a93cac',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404064560,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0ff82e7-d13a-4c42-9f3f-62ac565ce344',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="span6">
<h4>Vēsture</h4>

<p>1950. gada rudenī Harijs Saukants uzsāka tautas deju grupu ar četriem pāŗiem, kas pirmo reizi uzstājās tā paša gada 18. novembŗa sarīkojumā. Pirmie mēģinājumi notika viņa mājā, jo citur nebija telpu. Drīz dejotāju skaits pieauga, nodibinājās arī draudze, un tās telpās notika turpmākie mēģinājumi. Šī grupa izvēlējās sev nosaukumu „Pērkonītis”.</p>
</div>

<div class="span6">
<p>Pēdējos 63 gadus „Pērkonītis” ir ducinājis un rībinājis tautu istabiņās gan tuvumā, gan tālumā. Esam uzstājušies jaunatnes deju svētkos, vairumā Dziesmu svētku ASV un Kanadā, kā arī Latvijā, Esam dejojuši vietējos Minesotas Tautību festivālos un visbiežāk bijušajā Mineapoles Latviešu namā, Ziemsvētku eglītēs un citos latviešu sarīkojumos. Pa šiem gadiem „Pērkonītis” ir rīkojis vairākas sadancošanās, aicinot deju grupas no citām pilsētām. Esam dejojuši arī dažu dejotāju kāzās.</p>

<p>Gadiem ejot, skaits ir mazliet mainījies, bet gandrīz vienmēr sanākuši vismaz četri pāŗi. Tagad dejo otrā, nu jau trešā paaudze. Ar dažiem pārtraukumiem „Pērkonītis” ir nodzīvojis 63 gadus. Ceram, ka nākamie 63 vai vairāk būs tik pat spoži, ja ne spožāki!</p>
</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Vēsture</p>
<p>1950. gada rudenī Harijs Saukants uzsāka tautas deju grupu ar četriem pāŗiem, kas pirmo reizi uzstājās tā paša gada 18. novembŗa sarīkojumā. Pirmie mēģinājumi notika viņa mājā, jo citur nebija telpu. Drīz dejotāju skaits pieauga, nodibinājās arī draudze, un tās telpās notika turpmākie mēģinājumi. Šī grupa izvēlējās sev nosaukumu „Pērkonītis”.</p>
<p>Pēdējos 63 gadus „Pērkonītis” ir ducinājis un rībinājis tautu istabiņās gan tuvumā, gan tālumā. Esam uzstājušies jaunatnes deju svētkos, vairumā Dziesmu svētku ASV un Kanadā, kā arī Latvijā, Esam dejojuši vietējos Minesotas Tautību festivālos un visbiežāk bijušajā Mineapoles Latviešu namā, Ziemsvētku eglītēs un citos latviešu sarīkojumos. Pa šiem gadiem „Pērkonītis” ir rīkojis vairākas sadancošanās, aicinot deju grupas no citām pilsētām. Esam dejojuši arī dažu dejotāju kāzās.</p>
<p>Gadiem ejot, skaits ir mazliet mainījies, bet gandrīz vienmēr sanākuši vismaz četri pāŗi. Tagad dejo otrā, nu jau trešā paaudze. Ar dažiem pārtraukumiem „Pērkonītis” ir nodzīvojis 63 gadus. Ceram, ka nākamie 63 vai vairāk būs tik pat spoži, ja ne spožāki!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:56:00 +0000',
  'alias_url' => 'tautas-dejas-minesota',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '2013. g. decembris',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'be49b80d-4aed-4f64-8b67-018d73629637',
  'type' => 'ds_newsletter',
  'language' => 'und',
  'created' => 1403470318,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f39e5b38-9a13-4b3e-a318-f03e804f3ef8',
  'revision_uid' => 1,
  'body' => array(),
  'field_ds_newsletter_download' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'svetritazvani2013dec.pdf',
        'uri' => 'public://designssquare_com/widget/newsletter/svetritazvani2013dec.pdf',
        'filemime' => 'application/pdf',
        'filesize' => 2811982,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'default',
        'uuid' => 'fde43600-e10e-4323-8b82-c01f3f8e7c17',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'public://designssquare_com/widget/newsletter/svetritazvani2013dec.pdf',
      ),
    ),
  ),
  'field_ds_newsletter_pub_date' => array(
    'und' => array(
      0 => array(
        'value' => 1385942400,
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_ds_newsletter_summary' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-22 20:51:58 +0000',
  'alias_url' => 'content/newsletter-2',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'July 4th Celebration',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5a6a8ca3-8900-4de2-a526-aa9a1edab1fc',
  'type' => 'event',
  'language' => 'und',
  'created' => 1404086102,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f83f573a-9d50-4812-a49d-cd8a469f0731',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>ASV netkarības dienas svinības Latviešu Lut Evan. Baznīcā pl. 4pm</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>ASV netkarības dienas svinības Latviešu Lut Evan. Baznīcā pl. 4pm</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_event_location' => array(
    'und' => array(
      0 => array(
        'value' => 'Latviešu Baznīcā',
        'format' => NULL,
        'safe_value' => 'Latviešu Baznīcā',
      ),
    ),
  ),
  'field_event_date' => array(
    'und' => array(
      0 => array(
        'value' => '2014-07-04T14:00:00',
        'timezone' => 'UTC',
        'timezone_db' => 'UTC',
        'date_type' => 'date',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 23:55:02 +0000',
  'alias_url' => 'content/july-4th-celebration',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Koris',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85728a99-984b-4eaa-a176-8b0740509bd1',
  'type' => 'page',
  'language' => 'und',
  'created' => 1404064193,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fb03f690-90fe-4bfb-b377-36b881ae95d1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Mineapoles-St. Paulas draudzes koris pirmo reizi dziedāja 1952. gadā. Koŗa diriģente tagad ir Guna Kalmīte-Skujiņa. Nu jau vairākas paaudzes vietējo latviešu ir piedalījušies koŗa darbībā. Šobrīd korī dzied ap 25 balsis.</p>

<p>Kora mēģinājumi notiek katru trešdienas vakaru no plkst. 6:30 līdz 8:00. Sīkāku informāciju var iegūt, zvanot draudzes kancelejai (612-722-4622) vai arī koŗa vadītājai Intai Grāvītei (763-559-1795).</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Mineapoles-St. Paulas draudzes koris pirmo reizi dziedāja 1952. gadā. Koŗa diriģente tagad ir Guna Kalmīte-Skujiņa. Nu jau vairākas paaudzes vietējo latviešu ir piedalījušies koŗa darbībā. Šobrīd korī dzied ap 25 balsis.</p>
<p>Kora mēģinājumi notiek katru trešdienas vakaru no plkst. 6:30 līdz 8:00. Sīkāku informāciju var iegūt, zvanot draudzes kancelejai (612-722-4622) vai arī koŗa vadītājai Intai Grāvītei (763-559-1795).</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-06-29 17:49:53 +0000',
  'alias_url' => 'koris',
);
  return $nodes;
}
