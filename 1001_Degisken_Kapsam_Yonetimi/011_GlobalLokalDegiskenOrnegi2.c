/* Ayni isimli global ve lokal degiskenler */

#include <stdio.h>

/*
	Global degiskenleri tanimlarken basina g koymak
	lokal degiskenlerden ayirt etmek icin onemlidir.
	Ornek: g_degisken1, g_degisken2
*/

/* Global degisken beyani(deklarasyonu) */
int g = 20;

int main()
{
	printf("g = %d\n", g);
	
	/* Lokal degisken beyani(deklarasyonu) */
	int g = 10;
	
	printf("g = %d\n", g);
	
	return 0;
}