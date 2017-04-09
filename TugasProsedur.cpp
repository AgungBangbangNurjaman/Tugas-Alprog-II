#include <iostream>
#include <conio.h>
using namespace std;

//Prototype//
void PilihanA();
void PilihanB();

//Variable Global//
int angka, jumlah, max, min, Pilihan;


main () {

	while (Pilihan != 3) {
		cout << "!================================!\n";
		cout << " 1. Cari Nilai Minimum\n";
		cout << " 2. Cari Nilai Maximum\n";
		cout << " 3. Keluar\n";
		cout << "!================================!\n";
		cout << "Pilihan Salah Satu : ";
		cin >> Pilihan;


  if (Pilihan == 1) {
		PilihanA();

	} else if (Pilihan == 2) {
		PilihanB();
  }

	}
}

//Pilihan A
void PilihanA() {
	int angka, jumlah, max, min;
     
       cout << "1. Mencari Nilai Minimum (Banyaknya Nilai ditentukan sendiri)" << endl;
       cout << endl;
       cout << "Masukkan Banyaknya Nilai: "; cin >> jumlah;
       cout << endl;
    
	for (int i = 1; i <= jumlah; i++) {
     
    cout << "Masukkan Nilia : "; cin >> angka;
   
       if ( i == 1 ) {
		   jumlah;
             min = angka;
             max = angka;
        }
            else if ( min > angka ) {
               min = angka;
            }
    }
    
       cout << endl;
       cout << "Nilai Minimum = " <<  min << endl;
	   cout << "Jumlah = "	<< jumlah  << endl;  
    }

//Pilihan B
void PilihanB() {
		int angka, jumlah, max, min;
	cout << "2. Mencari Nilai Maksimum (Banyaknya Nilai ditentukan sendiri)" << endl;
       cout << endl;
       cout << "Masukkan Banyaknya Nilai: "; cin >> jumlah;
       cout << endl;
    
    for (int i = 1; i <= jumlah; i++) {

       cout << "Masukkan Nilai : "; cin >> angka;

       if ( i == 1 ) {
				jumlah;
             min = angka;
             max = angka;
        }
            else if ( max < angka ) {
               max = angka;
			}
    }
    
       cout << endl;
       cout << "Nilai Maksimum = " <<  max << endl;
	   cout << "Jumlah Semua Nilai= "	<< jumlah  << endl;
}