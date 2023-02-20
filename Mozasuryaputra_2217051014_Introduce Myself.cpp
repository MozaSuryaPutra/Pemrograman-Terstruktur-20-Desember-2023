#include <iostream>
using namespace std;
int main(){
string nama,kelas,nilai;
int jumlah;

getline(cin,nama);

jumlah = nama.length();
cin>>kelas;
cin>>nilai;

cout<<"Izin memperkenalkan diri nama saya " <<nama<<" dengan jumlah huruf "<<jumlah<<" saya mahasiswa S1 Ilmu komputer dari kelas "<<kelas<<" Nilai DDP saya adalah "<<nilai;
}
