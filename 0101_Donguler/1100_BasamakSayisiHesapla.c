/* Bir tam sayinin basamak sayisinin hesaplanmasi */

#include <stdio.h>

int main()
{
	long long sayi;
	int sayac = 0;
	
	/* Kullanicidan sayiyi al */
	printf("Lutfen bir sayi giriniz : ");
	scanf("%lld", &sayi);
	
	/* sayi 0'dan buyuk oldugu surece asagidaki donguyu kostur */
	do
	{
		/* Basamak sayacini 1 arttir */
		sayac++;
		
		/* Sayinin bir basamagini eksilt */
		sayi /= 10;
	} while (sayi != 0);
	
	printf("Toplam basamak sayisi : %d", sayac);
	
	return 0;
}