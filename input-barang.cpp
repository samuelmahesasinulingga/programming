// Array Dimensi Satu

#include <iostream>
#include <string>
using namespace std;

int main(){
    int jumlah;

    cout << "Masukkan jumlah barang yang ingin diinput : ";
    cin >> jumlah;
    cin.ignore(); // Membersihkan buffer untuk getline()

    string *a = new string[jumlah]; // Alokasi memori dinamis untuk array a

    cout << "Input Barang di Toko Buku : " << endl;
    for (int i=0; i < jumlah; i++) {
        cout << "Barang ke-" << i + 1 << " : ";
        getline(cin, a[i]);
    }

    cout << endl;

    cout << "Daftar Barang di Toko Buku : " << endl;
    for (int i=0; i < jumlah; i++) {
        cout << i + 1 << ". " << a[i] << endl;
    }
    
    cout << endl;

    cout << "Dalam Bentuk Array : [";
    for (int i=0; i < jumlah; i++) {
        cout << "\"" << a[i] << "\"";
        if (i != jumlah - 1) {
            cout << ", ";
        }
    }
    
    cout << "]" << endl;

    delete[] a; // Menghapus memori yang dialokasikan untuk array a

    return 0;
}
