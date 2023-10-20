/* Haftanin gunlerinin Haftaici'ne mi yoksa Haftasonu'na mi ait oldugunu bulma */

#include <stdio.h>

int main()
{
	int gun;
	
	/* Kullanicidan, haftanin kacinci gunu oldugu bilgisini al */
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7) : ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Haftaici");
			break;
		case 6:
		case 7:
			printf("Haftasonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda rakam giriniz.");
	}
	
	return 0;
}