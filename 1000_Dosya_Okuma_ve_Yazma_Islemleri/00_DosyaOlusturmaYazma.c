/* Dosya olusturup dosyaya yazma islemleri */

#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main()
{
	/* Veri boyutunu depolayan karakter dizisi */
	char veri[VERI_BOYUTU];
	
	/* File pointer to hold reference to our file */
	FILE * fPtr;
	
	/*
		Dosyayi w (write) modunda ac
		"data/file1.txt" dosyanin konumu
	*/
	fPtr = fopen("dosya1.txt","w+");
	
	/* fopen(), eger basarisiz ise NULL doner */
	if(fPtr == NULL)
	{
		/* Dosya olusturulamadigi icin programdan cik */
		printf("Dosya olusturulamadi.\n");
		exit(EXIT_FAILURE);
	}
	
	/* Dosyaya kaydedilecek olan girdileri kullanicidan al */
	printf("Dosyaya kaydedilecek olan girdiyi al : ");
	fgets(veri, VERI_BOYUTU, stdin); // file get string
	
	/* Veriyi dosyaya yaz */
	fputs(veri, fPtr); // file put string
	
	/* Dosyayi kapat */
	fclose(fPtr);
	
	/* Basari mesajini yazdir */
	printf("Dosya basariyla olusturuldu ve icerigi kaydedildi!...");
	
	return 0;
}