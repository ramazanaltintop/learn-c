/*
	Depolama Konumu Belirtecleri
	register
*/

#include <stdio.h>

int main()
{
	register int i;
	int sayi_dizisi[5] = {10, 15, 20, 25, 30};
	for(i = 0; i < 5; i++)
	{
		printf("sayi_dizisi[%d] = %d\n", i, sayi_dizisi[i]);
	}
	
	return 0;
}