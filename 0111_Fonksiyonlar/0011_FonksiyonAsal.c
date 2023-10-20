/* Bir sayinin asal olup olmadiginin fonksiyon yardimiyla belirlenmesi */

#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanlari/deklarasyonlari */
int SayiAsalMi(int sayi);

int main()
{
	int sayi;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	// SayiAsalMi() fonksiyonunu cagir ve sonucu yazdir
	if(SayiAsalMi(sayi))
	{
		printf("%d bir asal sayidir.", sayi);
	}
	else
	{
		printf("%d bir asal sayi degildir.", sayi);
	}
	
	return 0;
}

/*
	Bir sayinin asal sayi olup olmadigini kontrol eden fonksiyon
	Sayi asalsa 1, degilse 0 sonucunu dondurur
*/
int SayiAsalMi(int sayi)
{
	int i;
	
	/*
		Kendisi ve 1 haricinde baska hicbir sayiya tam bolunmeyen
		bir sayi, Asal sayi olarak anilir
	*/
	for(i = 2; i <= sayi / 2; i++)
	{
		/*
			Herhangi bir sayinin boleni kendisinin yarisindan daha buyuk olamaz.
			Sayi baska bir sayiya bolunuyorsa asal degildir
		*/
		if ((sayi % i) == 0)
		{
			return 0; // 0 dondurur ve hemen fonksiyondan cikar.
		}
	}
	return 1;
	
}