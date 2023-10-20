/* Union (Birlesim) Veri Yapisi */

/* Struct kendi icerisinde bulunan butun degiskenleri ayni anda tutabilirken
hafizada onun icin buyuk bir yer acarken, Union veri yapisi bunlardan sadece bir
tanesini bir anda tutmak uzere tasarlanmis bir veri yapisidir. Gomulu yazilim
yapiyorsaniz hafiza kisiti cok olan platformlarda hafizanizda bir Struct'in
tutacagi kadar yeriniz yoksa Union kullanmaniz mantiklidir. Union icerisindeki
butun degiskenlere ayni anda ihtiyac duymuyorsaniz kullanabilirsiniz.
*/

#include <stdio.h>
#include <string.h>

union Veri {
	int i;
	float f;
	char str[20];
};

int main()
{
	union Veri veri;
	
	veri.i = 12;
	veri.f = 115.4;
	strcpy(veri.str, "Ramazan Altintop");
	
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n");
	
	veri.i = 144;
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n");
	
	veri.f = -99.23;
	printf("Verinin buyuklugu : %d\n", sizeof(veri));
	printf("veri.i : %d\n", veri.i);
	printf("veri.f : %.2f\n", veri.f);
	printf("veri.str : %s\n", veri.str);
	printf("\n...\n");
	
	return 0;
}