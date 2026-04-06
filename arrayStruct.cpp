#include <iostream>
#include <string>
using namespace std;

// struct alamat
struct detailAlamat 
{
    string desa;
    string kota;
};

// struct orang
struct orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {

    orang mhs[3]; // array 3 data

    // input data
    for (int i = 0; i <= 2; i++)
    {
        cout << "Data ke-" << i + 1 << endl;

        cout << "Nama : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Desa : ";
        getline(cin, mhs[i].alamat.desa);

        cout << "Alamat Kota : ";
        getline(cin, mhs[i].alamat.kota);

        cout << "Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(); // penting biar getline berikutnya gak skip

        cout << endl;
    }

    // output data
    for (int i = 0; i <= 2; i++)
    {
        cout << "Data Penduduk ke-" << i + 1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Desa : " << mhs[i].alamat.desa << endl;
        cout << "Kota : " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << endl;
    }

    return 0;
}