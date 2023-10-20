/**
 * Çemberin çapının ve çevresinin,
 * ilgili Daire'nin alanının hesaplanması
*/

#include <stdio.h>

int main ()
{
    float yaricap, cap, cevre, alan;
    
    /**
     * Kullanıcıdan yarıçap bilgisini al
    */
    printf("Çemberin/Dairenin yarıçapını giriniz : ");
    scanf("%f", &yaricap);
    
    /**
     * Çap, çevre ve alan değerlerini hesapla
    */
    cap = 2 * yaricap;
    cevre = 2 * 3.14 * yaricap;
    alan = 3.14 * (yaricap * yaricap);
    
    /**
     * Tüm sonuçları yazdır
    */
    printf("Çemberin çapı = %.2f birimdir.\n", cap);
    printf("Çemberin çevresi = %.2f birimdir.\n", cevre);
    printf("Çemberin alanı = %.2f birim karedir.", alan);
    
    return 0;
}


