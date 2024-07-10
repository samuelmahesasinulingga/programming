// Penjumlahan Array Dimensi 2

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int arrA[2][2], arrB[2][2], i, j;

    cout << "==== Program C++ Operasi Penjumlahan Array Dimensi 2 ====" << endl;
    cout << endl;

    cout << "Input isi Array A :" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
            cin >> arrA[i][j];
        }
    }

    cout << endl;

    cout << "Input isi Array B : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
            cin >> arrB[i][j];
        }
    }
    
    cout << endl;

    cout << "Array A : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(3) << arrA[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "Array B : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(3) << arrB[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "Hasil Penjumlahan : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(3) << arrA[i][j] + arrB[i][j] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}