/* Uc boyutlu diziler uzerinde dongu kurma */

#include <stdio.h>

int main()
{
	int benimMatrisim[2][3][4] = { { {3, 6, 2, 5}, {4, 6, 8, 9}, {6, 4, 2, 1} },
								   { {2, 7, 3, 4}, {6, 9, 1, 2}, {3, 6, 7, 4} } };
	
	int i, j, k;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < 4; k++)
			{
				printf("%d ", benimMatrisim[i][j][k]);
			}
			printf("\n");
		}
		printf("...............\n");
	}
	
	return 0;
}