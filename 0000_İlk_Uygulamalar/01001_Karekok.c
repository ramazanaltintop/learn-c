/**
 * Karekök Hesabı
*/

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek için

int main ()
{
    double sayi, karekok;
    
    /* Kullanıcıdan sayı değerini al */
    printf("Karekökü hesaplanacak olan sayıyı giriniz: ");
    scanf("%lf", &sayi);
    
    /* Sayının karekökünü hesapla */
    karekok = sqrt(sayi);
    
    /* Sonucu yazdır */
    printf("%.2lf sayısının karekökü = %2.lf", sayi, karekok);
    
    return 0;
}


