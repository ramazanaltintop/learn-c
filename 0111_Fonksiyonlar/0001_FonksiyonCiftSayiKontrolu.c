/* Bir sayinin cift olup olmadiginin fonksiyon yardimiyla belirlenmesi */

#include <stdio.h>

// Bu ornekte fonksiyon beyani ve tanimlamasi ayni anda yapilmistir.
/*
	Eger fonksiyon sayiniz yuksek ise yukarida fonksiyon beyanlari
	hemen altinda main en altta ise fonksiyon tanimlamalari yapilmasi
	tavsiye edilir.
*/

/*
	Bir sayinin cift olup olmadigini belirleyen fonksiyon
	Sayi ciftse 1, tekse 0 dondurur.
*/
int SayiCiftMi(int sayi)
{
	if((sayi % 2) == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int sayi;
	
	/* Kullanicidan sayiyi al */
	printf("Lutfen bir sayi degeri giriniz : ");
	scanf("%d", &sayi);
	
	/* SayiCiftMi() fonksiyonunun sonuclarini gor */
	if(SayiCiftMi(sayi))
	{
		printf("Bu bir cift sayidir.");
	}
	else
	{
		printf("Bu bir tek sayidir.");
	}
	
	return 0;
}