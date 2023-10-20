/* Verilen bir karakterin alfabetik olup olmadiginin belirlenmesi */

#include <stdio.h>

int main()
{
	char karakter;
	
	/* Kullanicidan bir karakter al */
	printf("Lutfen bir karakter giriniz : ");
	scanf("%c", &karakter);
	
	if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
	{
		printf("Alfabetik bir karakter girdiniz.");
	}
	else
	{
		printf("Alfabetik olmayan bir karakter girdiniz.");
	}
	
	return 0;
}