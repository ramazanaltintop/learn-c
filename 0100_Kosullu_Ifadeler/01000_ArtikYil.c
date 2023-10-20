/* Verilen yilin artik yil olup olmadiginin belirlenmesi */

#include <stdio.h>

int main()
{
	int yil;
	
	/* Kullanicidan yil degerini aliniz */
	printf("Yil degerini giriniz : ");
	scanf("%d", &yil);
	
	/* Deger 4'e bolunebiliyorsa ve 100'e bolunemiyorsa
	veya deger 400'e bolunebiliyorsa ilgili yil Artik yildir.
	Aksi takdirde artik yil degildir. */
	
	if(((yil % 4 == 0) && (yil % 100 != 0)) || (yil % 400 == 0))
	{
		printf("Soz konusu yil, artik yildir!...");
	}
	else
	{
		printf("Soz konusu yil, artik yil degildir!...");
	}
	
	return 0;
}