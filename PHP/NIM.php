<?php
echo "Masukkan NIM: ";
$nim = trim(fgets(STDIN));

$digits = [];
for ($i = 0; $i < strlen($nim); $i++) {
    $digits[] = intval($nim[$i]);
}

$total = array_sum($digits);
$maks = max($digits);
$minim = min($digits);
$rata = $total / count($digits);

$reverse = array_reverse($digits);

echo "\nArray digit: ";
print_r($digits);

echo "Total digit: $total\n";
echo "Nilai maksimum: $maks\n";
echo "Nilai minimum: $minim\n";
echo "Rata-rata digit: $rata\n";

echo "Reverse array: ";
print_r($reverse);
?>
