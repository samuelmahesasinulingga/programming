// Penjumlahan Array Dimensi 1

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arrA[2], arrB[2], i;

    cout << "===== Program C++ Operasi Penjumlahan Array Dimensi 1 ====" << endl;
    cout << endl;

    cout << "Input isi Array A : " << endl;
    for (i = 0; i < 2; i++) {
        cout << "Input isi array ke-" << i + 1 << " : ";
        cin >> arrA[i];
    }
    cout << endl;

    cout << "Input isi Array B : " << endl;
    for (i = 0; i < 2; i++) {
        cout << "Input isi array ke-" << i + 1 << " : ";
        cin >> arrB[i];
    }
    cout << endl;

    cout << "Array A : " << endl;
    for (i = 0; i < 2; i++) {
        cout << setw(3) << arrA[i] << " ";
    }
    cout << endl;

    cout << "Array B : " << endl;
    for (i = 0; i < 2; i++) {
        cout << setw(3) << arrB[i] << " ";
    }
    cout << endl;
    cout << "Hasil Penjumlahan : " << endl;
    for (i = 0; i < 2; i++) {
        cout << setw(3) << arrA[i] + arrB[i] << " ";
    }
    cout << endl;
}