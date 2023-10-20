/* Bir sayinin tum carpanlarinin bulunmasi */

#include <stdio.h>

int main()
{
	int i, sayi;
	
	/* Carpanlari hesaplanacak sayiyi kullanicidan al */
	printf("Carpanlari hesaplanacak sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	printf("%d sayisinin tum carpanlari : \n", sayi);
	
	/* 1'den girilen sayiya kadar tum sayilarda gez */
	for(i = 1; i <= sayi; i++)
	{
		if (sayi % i == 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}