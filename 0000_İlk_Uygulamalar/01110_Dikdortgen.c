/**
 * Dikdortgen alaninin ve cevresinin
 * hesaplanmasi
*/

#include <stdio.h>

int main ()
{
    float boy, en, cevre, alan;
    
    /**
     * Uzunluk ve genislik degerlerini kullanicidan al
    */
    printf("Dikdortgen uzunlugunu giriniz : ");
    scanf("%f", &boy);
    
    printf("Dikdortgen genisligini giriniz : ");
    scanf("%f", &en);
    
    /* Dikdortgenin cevresini hesapla */
    cevre = 2 * (en + boy);
    
    /* Dikdortgenin cevresini yazdir */
    printf("Dikdortgenin çevresi = %f birimdir.\n", cevre);
    
    /* Dikdortgen alanini hesapla */
    alan = en * boy;
    /* Dikdörtgenin alanini yazdir */
    printf("Dikdortgenin alani = %f birim karedir.", alan);
    
    return 0;
}


