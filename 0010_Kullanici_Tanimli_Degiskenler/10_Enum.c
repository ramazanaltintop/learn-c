/* Enumerated Type - Numaralandirilmis Tipler */

/*
Egitim seviyesi, Iller, Kan Grubu gibi sadece belirli degerler alabilen
bir listeden secilmis degerler haricinde baska deger alamayan degiskenlerimiz
olabilir. Bilgisayar programlarinda veritabanlarina yazarken, okurken ve
bu degiskenleri hafizada tutarken bazen sadece tanimli degerleri alabilen
degiskenler tanimlamamiz gerekiyor. Enum'i da bu amacla kullaniyoruz.
*/

#include <stdio.h>

enum Seviyeler {
	DUSUK = 14,
	ORTA = 20,
	YUKSEK = 26
};

int main()
{
	// Numaralandirilmis tipte bir degisken tanimla ve deger ata
	enum Seviyeler OdaSicakligi = YUKSEK;
	
	// Numaralandirilmis tipteki degiskeni yazdir
	printf("%d", OdaSicakligi);
	
	return 0;
}