#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string nama, nim, hargaText;
    int harga, jumlah;

    cout << "Nama Barang   : ";
    getline(cin, nama);

    cout << "Harga (Rp)    : ";
    getline(cin, hargaText);

    // Hapus "Rp" dan titik dari harga input
    hargaText.erase(remove(hargaText.begin(), hargaText.end(), 'R'), hargaText.end());
    hargaText.erase(remove(hargaText.begin(), hargaText.end(), 'p'), hargaText.end());
    hargaText.erase(remove(hargaText.begin(), hargaText.end(), '.'), hargaText.end());

    harga = stoi(hargaText);

    cout << "Jumlah Barang : ";
    cin >> jumlah;
    cin.ignore();

    cout << "NIM           : ";
    getline(cin, nim);

    int tigaAkhir = stoi(nim.substr(nim.length() - 3));
    int satuAkhir = nim[nim.length() - 1] - '0';

    int minimal = tigaAkhir * 100;
    int total = harga * jumlah;
    int diskonPersen = (total >= minimal) ? satuAkhir : 0;
    double diskonRp = total * (diskonPersen / 100.0);
    double bayar = total - diskonRp;

    cout << "\n===== STRUK BELANJA =====\n";
    cout << "Nama Barang      : " << nama << endl;
    cout << "Harga Satuan     : Rp " << harga << endl;
    cout << "Jumlah Beli      : " << jumlah << endl;
    cout << "Total Harga      : Rp " << total << endl;
    cout << "Minimal Diskon   : Rp " << minimal << endl;
    cout << "Diskon (%)       : " << diskonPersen << "%\n";
    cout << "Diskon (Rp)      : Rp " << (int)diskonRp << endl;
    cout << "Total Bayar      : Rp " << (int)bayar << endl;
    cout << "=========================\n";

    return 0;
}
