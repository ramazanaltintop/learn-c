/* 1'den verilen sayiya kadar tum sayilarin toplaminin hesaplanmasi */

#include <stdio.h>

int main()
{
	int i, n, toplam = 0;
	
	/* Kullanicidan ust sinir degerini al */
	printf("Ust sinir degerini giriniz : ");
	scanf("%d", &n);
	
	/* Tum sayilarin toplamini hesapla */
	for(i = 1; i <= n; i++)
	{
		toplam += i; // toplam = toplam + i seklinde de yazilabilir
	}
	
	printf("Ilk %d adet dogal sayinin toplami = %d", n, toplam);
	
	return 0;
}