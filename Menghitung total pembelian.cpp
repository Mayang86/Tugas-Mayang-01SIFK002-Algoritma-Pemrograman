#include <iostream>
#include <iomanip> // untuk setprecision
using namespace std;

int main() {
    // Deklarasi variabel
    double harga_barang, beli, diskon, total_bayar;
    int jumlah_barang;

    // Input harga dan jumlah barang
    cout << "Masukkan harga barang: ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    // Hitung total beli sebelum diskon
    beli = harga_barang * jumlah_barang;

    // Tentukan besar diskon
    if (jumlah_barang > 100) {
        diskon = 0.15 * beli;
    } else {
        diskon = 0.05 * beli;
    }

    // Hitung total bayar setelah diskon
    total_bayar = beli - diskon;

    // Output hasil
    cout << fixed << setprecision(2); // supaya angka desimal rapi 2 angka
    cout << "Total Beli     : Rp" << beli << endl;
    cout << "Diskon         : Rp" << diskon << endl;
    cout << "Total Bayar    : Rp" << total_bayar << endl;

    return 0;
}

