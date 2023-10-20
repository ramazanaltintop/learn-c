/* Verilen bir sayinin carpim tablosunun olusturulmasi */

#include <stdio.h>

int main()
{
	int i, sayi;
	
	/* Carpim tablosu olusturulacak olan sayiyi kullanicidan al */
	printf("Carpim tablosu olusturulacak olan sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", sayi, i, (sayi * i));
	}
	
	return 0;
}