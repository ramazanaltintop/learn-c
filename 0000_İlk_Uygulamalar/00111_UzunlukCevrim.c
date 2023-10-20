/**
 * Santimetre, metre ve kilometre
 * birim çevrimlerinin
 * C programlama dilinde yapılması
*/

#include <stdio.h>

int main ()
{
    float cm, metre, km;
    
    /* Uzunluğu cm cinsinden al */
    printf("Uzunluğu cm cinsinden giriniz: ");
    scanf("%f", &cm);
    
    /* Çevrim işlemlerini gerçekleştir */
    metre = cm / 100.0;
    km = cm / 100000.0;
    
    printf("Metre cinsinden uzunluk = %.2f m \n", metre);
    printf("Kilometre cinsinden uzunluk = %.2f km", km);
    
    return 0;
}


