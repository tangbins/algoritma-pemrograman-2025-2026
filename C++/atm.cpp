#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Fungsi untuk format angka jadi rupiah (pakai titik)
string formatRupiah(long long angka) {
    string s = to_string(angka);
    string hasil = "";
    int count = 0;

    // Loop dari belakang, tambahkan titik setiap 3 digit
    for (int i = s.length() - 1; i >= 0; i--) {
        hasil += s[i];
        count++;
        if (count == 3 && i != 0) {
            hasil += ".";
            count = 0;
        }
    }

    reverse(hasil.begin(), hasil.end()); // Balik string biar benar
    return "Rp " + hasil;
}

int main() {
    string nama, valid;
    long long saldo, jumlah;

    // Validasi Nama
    do {
        cout << "Masukkan Nama: ";
        getline(cin, nama);
        cout << "Apakah nama \"" << nama << "\" benar? (TRUE/FALSE): ";
        getline(cin, valid);
    } while (valid != "TRUE" && valid != "true");

    // Input NIM → Saldo
    cout << "Masukkan NIM tanpa huruf: ";
    cin >> saldo;

    cout << "\nNama: " << nama << endl;
    cout << "Saldo Awal: " << formatRupiah(saldo) << endl;

    int pilihan;
    while (true) {
        cout << "\n===== MENU ATM =====" << endl;
        cout << "1. Cek Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Setor Tunai" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Saldo Anda: " << formatRupiah(saldo) << endl;
                break;

            case 2:
                cout << "Masukkan jumlah tarik: ";
                cin >> jumlah;
                if (jumlah > saldo) {
                    cout << "Saldo tidak cukup!" << endl;
                } else {
                    saldo -= jumlah;
                    cout << "Tarik tunai berhasil. Saldo sekarang: " << formatRupiah(saldo) << endl;
                }
                break;

            case 3:
                cout << "Masukkan jumlah setor: ";
                cin >> jumlah;
                saldo += jumlah;
                cout << "Setor tunai berhasil. Saldo sekarang: " << formatRupiah(saldo) << endl;
                break;

            case 4:
                cout << "Masukkan jumlah transfer: ";
                cin >> jumlah;
                if (jumlah > saldo) {
                    cout << "Saldo tidak mencukupi!" << endl;
                } else {
                    saldo -= jumlah;
                    cout << "Transfer berhasil. Saldo sekarang: " << formatRupiah(saldo) << endl;
                }
                break;

            case 5:
                cout << "Terima kasih telah menggunakan ATM!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
}
