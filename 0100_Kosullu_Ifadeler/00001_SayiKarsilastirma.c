/* Kosullu ifadeler ile sayi karsilastirma islemlerinin yapilmasi */

#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	
	/* Kullanicidan iki sayi al */
	printf("Lutfen iki sayi degeri giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	/* sayi1 daha buyukse */
	if (sayi1 > sayi2)
	{
		printf("Birinci blok : %d daha buyuktur.", sayi1);
	}
	
	/* sayi2 daha buyukse */
	if (sayi2 > sayi1)
	{
		printf("Ikinci blok : %d daha buyuktur.", sayi2);
	}
	
	/* Esitlik durumunu kontrol et */
	if (sayi1 == sayi2)
	{
		printf("Ucuncu blok : Iki sayi birbirine esittir.");
	}
	
	return 0;
}