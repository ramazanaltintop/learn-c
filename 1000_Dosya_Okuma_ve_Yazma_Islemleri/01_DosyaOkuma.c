/* Dosya okuma [fgetc() ile teker teker] ve icerigini goruntuleme */

#include <stdio.h>
#include <stdlib.h>

/*
	fopen() ile actiktan sonra hemen fclose() ile kapatmayi 
	aliskanlik haline getir. Yoksa unutulabilir.
*/

int main()
{
	/* Dosyamizin referansini tutan isaretci */
	FILE * fPtr;
	
	char karakter;
	
	/*
		Dosyayi (r - read - oku) modunda ac
		"dosya1.txt", dosyanin guzergahi
	*/
	
	fPtr = fopen("dosya1.txt", "r");
	
	/* fopen() eger basarisiz ise NULL doner */
	if(fPtr == NULL)
	{
		/* Dosya okunamadigi icin programdan cik */
		printf("Dosya okunamadi.\n");
		printf("Dosyanin ilgili konumda olup olmadigini ve erisim yetkinizin olup olmadigini kontrol edin!...");
		exit(EXIT_FAILURE);
	}
	
	/* Dosya basariyla acildi mesaji */
	printf("Dosya basariyla acildi; icerigi okunuyor...\n\n");
	
	do
	{
		/* Dosyadan bir karakter oku */
		karakter = fgetc(fPtr);
		
		/* Dosyadan okudugun karakteri konsola yazdir */
		putchar(karakter);
	}
	while(karakter != EOF); /* Bunu, EOF (End Of File) karakterine gelmedigin surece yap */
	
	/* Dosyayla isimiz bitti; kendisine baska uygulamalarin da erisebilmesi icin serbest birak */
	fclose(fPtr);
	
	return 0;
}