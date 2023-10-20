/* Bir dizinin arasina eleman ekleme */

#include <stdio.h>

int main()
{
	int eklenecek_sayi, eklenecek_indeks;
	int BenimDizim[] = {5, 7, 2, 4, 9, 3, 8}; 
	int boyut = sizeof (BenimDizim) / sizeof (BenimDizim[0]); // 28 / 4 = 7
	
	for(int indeks = 0; indeks < boyut; indeks++)
	{
		printf("%d ", BenimDizim[indeks]);
	}
	
	printf("\nDiziye eklenecek olan sayiyi giriniz : ");
	scanf("%d", &eklenecek_sayi);
	printf("Sayinin hangi indekse eklenecegini belirtiniz : ");
	scanf("%d", &eklenecek_indeks);
	
	for(int indeks = boyut - 1; indeks > eklenecek_indeks; indeks--)
	{
		BenimDizim[indeks] = BenimDizim[indeks - 1];
	}
	
	BenimDizim[eklenecek_indeks] = eklenecek_sayi;
	
	for(int indeks = 0; indeks < boyut; indeks++)
	{
		printf("%d ", BenimDizim[indeks]);
	}
	
	return 0;
}