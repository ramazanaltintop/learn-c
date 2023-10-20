/* Struct */

#include <stdio.h>
#include <string.h>

// PersonelBilgisi isimli bir struct olustur
struct PersonelBilgisi {
	int Yas;
	float Maas;
	char Isim[30];
	char Cinsiyet[8];
};

int main() {
	// PersonelBilgisi yapisinda, Personel1 isimli degisken tanimla
	struct PersonelBilgisi Personel1;
	
	// Personel1'in alanlarina deger ata
	// Karakter dizilerini dogrudan atayamiyoruz.
	// Personel1.Isim = "Dursun Ahmet"; yazarsak hata aliriz
	strcpy(Personel1.Isim, "Dursun Ahmet");
	// Personel1.Cinsiyet = "Erkek"; yazarsak hata aliriz
	strcpy(Personel1.Cinsiyet, "Erkek");
	Personel1.Yas = 35;
	Personel1.Maas = 14000;
	
	// Personel1 struct'inin degerlerini yazdir
	printf("Personelin adi = %s\n", Personel1.Isim);
	printf("Personelin cinsiyeti = %s\n", Personel1.Cinsiyet);
	printf("Personelin yasi = %d\n", Personel1.Yas);
	printf("Personelin maasi = %lf\n", Personel1.Maas);
	printf("\n................\n");
	
	// Yeni bir personel tanimla (alternatif tanimlama yontemi)
	struct PersonelBilgisi Personel2 = {
		33, 15320, "Hamza", "Erkek"
	};
	
	// Personel2 struct'inin degerlerini yazdir
	printf("Personelin adi = %s\n", Personel2.Isim);
	printf("Personelin cinsiyeti = %s\n", Personel2.Cinsiyet);
	printf("Personelin yasi = %d\n", Personel2.Yas);
	printf("Personelin maasi = %lf\n", Personel2.Maas);
	printf("\n................\n");
	
	struct PersonelBilgisi Personel2Kopyasi;
	// Personel2'nin bilgilerini yeni bir yapiya kopyala
	Personel2Kopyasi = Personel2;
	// Personel2Kopyasi struct'inin degerlerini yazdir.
	printf("Personelin adi = %s\n", Personel2Kopyasi.Isim);
	printf("Personelin cinsiyeti = %s\n", Personel2Kopyasi.Cinsiyet);
	printf("Personelin yasi = %d\n", Personel2Kopyasi.Yas);
	printf("Personelin maasi = %lf\n", Personel2Kopyasi.Maas);
	
	return 0;
}