/* Verilen bir sayiya kadar tum sayma sayilari yazdirma (for ve while donguleri ile) */

/* for cogunlukla belirli sayida yapilmasi kesin olan kac defa tekrarlanacagi 
kesin olan donguleri ve onlari kosturmak icin uygundur */

/* Eger herhangi bir isi ne kadar defa tekrarlayacaginiz belirli degil ise
(programi yazarken belli degil programin calisma aninda degiskenin alacagi degerlere gore
belirlenecekse) calisma aninda belirlenecekse o zaman while veya do-while
dongulerini kullanmamiz tercih edilir.  */

/* Bir isi en az bir kere yapmak ve devaminda kontroller saglamaniz gerekiyorsa do-while uygundur. */

#include <stdio.h>

int main()
{
	int i, n;
	
	/* Kullanicidan ust sinir degerini al */
	printf("Ust sinir degerini giriniz : ");
	scanf("%d", &n);
	
	printf("1'den %d'ye kadar olan tum sayma sayilari : \n", n);
	
	/*
		Dongu sayacini 1'den baslat (i = 1)
		n degerine kadar git (i <= n)
		her seferinde dongu sayacini 1 arttir (i++)
		her seferinde i degerini yazdir ve alt satira gec
	*/
	
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	
	printf("...\n");
	
	i = 1;
	while(i <= n)
	{
		printf("%d\n", i);
		i++;
	}
	
	printf("...\n");
	
	i = 1;
	do {
		printf("%d\n", i);
		i++;
	}
	while(i <= n);
		
	return 0;
}