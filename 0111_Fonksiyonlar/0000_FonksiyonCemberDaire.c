/* Cemberin capinin ve cevresinin, ilgili dairenin alaninin
Fonksiyonlar yardimi ile hesaplanmasi */

#include <stdio.h> // Header Dosyalari
#include <math.h> // M_PI kullanimi icin

// Fonksiyon beyanlari (deklarasyonlari)
float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float DaireAlaniHesapla(float yaricap);

int main()
{
	float yaricap, cap, cevre, alan;
	
	/* Kullanicidan yaricap bilgisini al */
	printf("Cemberin/Dairenin yaricapini giriniz : ");
	scanf("%f", &yaricap);
	
	/* Cap, cevre ve alan degerlerini hesapla */
	cap = CemberCapiHesapla(yaricap);
	cevre = CemberCevresiHesapla(yaricap);
	alan = DaireAlaniHesapla(yaricap);
	
	/* Tum sonuclari yazdir */
	printf("Cemberin capi %.2f birimdir.\n", cap);
	printf("Cemberin cevresi %.2f birimdir.\n", cevre);
	printf("Dairenin alani %.2f birim karedir.", alan);
	
	return 0;
}

// Fonksiyon Tanimlari
/*
	Yaricapi verilen bir cemberin capini hesaplayan fonksiyon
*/
float CemberCapiHesapla(float yaricap) // Isimlendirmede emir kipi, fiil ve istisnai: soru kalibi > ornek DosyaVarMi()
{
	return (2 * yaricap);
}

/*
	Yaricapi verilen bir cemberin cevresini hesaplayan fonksiyon
*/
float CemberCevresiHesapla(float yaricap)
{
	return (2 * M_PI * yaricap);
}

/*
	Yaricapi verilen bir dairenin alanini hesaplayan fonksiyon
*/
float DaireAlaniHesapla(float yaricap)
{
	return (M_PI * yaricap * yaricap);
}