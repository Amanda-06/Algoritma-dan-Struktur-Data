#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

int random(int bil)
{
    int jumlah = rand() % bil;
    return jumlah;
}

void randomize()
{
    srand(time(NULL));
}

void clrscr()
{
    system("cls");
}

void Sequential()
{
    clrscr();
    int data[100];
    int cari = 20;
    int counter = 0;
    int flag = 0;
    int save;
    randomize();
    printf("generating 100 number . . .\n");
    for(int i = 0; i < 100; i++)
    {
        data[i] = random(100) + 1;
        printf("%d ", data[i]);
    }
    printf("\n done. \n");

    for(int i = 0; i < 100; i++)
    {
        if(data[i] == cari)
        {
            counter++;
            flag = 1;
            save = i;
        }
    }

    if (flag == 1)
    {
        printf("Data ada, sebanyak %d! \n", counter);
        printf("pada indeks ke=%d", save);
    }
    else
    {
        printf("Data tidak ada! \n");
    }
}

void binary()
{
    int n, kiri, kanan, tengah, temp, key;
    bool ketemu = false;

    cout << "Masukkan jumlah data? ";
    cin >> n;
    int *angka = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Angka ke - [" << i << "] : ";
        cin >> angka[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (angka[j] > angka[j + 1])
            {
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }
    cout << "\n=====================================================================\n";
    cout << "Data yang telah diurutkan adalah : \n";
    for (int i = 0; i < n; i++)
    {
        cout << angka[i] << " ";
    }
    cout << "\n=====================================================================\n";
    cout << "Masukkan angka yang dicari : ";
    cin >> key;

    kiri = 0;
    kanan = n - 1;
    while (kiri <= kanan)
    {
        tengah = (kiri + kanan) / 2;
        if (key == angka[tengah])
        {
            ketemu = true;
            break;
        }
        else if (key < angka[tengah])
        {
            kanan = tengah - 1;
        }
        else
        {
            kiri = tengah + 1;
        }
    }

    if (ketemu == true)
    {
        cout << "Angka ditemukan pada indeks : " << tengah << "!\n";
    }
    else
    {
        cout << "Angka tidak ditemukan!";
    }

    delete[] angka;
}

void showDifference() {
    cout << "\nPerbedaan Sequential dan Binary Searching:\n";
    cout << "1. Sequential Searching:\n";
    cout << "   - Mencari data satu per satu dari awal hingga akhir.\n";
    cout << "   - Tidak memerlukan data terurut.\n";
    cout << "   - Lebih lambat untuk jumlah data besar.\n";
    cout << "   - Kelebihan Sequential Searching:\n";
    cout << "     * Relatif lebih cepat dan efisien, dapat menghemat waktu karena pencarian datanya cepat.\n";
    cout << "     * Mempunyai algoritma yang sederhana.\n";
    cout << "   - Kekurangan Sequential Searching:\n";
    cout << "     * Untuk data dalam jumlah banyak pencariannya cukup memakan waktu.\n";
    cout << "     * Beban komputasi yang cenderung lebih besar.\n";
    cout << "2. Binary Searching:\n";
    cout << "   - Mencari dengan membagi dua data secara berulang.\n";
    cout << "   - Memerlukan data yang sudah diurutkan.\n";
    cout << "   - Jauh lebih cepat pada data besar.\n";
    cout << "   - Kelebihan Binary Searching:\n";
    cout << "     * Untuk data dalam jumlah besar, waktu pencarian lebih cepat tetapi data harus sudah di-sorting terlebih dahulu.\n";
    cout << "     * (dalam keadaan terurut), jadi harus mengurutkan data terlebih dahulu.\n";
    cout << "     * Beban komputasi-nya lebih kecil.\n";
    cout << "   - Kekurangan Binary Searching:\n";
    cout << "     * Mempunyai algoritma yang cukup rumit.\n";
    cout << "     * Tidak baik untuk data berangkai.\n";
}

int main()
{
    int pilihan;
    do {
        cout << "Pilih Menu\n";
        cout << "1. Sequential Searching\n";
        cout << "2. Binary Searching\n";
        cout << "3. Jelaskan Perbedaan Sequential dan Binary Searching\n";
        cout << "4. Exit\n";
        cout << "Silahkan masukkan pilihan: ";
        cin >> pilihan;
    
        switch(pilihan)
        {
            case 1:
                Sequential();
                break;
            case 2:
                binary();
                break;
            case 3:
                showDifference();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
        }
        cout << "\nPress any key to continue...\n";
        cin.ignore();
        cin.get();

    } while (pilihan != 4);
}