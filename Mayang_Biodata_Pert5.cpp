#include<iostream>
#include<string>
using namespace std;
int main () {
	string nama, nim, hobi, umur;
	cout << "Masukkan Nama: ";
	getline(cin, nama);
	cout << "Masukkan NIM : ";
	getline(cin, nim);
	cout << "Masukkan Hobi: ";
	getline(cin, hobi);
	cout << "Masukkan Umur: ";
	getline(cin, umur);
	cout << "\n=== Biodata ===" << endl;
	cout << "Nama : " << nama << endl;
	cout << "NIM  : " << nim << endl;
	cout << "Hobi : " << hobi << endl;
	cout << "Umur : " << umur << endl;
	return 0;
}
