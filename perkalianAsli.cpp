#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int arrA[2][2], arrC[2][2], i, j;

    cout << "====Program C++ Operasi Perkalian Matriks 2x2====" << endl;
    cout << endl;

    // Input matriks A
    cout << "Input isi Matriks (2x2) :" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Baris " << i + 1 << ", Kolom " << j + 1 << " = ";
            cin >> arrA[i][j];
        }
    }
    cout << endl;

    // Menampilkan matriks 
    cout << "Matriks : " << endl;
    cout << "--------------" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "| " << setw(3) << arrA[i][j] << " ";
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
            arrC[i][j] = 9 * arrA[i][j];
            cout << "| " << setw(3) << arrC[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "--------------" << endl;
    }

    return 0;
}
