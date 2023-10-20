/*
	Depolama Konumu Belirtecleri
	static
*/

#include <stdio.h>

int x = 10;
int y = 50;

int main()
{
	extern int y; // extern olarak tanimlanmazsa, degeri 0 olur.
	printf("Global olan x degiskeninin degeri : %d\n", x);
	printf("Extern olan y degiskeninin degeri : %d", y);
	
	return 0;
}