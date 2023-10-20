/* Dinamik Bellek Yonetimi realloc() fonksiyonu kullanimi */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *isaretci, i, n1, n2;
	
	printf("Boyut giriniz : ");
	scanf("%d", &n1);
	
	isaretci = (int*) malloc(n1 * sizeof(int));
	
	/* Bellek ayirma (tahsis) isleminin basarisiz olmasi durumunda  */
	if (isaretci == NULL)
	{
		printf("Hata!... Bellek ayirma islemi basarisiz oldu.");
		exit(0);
	}
	
	printf("Ayrilan (Tahsis edilen) Ilk Bellek Adresleri:\n");
	for(i = 0; i < n1; ++i)
	{
		printf("%pc\n", isaretci + i);
	}
	
	printf("Yeni bir boyut giriniz : ");
	scanf("%d", &n2);
	
	/* Yeniden Bellek ayirma (tahsis etme) islemi */
	isaretci = realloc(isaretci, n2 * sizeof(int));
	
	/* Bellek ayirma (tahsis) isleminin basarisiz olmasi durumunda  */
	if (isaretci == NULL)
	{
		printf("Hata!... Bellek ayirma islemi basarisiz oldu.");
		exit(0);
	}
	
	printf("Ayrilan (Tahsis edilen) Ilk Bellek Adresleri:\n");
	for(i = 0; i < n2; ++i)
	{
		printf("%pc\n", isaretci + i); // %pc --> hexadecimal
	}
		
	// ayrilmis (tahsis edilmis) olan bellegi serbest birak
	free(isaretci);
	/*
		Free yapmamak ozellikle memory leakage (bellek sizintisi) adi verilen
		ve dinamik testlerde ancak ortaya cikabilen ve sizin uygulamanizin
		surekli olarak daha fazla bellek isteyip isteyip onu serbest birakmamasindan
		oturu bilgisayar kaynaklarinin sismesi ve bir sure sonra ekstra bellek
		tahsis edilememesinden oturu hata verip cikmaniza sebep olabilir.
	*/
	
	return 0;
}