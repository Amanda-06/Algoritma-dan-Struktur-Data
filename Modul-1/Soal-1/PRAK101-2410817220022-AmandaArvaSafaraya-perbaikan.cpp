#include <iostream>
using namespace std;

struct mhs 
{
    char nama[20], nim[15], jurusan[4];
    int sks, program;
};

mhs bayar[2];

int main() {
    int sppVar, sppTetap;

    for (int i = 0; i < 2; i++) {
        //input data
        cout << "\n\n-------------------------------\n";
        cin.ignore();  
        cout << "Nama mhs             = ";
        cin.getline(bayar[i].nama, 20);

        cout << "NIM                  = ";
        cin >> bayar[i].nim;

        cout << "Jurusan [TI/PTK]     = ";
        cin >> bayar[i].jurusan;

        do {
            cout << "Program [1=D3, 2=S1] = ";
            cin >> bayar[i].program;
            if (bayar[i].program < 1 || bayar[i].program > 2) {
                cout << ">> Program tidak sesuai.\n";
            }
        } while (bayar[i].program < 1 || bayar[i].program > 2);

        do {
            cout << "Jumlah SKS           = ";
            cin >> bayar[i].sks;
            if (bayar[i].sks <= 0)
                cout << ">> Jumlah SKS tidak valid.\n";
        } while (bayar[i].sks <= 0);

        if (bayar[i].program == 1) {
            sppTetap = 500000;
            sppVar = bayar[i].sks * 25000;
        } else {
            sppTetap = 750000;
            sppVar = bayar[i].sks * 50000;
        }

        // Output data
        cout << "\n\n----------------------------------\n";
        cout << " Output ";
        cout << "\n----------------------------------\n";        
        cout << "Nama mhs       = " << bayar[i].nama << endl;
        cout << "NIM            = " << bayar[i].nim << endl;
        cout << "Jurusan        = " << bayar[i].jurusan << endl;
        cout << "Program        = " << bayar[i].program << endl;
        cout << "Jumlah SKS     = " << bayar[i].sks << endl;
        cout << "SPP tetap      = Rp. " << sppTetap << endl;
        cout << "SPP variabel   = Rp. " << sppVar << endl;
    }
    return 0;
}
