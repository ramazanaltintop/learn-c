/* Haftanin gunlerinin Haftaici'ne mi yoksa Haftasonu'na mi ait oldugunu bulma */

#include <stdio.h>

int main()
{
	int gun;
	
	/* Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al */
	printf("Gunun, haftanin kacinci gunu oldugunun bilgisini giriniz (1-7): ");
	scanf("%d", &gun);
	
	switch(gun)
	{
		case (1 || 2 || 3 || 4 || 5): // hata verecek! boyle bir kullanim yok.
			printf("Haftaici");
			break;
		case (6 || 7): // hata verecek! boyle bir kullanim yok.
			printf("Haftasonu");
			break;
		default:
			printf("Gecersiz deger!... Lutfen 1-7 arasinda deger giriniz.");
	}
	
	return 0;
}