#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arrA[2][2], arrB[2][2], arrC[2][2], i, j, k;

    cout << "====Program C++ Operasi Perkalian Matriks 2x2====" << endl;
    cout << endl;

    // Input matriks A
    cout << "Input isi Matriks A (2x2) :" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << " = ";
            cin >> arrA[i][j];
        }
    }
    cout << endl;

    // Input matriks B
    cout << "Input isi Matriks B (2x2) : " << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << " = ";
            cin >> arrB[i][j];
        }
    }
    cout << endl;

    // Menampilkan matriks A
    cout << "Matriks A : " << endl;
    cout << "--------------" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "| " << setw(3) << arrA[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "--------------" << endl;
    }
    cout << endl;

    // Menampilkan matriks B
    cout << "Matriks B : " << endl;
    cout << "--------------" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "| " << setw(3) << arrB[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "--------------" << endl;
    }
    cout << endl;

    // Perkalian matriks
    cout << "Hasil Perkalian : " << endl;
    cout << "--------------" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            arrC[i][j] = 0;
            for (k = 0; k < 2; k++) {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
            cout << "| " << setw(3) << arrC[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "--------------" << endl;
    }

    return 0;
}
