// Soru: Girilen iki say� aras�ndaki t�m say�lr�n fakt�riyellerin toplam�n� bulan c program�n� yaz�n�z.

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "turkish");
	cout << "Girilen iki say� aras�ndaki t�m say�lar�n fakt�riyellerinin toplam�n� bulan c program�n� yaz�n�z." << endl;
	int a, b;
	cout << "L�tfen bir say� giriniz: ";
	cin >> a;
	cout << "L�tfen bir say� daha giriniz: ";
	cin >> b;
	int toplam = 0;
	int fact = 1;
	for (int i = a+1;i<b;i++) {
		for (int j = 1;j <= i;j++) {
			fact = fact*j;
		}
		toplam = toplam + fact;
		fact = 1;
	}
	cout << a << " ve " << b << " say�lar� aras�ndaki say�lar�n fakt�riyelleri toplam�: " << toplam << endl;
	system("pause");

}