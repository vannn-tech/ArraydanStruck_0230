#include <iostream>
using namespace std;

struct orang 
{
    string nama;
    string alamat;
    int umur;
};

int main() 
{
    orang mhs;
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;
   
}