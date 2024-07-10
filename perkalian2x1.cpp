#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arrA[1][2], arrB[2][1], i, j;
    int hasil[1][1] = {0}; // Inisialisasi matriks hasil dengan 0

    cout << "====Program C++ Operasi Perkalian Matriks 1x2 dengan 2x1====" << endl;
    cout << endl;

    cout << "Input isi Matriks A (1x2) :" << endl;
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
            cin >> arrA[i][j];
        }
    }

    cout << endl;

    cout << "Input isi Matriks B (2x1) : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 1; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
            cin >> arrB[i][j];
        }
    }
    
    cout << endl;

    cout << "Matriks A : " << endl;
    cout << "-------------" << endl;
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 2; j++) {
            cout << "| "<< setw(3) << arrA[i][j] << " "; 
        }
        cout << "|" << endl;
        cout << "-------------" << endl;
    }

    cout << "Matriks B : " << endl;
    cout << "-------" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 1; j++) {
            cout << "| " << setw(3) << arrB[i][j] << " "; 
        }
        cout << "|" << endl;
        cout << "-------" << endl;
    }

    // Perkalian matriks
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 1; j++) {
            hasil[i][j] = arrA[i][0] * arrB[0][j] + arrA[i][1] * arrB[1][j];
        }
    }

    cout << "Hasil Perkalian : " << endl;
    for (i = 0; i < 1; i++) {
        for (j = 0; j < 1; j++) {
            cout << setw(3) << hasil[i][j] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}