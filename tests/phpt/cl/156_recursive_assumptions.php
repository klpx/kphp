@ok
<?php

function foo($arr) {
    foreach ($arr as $a) {
        $b = $a[10];

        uasort($a, function($a, $b) { return -1; });
        $a = [10 => $b];

        var_dump("asdf");
    }
}

foo([[1]]);
