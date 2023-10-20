/**
 * Karekok Hesabi
*/

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek icin

int main ()
{
    double sayi, karekok;
    
    /* Kullanicidan sayi degerini al */
    printf("Karekökü hesaplanacak olan sayıyı giriniz: ");
    scanf("%lf", &sayi);
    
    /* Sayinin karekokunu hesapla */
    karekok = sqrt(sayi);
    
    /* Sonucu yazdir */
    printf("%.2lf sayısının karekökü = %2.lf", sayi, karekok);
    
    return 0;
}


