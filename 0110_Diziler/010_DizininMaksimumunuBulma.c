/* Bir dizinin en buyuk degerinin bulunmasi */

#include <stdio.h>

int main()
{
	int benimDizim[] = {5, 7, 2, 4, 9, 3, 8, 1};
	int en_buyuk_deger = benimDizim[0];
	int konum = 0;
	
	int boyut = sizeof (benimDizim) / sizeof (benimDizim[0]); // 32 / 4 = 8
	
	for(int indeks = 0; indeks < boyut; indeks++)
	{
		if(benimDizim[indeks] > en_buyuk_deger)
		{
			en_buyuk_deger = benimDizim[indeks];
			konum = indeks;
		}
	}
	
	printf("Dizinin en buyuk elemani, %d indeksli konumda bulunan %d degeridir.\n", konum, en_buyuk_deger);
	
	return 0;
}