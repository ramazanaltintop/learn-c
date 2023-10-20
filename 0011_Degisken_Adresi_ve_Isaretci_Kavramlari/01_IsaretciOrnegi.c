/* Isaretci (Pointer) Kavrami ve Uygulamasi */

#include <stdio.h>

int main()
{
	int sayi = 10;
	int * isaretci;
	
	/* sayi degiskeninin adresi isaretci isimli isaretci (pointer) tipi degisken tarafindan tutulacak */
	isaretci = &sayi;
	
	printf("sayi degiskeninin adresi = %d\n", &sayi);
	printf("sayi degiskeninin icerigi = %d\n", sayi);
	
	printf("isaretci degiskeninin adresi = %d\n", &isaretci);
	printf("isaretci degiskeninin icerigi = %d\n", isaretci);
	printf("isaretci degiskeninin isaret ettigi deger = %d\n", *isaretci);
	
	return 0;
}