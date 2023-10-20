/* Ikinci dereceden bir denklemin koklerinin hesaplanmasi (switch-case ile) */

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonu kullanabilmek icin

int main()
{
	float a, b, c;
	float kok1, kok2, imajiner;
	float diskriminant;
	
	printf("(aX^2 + bX + c) seklindeki ikinci dereceden denklemin a, b ve c katsayilarini giriniz : ");
	scanf("%f%f%f", &a, &b, &c);
	
	/* Denklemin diskriminantini hesapla */
	diskriminant = (b * b) - (4 * a * c);
	
	/* Diskriminanti incele */
	switch(diskriminant > 0)
	{
		case 1:
			/* Diskriminant pozitifse */
			kok1 = (-b - sqrt(diskriminant)) / (2 * a);
			kok2 = (-b + sqrt(diskriminant)) / (2 * a);
			
			printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f ve %.2f", kok1, kok2);
			break;
		case 0:
			/* Diskriminant pozitif degilse*/
			switch(diskriminant < 0)
			{
				case 1:
					/* Diskriminant negatifse */
					kok1 = kok2 = -b / (2 * a);
					imajiner = sqrt(-diskriminant) / (2 * a);
					
					printf("Iki adet ayrik ve karmasik kok bulunmaktadir: %.2f + i%.2f ve %.2f - i%.2f", kok1, imajiner, kok2, imajiner);
					break;
				case 0:
					/* Diskriminant 0 ise */
					kok1 = kok2 = -b / (2 * a);
					
					printf("Birbirlerine esit iki adet gercel kok bulunmaktadir : %.2f ve %.2f", kok1, kok2);
					break;
			}
	}
	
	return 0;
}