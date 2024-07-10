// Array Dimensi Satu

#include <iostream>
using namespace std;

int main() {
    int a[] = {80,50,70,20,10,40,60,50,75,95};
    int length = sizeof(a)/ sizeof(a[0]);

    cout << "Data Nilai siswa yaitu : " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Nilai Siswa ke-"<< i + 1 << " : " << a[i] << endl;
    }
    
}