/*
	Depolama Konumu Belirtecleri
	static
*/

#include <stdio.h>

void DegerArttir(int k)
{
	static int i = 0;
	printf("%d ", i);
	i += k;
}

int main()
{
	DegerArttir(3);
	DegerArttir(3);
	DegerArttir(3);
	DegerArttir(3);
	
	return 0;
}