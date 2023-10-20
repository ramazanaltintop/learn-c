/*
	Bir sayinin kupunu hesaplama
	(bu ise ozel bir fonksiyon yazarak)
*/

#include <stdio.h>

/* Fonksiyon beyani / deklarasyonu */
int SayininKupunuHesapla(int sayi);

int main()
{
	int sayi;
	int c;
	
	/* Kupu hesaplanacak olan sayinin degerini kullanicidan al */
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	c = SayininKupunuHesapla(sayi);
	
	printf("%d sayisinin kupu = %d", sayi, c);
	
	return 0;
}

/*
	Verilen bir sayinin kupunu hesaplayan fonksiyon
*/
int SayininKupunuHesapla(int sayi)
{
	return (sayi * sayi * sayi);
}