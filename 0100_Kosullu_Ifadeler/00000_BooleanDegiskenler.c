/* Bool Degiskenler */

#include <stdio.h>
#include <stdbool.h> // Boolean degiskenler kutuphanesi

int main()
{
	bool ProgramcilikGuzelMi = true;
	bool TembellikGuzelMi = false;
	
	printf("%d\n", ProgramcilikGuzelMi); // 1 (true) dondurecek
	printf("%d\n", TembellikGuzelMi); // 0 (false) dondurecek
	printf("\n...\n");
	
	printf("%d\n", 9 > 3); //1 (true) dondurecek, cunku 9, 3'ten buyuktur
	
	int x = 7;
	int y = 4;
	printf("%d\n", x > y); // 1 (true) dondurecek, cunku 7, 4'ten buyuktur
	printf("\n...\n");
	
	printf("%d\n", 25 == 25); // 1 (true) dondurecek, cunku 25, 25'e esittir
	printf("%d\n", 25 == 30); // 0 (false) dondurecek, cunku 25, 30'a esit degildir
	printf("%d\n", 25 != 45); // 1 (true) dondurecek, cunku 25, 45'e esit degildir
	
	return 0;
}