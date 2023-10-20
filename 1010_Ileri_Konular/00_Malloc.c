/* Dinamik Bellek Yonetimi malloc() fonksiyonu kullanimi */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *isaretci, toplam = 0;
	
	printf("Toplanacak eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	isaretci = (int*) malloc(n * sizeof(int));
	
	/* Bellek ayirma (tahsis) isleminin basarisiz olmasi durumunda  */
	if (isaretci == NULL)
	{
		printf("Hata!... Bellek ayirma islemi basarisiz oldu.");
		exit(0);
	}
	
	printf("Toplanacak elemanlari giriniz : ");
	for(i = 0; i < n; ++i)
	{
		scanf("%d", isaretci + i);
		toplam += *(isaretci + i);
	}
	
	printf("Toplam : %d", toplam);
	
	// ayrilmis (tahsis edilmis) olan bellegi serbest birak
	free(isaretci);
	
	return 0;
}