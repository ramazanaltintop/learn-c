/*
	Bir sayinin asal sayi, Armstrong sayisi, Mukemmel sayi
	olup olmadiginin fonksiyonlar yardimi ile belirlenmesi
*/

#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanlari(deklarasyonlari) */
int SayiAsalMi(int sayi);
int SayiArmstrongMu(int sayi);
int SayiMukemmelMi(int sayi);

int main()
{
	int sayi;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	// SayiAsalMi() fonksiyonunu cagir ve sonucu yazdir
	if(SayiAsalMi(sayi))
	{
		printf("%d bir asal sayidir.\n", sayi);
	}
	else
	{
		printf("%d bir asal sayi degildir.\n", sayi);
	}
	
	// SayiArmstrongMu() fonksiyonunu cagir ve sonucu yazdir
	if(SayiArmstrongMu(sayi))
	{
		printf("%d bir Armstrong sayisidir.\n", sayi);
	}
	else
	{
		printf("%d bir Armstrong sayisi degildir.\n", sayi);
	}
	
	// SayiMukemmelMi() fonksiyonunu cagir ve sonucu yazdir
	if(SayiMukemmelMi(sayi))
	{
		printf("%d bir mukemmel sayidir.\n", sayi);
	}
	else
	{
		printf("%d bir mukemmel sayi degildir.\n", sayi);
	}
	
	return 0;
}

/* Fonksiyon tanimlari */

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

/*
	Bir sayinin mukemmel sayi olup olmadigini kontrol eden fonksiyon
	Sayi mukemmelse 1, degilse 0 dondurur
*/
int SayiMukemmelMi(int sayi)
{
	/*
		Kendisi haric, pozitif tam bolenlerinin toplami kendisine esit
		olan bir sayi, mukemmel sayi olarak adlandirilir.
		
		Ornek 1: 6 sayisinin kendisi haric bolenleri: 1, 2, 3
		1 + 2 + 3 = 6 oldugundan, 6 mukemmel sayidir.
		
		Ornek 2: 28 sayisinin kendisi haric bolenleri: 1, 2, 4, 7, 14
		1 + 2 + 4 + 7 + 14 = 28 oldugundan, 28 mukemmel sayidir.
	*/
	
	int i, toplam, n;
	toplam = 0;
	n = sayi;
	
	for(i = 1; i < n; i++)
	{
		/* sayi, i degerine bolunuyorsa */
		if (n % i == 0)
		{
			toplam += i;
		}
	}
	
	return (sayi == toplam);
}