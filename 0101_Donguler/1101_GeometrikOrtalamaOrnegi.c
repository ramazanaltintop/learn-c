/* Geometrik Ortalama Ornegi */

#include <stdio.h>
#include <math.h> // pow() fonksiyonu icin

int main()
{
	int sayilarin_adedi, sayac = 0;
	double carpim = 1.0;
	printf("Kac adet sayi gireceginizi belirtiniz : ");
	scanf("%d", &sayilarin_adedi);
	
	double girilen_son_sayi;
	while((sayac < sayilarin_adedi))
	{
		printf("Gercel bir sayi giriniz : ");
		scanf("%lf", &girilen_son_sayi);
		sayac = sayac + 1;
		carpim = carpim * girilen_son_sayi;
	}
	
	double geometrik_ortalama = pow(carpim, 1.0/sayilarin_adedi);
	printf("Sayilarin geometrik ortalamasi: %lf", geometrik_ortalama);
	
	return 0;
}