/* #define ve #undef makrolari */

#include <stdio.h>
#include <stdlib.h>

/*
	#define ile tanimlanan degiskenler global degiskenlerdir.
	Kodun her yerinde erisilebilir.
*/
#define BUYUK_SAYI 1000000 // satir sonunda ";" yok


/*
	Onislemci direktifleriyle tanimlanmis degiskenlerin fonksiyonlar
	icerisinde kullanilmasi mumkundur.
*/
int BelirliIslemlerGerceklestir(int girdi)
{
	return (girdi < BUYUK_SAYI);
	// return (girdi < BASKA_BIR_BUYUK_SAYI); // bu satir hata verecektir.
	// BASKA_BIR_BUYUK_SAYI degiskeni kapsam disidir.
}

int main()
{
	int ilk_degisken = 20;
	int ikinci_degisken = 25;
	int sonuc1, sonuc2, sonuc3;
	const int BASKA_BIR_BUYUK_SAYI = 1000000;
	
	printf("Buyuk sayi : %d\n", BUYUK_SAYI);
	
	sonuc1 = (ilk_degisken < BUYUK_SAYI);
	printf("Sonuc1 : %d\n", sonuc1);
	
	sonuc2 = (ikinci_degisken < BUYUK_SAYI);
	printf("Sonuc2 : %d\n", sonuc2);
	
	#undef BUYUK_SAYI // BUYUK_SAYININ tanimlamasini kaldirdik
	#define BUYUK_SAYI 30000000 // BUYUK_SAYI'yi 30000000 olarak tanimladik
	// const degiskenlerde bir kere tanimladiktan sonra degisiklik yapamiyoruz.
	printf("Buyuk sayi : %d\n", BUYUK_SAYI);
	
	sonuc3 = BelirliIslemlerGerceklestir(30);
	printf("Sonuc3 : %d\n", sonuc3);
	
	return 0;
}