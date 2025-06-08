#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama;
    int umur;

    cout << "Masukan nama kamu:";
    getline(cin, nama);

    cout << "masukan umur kamu:";
    cin >> umur;

    cout << "\nHai " << nama << " umur kamu " << umur << " tahun.\n";
}