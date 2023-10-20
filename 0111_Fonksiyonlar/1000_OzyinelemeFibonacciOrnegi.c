/*
	Fibonacci sayi dizisinin elemanlarini ozyineleme (recursion) fonksiyonlarla bulma
*/

#include <stdio.h>

/* Fonksiyon beyanlari(deklarasyonlari) */
int NinciFibonacciSayisiniHesapla(int n);

int main()
{
	int n1 = 0, n2 = 1;
	printf("Fibonacci sayi dizisinden ilk kac elemanin hesaplanmasini istersiniz?\n");
	int adet;
	scanf("%d",&adet);
	int n3, i;
	
	// 0 ve 1'i yazdir
	printf("%d %d ", n1, n2);
	
	// 0 ve 1 hali hazirda yazildigi icin sonraki sayilari yazdir
	for (int i = 2; i < adet; ++i)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
	
	return 0;
}

/* Fonksiyon tanimlari */
int NinciFibonacciSayisiniHesapla(int n)
{
	if(n == 1)
		return 0;
	else if(n == 2)
		return 1;
	else
		return NinciFibonacciSayisiniHesapla(n - 1) + NinciFibonacciSayisiniHesapla(n - 2);
	
}