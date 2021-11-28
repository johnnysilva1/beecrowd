<?php

$A = trim(fgets(STDIN));
$B = trim(fgets(STDIN));
$C = trim(fgets(STDIN));
$D = trim(fgets(STDIN));

$A = $A*$B;
$C = $C*$D;
$diferenca = $A - $C;

echo "DIFERENCA = $diferenca\n";
?>