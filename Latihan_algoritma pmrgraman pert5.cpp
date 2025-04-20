#include <iostream>
#include <cmath>
using namespace std;
int main () {
	double c, A, B, hasil1;
	
	cout << "=== Ekspresi 1: (-2 / C) + A + B ===" << endl;
	cout << "Masukkan nilai C: ";
	cin >> c;
	
	cout << "Masukkan nilai A: ";
	cin >> A;
	
	cout << "Masukkan nilai B: ";
	cin >> B;
	
	if (c == 0) {
		cout << "Error: C tidak boleh 0 karena pembagian dengan nol tidak terdefinisi." << endl;
		return 1;
	}
	hasil1 = (-4 / c) + A + B;
	cout << "Hasil Ekspresi 1 adalah: " << hasil1 << endl << endl;
	
	double x, y, hasil2;
	
	cout << "=== Ekspresi 2: sqrt((x / y) + x^2) ===" << endl;
	cout << "Masukkan nilai x: ";
	cin >> x;
	
	cout << "Masukkan nlai y: ";
	cin >> y;
	
	if (y == 0) {
		cout << "Error: y tidak boleh 0 karena pembagian dengan nol tidak terdefinisi." << endl;
		return 1;
	}
	
	if (x == 0) {
		cout << "Error: Nilai x tidak boleh nol" << endl;
		return 1;
	}
	
	double dalamAkar = (x / y) + pow(x, 2);
	
	if (dalamAkar < 0) {
		cout << "Error: Ekspresi dalam akar menghasilkan nilai negatif" << endl;
		return 1;
	}
	
	hasil2 = sqrt(dalamAkar);
	cout << "Hasil ekspresi 2 adalah: " << hasil2 << endl;
	
	return 0;
}
