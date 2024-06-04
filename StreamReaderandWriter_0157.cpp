#include <fstream>
#include <iostream>
#include <string>
using namespace std;




int main() {

	// untuk menyimpan data berbentuk string
	string baris;

	// membuka file dalam node menulis.
	ofstream outfile;
	// Menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	// Unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// Loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		// Menuliskan dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menuliskan sekarang tutup filenya 
	outfile.close();

	// Membuka file dalam node membaca
	ifstream infile;
	// menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	// jika file ada maka
	if (infile.is_open())
	{
		// Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// Dan tampilkan di sini
			cout << baris << '\n';
		}
		// Tutup file tersebut setelah selesai
		infile.close();
	}

}
