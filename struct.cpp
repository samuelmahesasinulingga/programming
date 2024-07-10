#include <iostream>
#include <algorithm>
using namespace std;

// Definisikan struct untuk data
struct Data {
    int angka;
    bool deleted;
};

int main() {
    const int MAX_SIZE = 8; 
    Data data[MAX_SIZE] = {{2, false}, {12, false}, {6, false}, {12, false}, {12, false} , {7, false}, {6, false}, {12, false}};

    // Tampilkan data awal
    cout << "Data awal: ";
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << data[i].angka << " ";
    }
    cout << endl;

    // Input angka yang ingin dihapus
    int angka;
    do {
        cout << "Masukkan angka yang ingin dihapus: ";
        cin >> angka;

        // Hapus angka yang diminta
        if (angka != -1) {
            bool found = false;
            for (int i = 0; i < MAX_SIZE; ++i) {
                if (data[i].angka == angka) {
                    data[i].deleted = true;
                    found = true;
                }
            }
                    cout << "Data " << angka << " Berhasil dihapus!" << endl;

            if (!found) {
                cout << "Angka tidak ditemukan." << endl;
            } else {
                // Tampilkan sisa angka yang tersedia
                cout << "Sisa angka yang tersedia: ";
                for (int i = 0; i < MAX_SIZE; ++i) {
                    if (!data[i].deleted) {
                        cout << data[i].angka << " ";
                    }
                }
                cout << endl;
            }
        }
    } while (angka != -1);

    return 0;
}
