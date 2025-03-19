<?php

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí.
 */
$raio = trim(fgets(STDIN));
$pi = 3.14159;
$raio = ($raio ** 2) * $pi;
$area = number_format($raio, 4, '.', '');
echo "A={$area}\n";
