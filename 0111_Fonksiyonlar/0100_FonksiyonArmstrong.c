/* Bir sayinin Armstrong sayisi olup olmadiginin Fonksiyon yardimi ile belirlenmesi */

#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanlari/deklarasyonlari */
int SayiArmstrongMu(int sayi);

int main()
{
	int sayi;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	/* SayiArmstrongMu() fonksiyonunu cagir ve sonucu yazdir */
	if(SayiArmstrongMu(sayi))
	{
		printf("%d bir Armstrong sayisidir.\n", sayi);
	}
	else
	{
		printf("%d bir Armstrong sayisi degildir.\n", sayi);
	}
	
	return 0;
}

/*
	Bir sayinin Armstrong sayisi olup olmadigini kontrol eden fonksiyon
	Sayi Armstrong sayisiysa 1, degilse 0 dondurur
*/
int SayiArmstrongMu(int sayi)
{
	/*
		n basamakli bir sayi icin
		abc...klm = (a^n) + (b^n) + (c^n) + ... + (k^n) + (l^n) + (m^n)
		
		Ornek 1: 153 = (1^3) + (5^3) + (3^3) = 153
		--> 153 bir Armstrong sayisidir.
		
		Ornek 2: 1634 = (1^4) + (6^4) + (3^4) + (4^4) = 1634
		--> 1634 bir Armstrong sayisidir.
	*/
	
	int son_basamak, toplam, orijinal_sayi, basamak_sayisi;
	toplam = 0;
	
	orijinal_sayi = sayi;
	
	/* Sayinin kac basamakli oldugunu hesapla */
	basamak_sayisi = (int) log10(sayi) + 1;
	
	/*
		Her bir basamagin ustellerinin toplamini hesapla
	*/
	while(sayi > 0)
	{
		// Son basamagi al
		son_basamak = sayi % 10;
		
		// Son basamagin ustelini hesapla ve toplam degiskenine ekle
		toplam = toplam + round(pow(son_basamak, basamak_sayisi));
		
		// Son basamagi yok et
		sayi = sayi / 10;
	}
	
	return (orijinal_sayi == toplam);
}