nama = input("Nama Barang   : ")
harga_text = input("Harga satuan (Rp) : ").strip().replace("Rp", "").replace(".", "")
harga = int(harga_text)
jumlah = int(input("Jumlah Barang : "))
nim = input("3 angka NIM terakhir           : ").strip()

tiga_akhir = int(nim[-3:])
satu_akhir = int(nim[-1])

minimal_pembelian = tiga_akhir * 100
total_harga = harga * jumlah
diskon_persen = satu_akhir if total_harga >= minimal_pembelian else 0
diskon_rp = total_harga * (diskon_persen / 100)
total_bayar = total_harga - diskon_rp

print("\n===== STRUK BELANJA =====")
print(f"Nama Barang      : {nama}")
print(f"Harga Satuan     : Rp {harga:,}".replace(",", "."))
print(f"Jumlah Beli      : {jumlah}")
print(f"Total Harga      : Rp {total_harga:,}".replace(",", "."))
print(f"Minimal Diskon   : Rp {minimal_pembelian:,}".replace(",", "."))
print(f"Diskon (%)       : {diskon_persen}%")
print(f"Diskon (Rp)      : Rp {int(diskon_rp):,}".replace(",", "."))
print(f"Total Bayar      : Rp {int(total_bayar):,}".replace(",", "."))
print("=========================")
