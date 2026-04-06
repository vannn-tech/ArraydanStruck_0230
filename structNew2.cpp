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
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Desa : ";
    cin >> mhs.alamat.desa;
    cout << "Kota : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    
}