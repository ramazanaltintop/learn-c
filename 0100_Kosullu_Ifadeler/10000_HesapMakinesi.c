/* Switch-case ile Basit Hesap Makinesi Programi */

#include <stdio.h>

int main()
{
	char islem;
	float sayi1, sayi2, sonuc=0.0f;
	
	/* Karsilama mesaji yazdir */
	printf("BASIT HESAP MAKINESI UYGULAMASI\n");
	printf("-------------------------------\n");
	printf("Lutfen [sayi1] [+ - / *] [sayi2] giriniz.\n");
	scanf("%f %c %f", &sayi1, &islem, &sayi2);
	
	/* Islem isaretine gore faaliyet gerceklestir */
	switch(islem)
	{
		case '+':
			sonuc = sayi1 + sayi2;
			break;
			
		case '-':
			sonuc = sayi1 - sayi2;
			break;
		
		case '*':
			sonuc = sayi1 * sayi2;
			break;
		
		case '/':
			sonuc = sayi1 / sayi2;
			break;
			
		default:
			printf("Gecersiz deger!... Lutfen 4 islemden bir tanesini seciniz.");
	}
	
	/* Sonucu yazdir */
	printf("%.2f %c %.2f = %.2f", sayi1, islem, sayi2, sonuc);
	
	return 0;
}