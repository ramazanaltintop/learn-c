/* Verilen bir aralik icerisindeki tum tamsayilarin toplaminin hesaplanmasi */

#include <stdio.h>

int main()
{
	int i, alt_sinir, ust_sinir, toplam = 0;
	
	/* Kullanicidan alt sinir degerini al */
	printf("Alt sinir degerini giriniz : ");
	scanf("%d", &alt_sinir);
	
	/* Kullanicidan ust sinir degerini al */
	printf("Ust sinir degerini giriniz : ");
	scanf("%d", &ust_sinir);
	
	/* Tum sayilarin toplamini hesapla */
	for(i = alt_sinir; i <= ust_sinir; i++)
	{
		toplam += i;
	}
	
	printf("%d ve %d arasindaki dogal sayilarin toplami = %d", alt_sinir, ust_sinir, toplam);
	
	return 0;
}