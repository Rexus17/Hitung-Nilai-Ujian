#include <iostream>
using namespace std;

main ()
{
	// deklarasi variabel
	float nilaiUts, nilaiUas, rata_rata;
	string nama;
	
	// mengisi nilai UTS dan UAS
	cout << "Masukan nilai UTS: ";
	cin >> nilaiUts;
	cout << "Masukan nilai UAS: ";
	cin >> nilaiUas;
	
	// hitung rata - rata nilai
	rata_rata = (nilaiUts + nilaiUas) / 2;
	
	// buat copyright
	cout << "Masukan nama pembuat program ini: ";
	cin >> nama;
	
	// tampilkan hasilnya
	cout << "Nilai hasil ulangan anda adalah: " << rata_rata << " dan pencipta program ini adalah: " << nama;
	
}


