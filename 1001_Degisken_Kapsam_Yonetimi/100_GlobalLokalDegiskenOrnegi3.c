/* Global ve Lokal degiskenler; fonksiyon parametreleri */

#include <stdio.h>

/* global degisken beyani(deklarasyonu) */
int a = 20; // g_a

/* verilen iki sayiyi toplayan fonksiyon */
int BaziIslemlerGerceklestir(int a, int b) // girdi1, girdi2
{
	printf("a degiskeninin BaziIslemlerGerceklestir() fonksiyonu icerisindeki giris degeri = %d\n", a); // girdi1
	printf("b degiskeninin BaziIslemlerGerceklestir() fonksiyonu icerisindeki giris degeri = %d\n", b); // girdi2
	
	a *= 12; // girdi1
	b += 5; // girdi2
	
	printf("a degiskeninin BaziIslemlerGerceklestir() fonksiyonu icerisindeki sonraki degeri = %d\n", a); // girdi1
	printf("b degiskeninin BaziIslemlerGerceklestir() fonksiyonu icerisindeki sonraki degeri = %d\n", b); // girdi2
	
	return a + b; // girdi1 + girdi2
}

int main()
{
	/* Lokal degisken beyani(deklarasyonu) */
	int a = 10;
	int b = 20;
	int c = 0;
	
	printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
	printf("b degiskeninin main() icerisindeki degeri = %d\n", b);
	c = BaziIslemlerGerceklestir(a, b);
	printf("c degiskeninin main() icerisindeki degeri = %d\n", c);
	
	printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
	printf("b degiskeninin main() icerisindeki degeri = %d\n", b);
	
	return 0;
}