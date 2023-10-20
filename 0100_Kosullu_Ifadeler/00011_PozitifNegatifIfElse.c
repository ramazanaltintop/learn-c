/* if-else ifadeleri ile bir sayinin pozitif veya negatif olup olmadiginin belirlenmesi */

#include <stdio.h>

int main()
{
	int sayi;
	
	/* Kullanicidan bir sayi degeri al */
	printf("Lutfen bir sayi degeri giriniz :");
	scanf("%d", &sayi);
	
	if (sayi > 0)
	{
		printf("Girmis oldugunuz sayi pozitiftir.");
	}
	else if (sayi < 0)
	{
		printf("Girmis oldugunuz sayi negatiftir.");
	}
	else
	{
		printf("Girmis oldugunuz sayi sifirdir.");
	}
	
	return 0;
}