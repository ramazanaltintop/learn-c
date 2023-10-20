/* Recursion (ozyineleme) ile faktoriyel hesaplama uygulamasi */

#include <stdio.h>

/* Fonksiyon beyanlari(deklarasyonlari) */
int FaktoriyelHesapla(int n);

int main()
{
	int deger = 7;
	
	printf("%d! = %d \n", deger, FaktoriyelHesapla(deger));
	
	return 0;
}

/* Fonksiyon tanimlari */

/*
	Bu fonksiyon verilen bir sayinin faktoriyelini bulur
*/
int FaktoriyelHesapla(int n)
{
	int f;
	if(n == 1)
		f = 1;
	else
		f = n * FaktoriyelHesapla(n - 1);
	return f;
}