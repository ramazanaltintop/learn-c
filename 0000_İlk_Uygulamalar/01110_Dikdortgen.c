/**
 * Dikdörtgen alanının ve çevresinin
 * hesaplanması
*/

#include <stdio.h>

int main ()
{
    float boy, en, cevre, alan;
    
    /**
     * Uzunluk ve genişlik değerlerini kullanıcıdan al
    */
    printf("Dikdörtgen uzunluğunu giriniz : ");
    scanf("%f", &boy);
    
    printf("Dikdörgen genişliğini giriniz : ");
    scanf("%f", &en);
    
    /* Dikdörtgenin çevresini hesapla */
    cevre = 2 * (en + boy);
    
    /* Dikdörtgenin çevresini yazdır */
    printf("Dikdörtgenin çevresi = %f birimdir.\n", cevre);
    
    /* Dikdörtgen alanını hesapla */
    alan = en * boy;
    /* Dikdörtgenin alanını yazdır */
    printf("Dikdörtgenin alanı = %f birim karedir.", alan);
    
    return 0;
}


