#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek arrayt yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1:...
    try {
        array<int, 3> data = { 1, 2, 3 };
        //pesan array integer 3 elemen
        //cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //Penangkapan menggunakan obyek exeption
        cout << e.what() << endl;
        //Akan dieksekusi karna array data hanya
        //memiliki 3 elemen
    }
    cout << "Baris Program yang terkahir" << endl;
    // Penanda 2: bahwa proogram berjalan tanpa berhenti
    // Meskipun terjadi kesalahan
    return 0;
}