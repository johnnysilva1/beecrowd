<?php

$linha = explode(' ', trim(fgets(STDIN)));
$a = $linha[0];
$b = $linha[1];
$c = $linha[2];

$maior = ($a + $b + abs($a-$b))/2;
$maior = ($maior + $c + abs($maior-$c))/2;

echo "$maior eh o maior\n";