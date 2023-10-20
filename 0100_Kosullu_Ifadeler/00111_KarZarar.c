/* Kar - Zarar Hesabi */

#include <stdio.h>

int main()
{
	int maliyet, satis_bedeli, kar_zarar;
	
	/* Urunun maliyet ve satis bedellerini kullanicidan al */
	printf("Maliyet bedelini giriniz : ");
	scanf("%d", &maliyet);
	printf("Satis bedelini giriniz : ");
	scanf("%d", &satis_bedeli);
	
	if (satis_bedeli > maliyet)
	{
		/* Bu durumda kar edilmistir. Kar'i hesapla */
		kar_zarar = satis_bedeli - maliyet;
		printf("Kar : %d", kar_zarar);
	}
	else if (maliyet > satis_bedeli)
	{
		/* Bu durumda zarar edilmistir. Zarar'i hesapla */
		kar_zarar = maliyet - satis_bedeli;
		printf("Zarar : %d", kar_zarar);
	}
	else
	{
		/* Kar veya zarar edilmemistir */
		printf("Kar veya zarar edilmemistir.");
	}
		
	return 0;
}