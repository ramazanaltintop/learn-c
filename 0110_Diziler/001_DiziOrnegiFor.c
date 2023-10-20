/* Diziler uzerinde dongu kurma */

#include <stdio.h>

int main()
{
	int benimDizim[10] = {13, 15, 20, 25};
	benimDizim[0] = 10;
	
	int indeks;
	
	for (indeks = 0; indeks < 10; indeks++)
	{
		printf("%d ", benimDizim[indeks]);
	}
	
	return 0;
}