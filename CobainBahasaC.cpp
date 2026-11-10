
#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    cout << "===== KALKULATOR SEDERHANA =====" << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;

    cout << "Pilih operasi (1-4): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            cout << "Hasil penjumlahan = " << hasil << endl;
            break;

        case 2:
            hasil = angka1 - angka2;
            cout << "Hasil pengurangan = " << hasil << endl;
            break;

        case 3:
            hasil = angka1 * angka2;
            cout << "Hasil perkalian = " << hasil << endl;
            break;

        case 4:
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                cout << "Hasil pembagian = " << hasil << endl;
            } else {
                cout << "Error! Tidak bisa membagi dengan nol." << endl;
            }
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
