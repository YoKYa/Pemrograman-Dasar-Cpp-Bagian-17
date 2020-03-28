#include <iostream>

using namespace std;

int main(){
    system("cls"); // Membersihkan Layar Terminal

    // Deklarasi Variabel
    int Awal = 0;
    bool Kondisi;

    // Do While
    do{
        system("cls");
        cout << "Ini Perulangan Ke-" << Awal + 1 << endl;
        cout << "Ingin melakukannya Lagi?" << endl;
        cout << "1. Ya" << endl << "0. Tidak" << endl;
        cout << "Pilihan : ";
        cin >> Kondisi;
        Awal++;
    } while (Kondisi);
        
    cout << "Selesai";
    cin.get();
    return 0;
}