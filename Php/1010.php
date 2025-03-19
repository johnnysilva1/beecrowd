<?php
$linha1 = explode(" ", trim(fgets(STDIN)));
$linha2 = explode(" ", trim(fgets(STDIN)));

$qtdProd1 = intval($linha1[1]);
$precoProd1 = floatval($linha1[2]);
$precoProd1 = $qtdProd1*$precoProd1;

$qtdProd2 = intval($linha2[1]);
$precoProd2 = floatval($linha2[2]);
$precoProd2 = $qtdProd2*$precoProd2;

$total = $precoProd1 + $precoProd2;
$total = number_format($total, 2, '.', '');
echo "VALOR A PAGAR: R$ $total\n";


?>