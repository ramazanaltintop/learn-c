/*
	Depolama Konumu Belirtecleri
	auto
*/

#include <stdio.h>

void DegerArttir(int k)
{
	auto int i = 0;
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