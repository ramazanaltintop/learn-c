/* Iki boyutlu diziler uzerinde dongu kurma */

#include <stdio.h>

int main()
{
	int benimMatrisim[2][3] = { {1, 3, 5}, {2, 4, 6} };
	
	int i, j;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", benimMatrisim[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}