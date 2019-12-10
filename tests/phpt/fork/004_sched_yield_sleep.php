@ok
<?php
#ifndef KittenPHP
?>
1
2
3
waited 1123456789
waited 1123456790
waited 1123456791
<?php
exit;
#endif

function f($x, $y) {
  sched_yield_sleep($x);
  echo $y . "\n";
}

$ids = [];
$ids[] = fork(f(0.03, 3));
$ids[] = fork(f(0.01, 1));
$ids[] = fork(f(0.02, 2));

foreach ($ids as $id) {
  wait($id);
  echo "waited ".(int)$id."\n";
}