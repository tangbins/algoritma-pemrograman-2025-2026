#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    vector<int> digits;

    for (char c : nim) {
        digits.push_back(c - '0');
    }

    int total = 0, maks = digits[0], minim = digits[0];

    for (int d : digits) {
        total += d;
        if (d > maks) maks = d;
        if (d < minim) minim = d;
    }

    double rata = (double) total / digits.size();

    vector<int> rev;
    for (int i = digits.size() - 1; i >= 0; i--) {
        rev.push_back(digits[i]);
    }

    cout << "Array digit: ";
    for (int d : digits) cout << d << " ";

    cout << "\nTotal digit: " << total;
    cout << "\nNilai maksimum: " << maks;
    cout << "\nNilai minimum: " << minim;
    cout << "\nRata-rata digit: " << rata;

    cout << "\nReverse array: ";
    for (int d : rev) cout << d << " ";
}
