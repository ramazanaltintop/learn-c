/* Global ve Lokal Degiskenler */

#include <stdio.h>

/*
	Global degiskenler, eger programci tarafindan belirtilmezse herhangi bir deger atanmazsa
	bu degiskenin icerigi (ilk icerigi) derleyici tarafindan otomatik olarak ilklendirilir (initialization).
	
	Veri tipi	Varsayilan ilklendirme degeri
	int						0
	char					'\0'
	float					0
	double					0
	pointer					NULL
*/

/* Global degisken beyani(deklarasyonu) */
int g_degisken1;

int main()
{
	/* Lokal degiskenlerin beyani(deklarasyonu) */
	int a, b;
	
	/*
		Lokal degiskenler, eger programci tarafindan belirtilmezse derleyici tarafindan
		otomatik olarak ilklendirilmez. Bilgisayar belleginde kalan garip/tuhaf degerleri
		almamalari icin programcilar tarafindan ilklendirilmelerinde fayda bulunmaktadir.
	*/
	
	/* Ilklendirme */
	a = 10;
	b = 20;
	g_degisken1 = a + b;
	
	printf("a = %d, b = %d ve g_degisken1 = %d", a, b, g_degisken1);
	
	return 0;
}