<?php

function formatRupiah($angka) {
    return "Rp " . number_format($angka, 0, ',', '.');
}

function input($teks) {
    echo $teks;
    return trim(fgets(STDIN));
}

do {
    $nama = input("Masukkan Nama: ");
    $valid = strtoupper(input("Apakah nama \"$nama\" benar? (TRUE/FALSE): "));
} while ($valid !== "TRUE");


$nim = input("Masukkan NIM tanpa huruf: ");
$saldo = intval($nim);   

echo "\nNama: $nama\n";
echo "Saldo Awal: " . formatRupiah($saldo) . "\n";

while (true) {
    echo "\n===== MENU ATM =====
1. Cek Saldo
2. Tarik Tunai
3. Setor Tunai
4. Transfer
5. Keluar
Pilih menu: ";

    $pilihan = trim(fgets(STDIN));

    switch ($pilihan) {
        case 1:
            echo "Saldo anda: " . formatRupiah($saldo) . "\n";
            break;

        case 2:
            $tarik = intval(input("Masukkan jumlah tarik: "));
            if ($tarik > $saldo) {
                echo "Saldo tidak cukup!\n";
            } else {
                $saldo -= $tarik;
                echo "Tarik tunai berhasil. Saldo sekarang: " . formatRupiah($saldo) . "\n";
            }
            break;

        case 3:
            $setor = intval(input("Masukkan jumlah setor: "));
            $saldo += $setor;
            echo "Setor tunai berhasil. Saldo sekarang: " . formatRupiah($saldo) . "\n";
            break;

        case 4:
            $transfer = intval(input("Masukkan nominal transfer: "));
            if ($transfer > $saldo) {
                echo "Saldo tidak mencukupi untuk transfer!\n";
            } else {
                $saldo -= $transfer;
                echo "Transfer berhasil. Saldo sekarang: " . formatRupiah($saldo) . "\n";
            }
            break;

        case 5:
            echo "Terima kasih telah menggunakan ATM!\n";
            exit;

        default:
            echo "Pilihan tidak valid!\n";
    }
}
?>
