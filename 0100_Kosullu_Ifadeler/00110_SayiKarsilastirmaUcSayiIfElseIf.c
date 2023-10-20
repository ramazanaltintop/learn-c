/* Merdiven yapili kosullu ifadeler
if else-if'ler ile sayi karsilastirma islemleri */

#include <stdio.h>

int main()
{
	int sayi1, sayi2, sayi3, maksimum;
	
	/* Kullanicidan 3 sayi degeri al */
	printf("Lutfen 3 adet sayi giriniz : ");
	scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
	
	if ((sayi1 > sayi2) && (sayi1 > sayi3))
	{
		/* sayi1 her ikisinden de buyukse */
		maksimum = sayi1;
	}
	else if (sayi2 > sayi3)
	{
		/* sayi1 > sayi2 degilse ve sayi2 > sayi3 ise */
		maksimum = sayi2;
	}
	else
	{
		/* sayi1 > sayi2 degilse ve sayi2 > sayi3 degilse */
		maksimum = sayi3;
	}
	
	/* Maksimum degeri yazdir */
	printf("3 sayi icerisinde en buyuk deger : %d", maksimum);
	
	return 0;
}