#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5; //Melemparkan sebuah integer maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
    }
	catch (int a) {
		//block ini akan dieksekusi
		cout << "pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//Jika selain integer maka blockini akan dieksekusi
		cout << "default Pengecualian dieksekusi" << endl;
	}

	return 0;
}