// Soru: Girilen iki sayý arasýndaki tüm sayýlrýn faktöriyellerin toplamýný bulan c programýný yazýnýz.

#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "turkish");
	cout << "Girilen iki sayý arasýndaki tüm sayýlarýn faktöriyellerinin toplamýný bulan c programýný yazýnýz." << endl;
	int a, b;
	cout << "Lütfen bir sayý giriniz: ";
	cin >> a;
	cout << "Lütfen bir sayý daha giriniz: ";
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
	cout << a << " ve " << b << " sayýlarý arasýndaki sayýlarýn faktöriyelleri toplamý: " << toplam << endl;
	cout<<"Eline saðlýk :)"<<endl;
	system("pause");

}