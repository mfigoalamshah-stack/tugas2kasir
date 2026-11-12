#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, total;
    char ulang;

    do {
        cout << "=== MENU MAKANAN ===" << endl;
        cout << "1. Soto  - Rp 15.000" << endl;
        cout << "2. Rawon - Rp 20.000" << endl;
        cout << "====================" << endl;

        cout << "Pilih menu (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Jumlah porsi Soto: ";
            cin >> jumlah;
            total = 15000 * jumlah;
            cout << "Total Bayar: Rp " << total << endl;
        } 
        else if (pilihan == 2) {
            cout << "Jumlah porsi Rawon: ";
            cin >> jumlah;
            total = 20000 * jumlah;
            cout << "Total Bayar: Rp " << total << endl;
        } 
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

        cout << "\nPesan lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih telah memesan!\n";
    cout << "Tekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
