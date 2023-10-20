/* Hata yakalama ve programdan cikis */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int bolunen = 20;
	int bolen = 0;
	int bolum;
	
	if(bolen == 0)
	{
		fprintf(stderr, "Sifira bolme hatasi!... Programdan cikiliyor!...");
		exit(-1); // exit(EXIT_FAILURE);
	}
	
	bolum = bolunen / bolen;
	fprintf(stderr, "Bolum (Sonuc) = %d\n", bolum);
	
	exit(0); // exit(EXIT_SUCCESS)
}