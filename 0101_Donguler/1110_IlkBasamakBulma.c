/* Verilen bir sayinin ilk basamaginin hesaplanmasi */

#include <stdio.h>

int main()
{
	int n, ilk_basamak;
	
	/* Kullanicidan sayi degerini al */
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &n);
	
	ilk_basamak = n;
	
	/* Tek basamaga dusene kadar sayiyi indirge */
	while (ilk_basamak >= 0)
	{
		ilk_basamak = ilk_basamak / 10;
		if (ilk_basamak < 10)
		{
			break;
		}
	}
	
	printf("Ilk basamak = %d", ilk_basamak);
	
	return 0;
}