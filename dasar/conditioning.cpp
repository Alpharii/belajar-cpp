#include <iostream>
using namespace std;

int main(){
    int nilai;

    cout << "masukan nilai ujian: ";
    cin >> nilai;

    if(nilai>= 90){
        cout << "Kamu dapet A\n";
    } else if (nilai >= 80){
        cout << "Kamu dapet B\n";
    } else if (nilai >=70){
        cout << "Kamu dapet C\n";
    } else {
        cout << "Kamu tidak lulus\n";
    }

    return 0;
}