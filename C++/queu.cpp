#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 8
using namespace std;

int nomer[MAX];
int head = -1, tail = -1;
bool IsEmpty() {
    if (tail == -1) {
        return true;
    } else {
        return false;
    }
}

bool IsFull() {
    if (tail == MAX - 1) {
        return true;
    } else {
        return false;
    }
}

void AntrianMasuk(int no) {
    if (IsEmpty()) {
        head = tail = 0;
    } else {
        tail++;
    }
    nomer[tail] = no;
}

void AntrianKeluar() {
    if (IsEmpty()) {
        cout << "Antrian sudah kosong ! ";
        getch();
    } else {
        for (int a = head; a < tail; a++) {
            nomer[a] = nomer[a + 1];
        }
        tail--;
        if (tail == -1) {
            head = -1;
        }
    }
}

void Clear() {
    head = tail = -1;
}

void View() {
    if (IsEmpty()) {
        cout << "Antrian kosong ! ";
    } else {
        system("cls");
        printf("=============================\n");
        printf("      DAFTAR ANTRIAN      \n");
        printf("=============================\n");

        for (int a = head; a <= tail; a++) {
            printf(" [%d]", nomer[a]);
        }

        printf("\n=============================\n");
    }
}

int main() {
    system("color 1F");
    int choose, p = 1, urut;

    do {
        system("cls");
        cout << "\n\n===== PROGRAM ANTRIAN =====";
        cout << "\n| 1. Tambah Antrian       |";
        cout << "\n| 2. Panggil Antrian      |";
        cout << "\n| 3. Lihat daftar antrian |";
        cout << "\n| 4. Format               |";
        cout << "\n| 5. Exit                 |";
        cout << "\nChoose ! ";
        cin >> choose;
        cout << "\n\n";

        if (choose == 1) {
            if (IsFull()) {
                cout << "Antrian penuh !";
            } else {
                urut = p;
                AntrianMasuk(urut);
                cout << "ANTRIAN" << endl;
                cout << "-----" << endl;
                cout << "| " << p << " |" << endl;
                cout << "-----" << endl;
                cout << "Silahkan Menunggu !" << endl;
                p++;
            }
        }
        else if (choose == 2) {
            cout << "==============================" << endl;
            cout << "No. Antri : [" << nomer[head] << "] Dipanggil";
            cout << "\n==============================" << endl;
            AntrianKeluar();
            cout << "Silahkan untuk diproses !" << endl;
        }
        else if (choose == 3) {
            View();
        }
        else if (choose == 4) {
            Clear();
            cout << "Antrian dikosongkan ! ";
        }
        else if (choose == 5) {
            // Exit
        }
        else {
            cout << "Masukan anda salah ! \n" << endl;
        }

        getch();
    } while (choose != 5);

    return 0;
}