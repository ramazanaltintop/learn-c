/* Verilen bir sayinin son basamaginin hesaplanmasi */

#include <stdio.h>

int main()
{
	int n, son_basamak;
	
	/* Kullanicidan sayi degerini al */
	printf("Lutfen bir sayi degerini al : ");
	scanf("%d", &n);
	
	/* Son basamagi hesapla */
	son_basamak = n % 10;
	
	printf("Son basamak = %d", son_basamak);
	
	return 0;
}