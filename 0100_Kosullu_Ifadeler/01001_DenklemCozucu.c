/* Ikinci dereceden bir denklemin koklerinin hesaplanmasi */

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek icin

int main()
{
	float a, b, c;
	float kok1, kok2, imajiner;
	float diskriminant;
	
	printf("(aX^2 + bX + c) seklindeki ikinci derece denklemin a, b ve c katsayilarini giriniz : ");
	scanf("%f%f%f", &a, &b, &c);
	
	/* Denklemin diskriminantini hesapla */
	diskriminant = (b * b) - (4 * a * c);
	
	/* Diskriminanti incele */
	if (diskriminant > 0)
	{
		kok1 = (-b + sqrt(diskriminant)) / (2 * a);
		kok2 = (-b - sqrt(diskriminant)) / (2 * a);
		
		printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f ve %.2f", kok1, kok2);
	}
	else if(diskriminant == 0)
	{
		kok1 = kok2 = -b / (2 * a);
		
		printf("Birbirlerine esit iki adet gercel kok bulunmaktadir: %.2f ve %.2f", kok1, kok2);
	}
	else if(diskriminant < 0)
	{
		kok1 = kok2 = -b / (2 * a);
		imajiner = sqrt(-diskriminant) / (2 * a);
		
		printf("Iki adet ayrik ve karmasik kok bulunmaktadir: %.2f + i%.2f ve %.2f - i%.2f", kok1, imajiner, kok2, imajiner);
	}
	
	return 0;
}