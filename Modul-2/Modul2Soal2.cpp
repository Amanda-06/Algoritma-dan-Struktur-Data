#include <iostream>
using namespace std;

const int maks = 5; // Ukuran maksimum stack

// Struktur stack
struct Stack {
    int data[maks];
    int atas;
} Tumpuk;

void inisialisasi() {
 Tumpuk.atas = -1; // Inisialisasi stack kosong
}

// Fungsi untuk mengecek apakah stack kosong
int kosong() 
{ 
    if (Tumpuk.atas == -1) {
        return 1;
    } else {
        return 0;
    }
}

// Fungsi untuk mengecek apakah stack penuh
int penuh() {
    if (Tumpuk.atas == maks - 1)
        return 1; // Stack penuh
    else
        return 0; // Stack tidak penuh
}

// Fungsi untuk menambahkan data ke dalam stack
void input(int data) {
    if (penuh() == 0) {
        Tumpuk.atas++;
        Tumpuk.data[Tumpuk.atas] = data;
        cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk ke Stack\n";
    } else {
        cout << "Tumpukan penuh\n";
    }
}

// Fungsi utama 
int main() {
    inisialisasi(); // Inisialisasi stack

    input(10);
    input(20);
    input(30);
    input(40);
    input(50);
    input(60); // Stack akan penuh di sini

    return 0;
}