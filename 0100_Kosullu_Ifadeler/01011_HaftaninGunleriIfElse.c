/* Haftanin gunlerini isim bazinda yazdirma */

#include <stdio.h>

int main()
{
	int gun;
	
	/* Kullanicidan, haftanin kacinci gunu oldugu bilgisini al */
	printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
	scanf("%d", &gun);
	
	if (gun == 1)
	{
		printf("Pazartesi");
	}
	else if (gun == 2)
	{
		printf("Sali");
	}
	else if (gun == 3)
	{
		printf("Carsamba");
	}
	else if (gun == 4)
	{
		printf("Persembe");
	}
	else if (gun == 5)
	{
		printf("Cuma");
	}
	else if (gun == 6)
	{
		printf("Cumartesi");
	}
	else if (gun == 7)
	{
		printf("Pazar");
	}
	else
	{
		printf("Gecersiz deger girdiniz!... Lutfen 1 ile 7 arasinda bir deger giriniz.");
	}
	
	return 0;
}