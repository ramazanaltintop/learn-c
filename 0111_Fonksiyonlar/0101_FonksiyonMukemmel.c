/* Bir sayinin mukemmel sayi olup olmadiginin fonksiyonlar yardimiyla bulunmasi */

#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanlari(deklarasyonlari) */
int SayiMukemmelMi(int sayi);

int main()
{
	int sayi;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
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