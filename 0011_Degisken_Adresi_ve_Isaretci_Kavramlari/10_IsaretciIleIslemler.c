/* Isaretci (Pointer) ile Toplama Islemi */

#include <stdio.h>

int main()
{
	int sayi1, sayi2, toplam;
	int *isaretci1, *isaretci2;
	
	isaretci1 = &sayi1; // isaretci1, sayi1'in adresini tutmaktadir
	isaretci2 = &sayi2; // isaretci2, sayi2'nin adresinin tutmaktadir
	
	printf("Iki sayi giriniz : ");
	scanf("%d%d", isaretci1, isaretci2); // buraya dikkat; scanf kullaniminda !...
	
	toplam = *isaretci1 + *isaretci2;
	
	printf("Toplam = %d", toplam);
	
	return 0;
}