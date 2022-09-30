#include <iostream>

using namespace std;
	
int main (){
	int bilangan1, bilangan2, pilihan;
	float hasil;
	string operasi;
	
	cout<<"\n";
	cout<<"CONTOH PEMROGRAMAN SEDERHANA KALKULATOR\n"<<endl;

	cout<<"Pilih Operator Aritmatika"<<endl;
	cout<<"   1. Penjumlahan"<<endl;
	cout<<"   2. Pengurangan"<<endl;
	cout<<"   3. Perkalian"<<endl;
	cout<<"   4. Pembagian"<<endl;
	cout<<"   5. Modulus atau Sisa\n"<<endl;
	
	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilihan;
	
	cout<<"Masukkan bilangan pertama : ";
	cin>>bilangan1;
	cout<<"Masukkan bilangan kedua : ";
	cin>>bilangan2;
	
	switch (pilihan){
		case 1 : hasil = bilangan1+bilangan2;
				operasi ='+';
				break;
		case 2 : hasil = bilangan1-bilangan2;
				operasi ='-';
				break;
		case 3 : hasil = bilangan1*bilangan2;
				operasi ='*';
				break;
		case 4 : hasil = bilangan1/bilangan2;
				operasi ='/';
				break;
		case 5 : hasil = bilangan1%bilangan2;
				operasi ='%';
				break;
		default : cout<<"Operator Yang Anda Masukkan Salah"<<endl;
		
	}
	
	cout<<"----------------------------------------------------------\n"<<endl;
	cout<<"Hasil dari "<<bilangan1<<" "<<operasi<<" "<<bilangan2<<" adalah "<<hasil<<endl;
}
