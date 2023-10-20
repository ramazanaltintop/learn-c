/* Sabitler - Constant */

#include <stdio.h>

int main()
{
	const int SaattekiDakikaSayisi = 60;
	const float PI = 3.14; // sadece okunabilir degisken
	
	printf("%d\n", SaattekiDakikaSayisi);
	printf("%f", PI);
	
	// PI = PI + 5; // Bu satiri acarsak hata alacagiz
	
	return 0;
}