/* Haftanin gunlerinin Haftaici'ne mi yoksa Haftasonu'na mi ait oldugunu bulma */

#include <stdio.h>

int main()
{
	int gun;
	
	/* Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al */
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1:
			printf("Haftaici");
			break;
		case 2:
			printf("Haftaici");
			break;
		case 3:
			printf("Haftaici");
			break;
		case 4:
			printf("Haftaici");
			break;
		case 5:
			printf("Haftaici");
			break;
		case 6:
			printf("Haftasonu");
			break;
		case 7:
			printf("Haftasonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda sayi giriniz.");
	}
	
	return 0;
}