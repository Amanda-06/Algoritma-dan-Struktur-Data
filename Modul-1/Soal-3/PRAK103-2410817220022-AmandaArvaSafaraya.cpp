#include <iostream>
using namespace std;

struct Input {
    char huruf;
    char kata[100];
    int angka;
};

int main() {
    Input Masuk;

    cout << "a. Masukkan sebuah huruf = ";
    cin >> Masuk.huruf;
    cout << "b. Masukkan sebuah kata = ";
    cin >> Masuk.kata; 
    cout << "c. Masukkan Angka = ";
    cin >> Masuk.angka;

    cout << "d. Huruf yang Anda masukkan adalah " << Masuk.huruf << endl;
    cout << "e. Kata yang Anda masukkan adalah " << Masuk.kata << endl;
    cout << "f. Angka yang Anda masukkan adalah " << Masuk.angka << endl;

    return 0;
}
