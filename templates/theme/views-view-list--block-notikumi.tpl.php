
<ul class="nav">
                  <?php foreach ($view->result as $id => $row): ?>
                      <li>
                          <a href="<?php print $row->event['url']?>"><span class="glyphicon glyphicon-calendar"></span> <?php print $row->event['date']['full']?> - <?php print $row->event['title']?></a>
                      </li>
                  <?php endforeach; ?>
</ul>
