<!DOCTYPE html>
<html>
<head>
    <title>Struk Belanja</title>
    <style>
        body { font-family: Arial; background: #f2f2f2; }
        .container { width: 400px; margin: auto; padding: 20px; background: white; border-radius: 10px; }
        input, button { width: 100%; padding: 10px; margin-top: 10px; }
        .struk { background: #222; color: white; padding: 15px; margin-top: 20px; border-radius: 10px; }
    </style>
</head>
<body>
<div class="container">
    <h2>PROGRAM KASIR</h2>
    <form method="POST">
        <input type="text" name="nama" placeholder="Nama Barang" required>
        <input type="text" name="harga" placeholder="Harga (Rp)" required>
        <input type="number" name="jumlah" placeholder="Jumlah Barang" required>
        <input type="text" name="nim" placeholder="NIM" required>
        <button type="submit">PROSES</button>
    </form>

<?php
if($_SERVER['REQUEST_METHOD'] == 'POST'){
    $nama = $_POST['nama'];
    $harga = intval(str_replace(['Rp', '.'], '', $_POST['harga']));
    $jumlah = $_POST['jumlah'];
    $nim = $_POST['nim'];

    $tiga = intval(substr($nim, -3));
    $satu = intval(substr($nim, -1));

    $minimal = $tiga * 100;
    $total = $harga * $jumlah;
    $diskon_p = ($total >= $minimal) ? $satu : 0;
    $diskon_rp = $total * ($diskon_p / 100);
    $bayar = $total - $diskon_rp;

    echo "<div class='struk'>
        <b>===== STRUK BELANJA =====</b><br>
        Nama Barang      : $nama <br>
        Harga Satuan     : Rp ".number_format($harga,0,',','.')." <br>
        Jumlah Beli      : $jumlah <br>
        Total Harga      : Rp ".number_format($total,0,',','.')." <br>
        Minimal Diskon   : Rp ".number_format($minimal,0,',','.')." <br>
        Diskon (%)       : $diskon_p% <br>
        Diskon (Rp)      : Rp ".number_format($diskon_rp,0,',','.')." <br>
        <b>Total Bayar   : Rp ".number_format($bayar,0,',','.')."</b><br>
        =========================
    </div>";
}
?>
</div>
</body>
</html>
