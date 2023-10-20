/* Sadece if ifadeleri ile bir sayinin pozitif veya negatif olup olmadiginin belirlenmesi */

#include <stdio.h>

int main()
{
	int sayi;
	
	/* Kullanicidan sayi degerini al */
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	if (sayi > 0)
	{
		printf("Birinci blok : Girmis oldugunuz sayi pozitiftir.");
	}
	
	if (sayi < 0)
	{
		printf("Ikinci blok : Girmis oldugunuz sayi negatiftir.");
	}
	
	if (sayi == 0)
	{
		printf("Ucuncu blok: Girmis oldugunuz sayi sifirdir.");
	}
	
	return 0;
}