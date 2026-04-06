#include <iostream>
using namespace std;

struct detailAlamat 
{
    string desa;
    string kota;
};

struct orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    orang mhs;
    // mengisi data
    cout << "Nama : ";
    getline(cin, mhs.nama);
    cout << "Desa : ";
    getline(cin, mhs.alamat.desa);
    cout << "Kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;

    // menampilkan data
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
 
}