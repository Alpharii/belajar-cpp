#include <iostream>
#include <string>
using namespace std;

int datatype() {
    int umur = 18;
    float tinggi = 167.3;
    string nama = "bintang"; // gunakan string, bukan char
    bool lulus = true;

    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << endl;
    cout << "Tinggi: " << tinggi << " cm" << endl;
    cout << "Lulus: " << (lulus ? "Ya" : "Tidak") << endl;

    return 0;
}

int main() {
    datatype();
    return 0;
}