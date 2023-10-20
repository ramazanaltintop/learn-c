/**
 * Kuvvet, Üs Hesapları
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    double taban, kuvvet, sonuc;
    
    /* Kullanıcıdan iki sayı al */
    printf("Taban değerini giriniz: ");
    scanf("%lf", &taban);
    printf("Kuvvet değerini giriniz: ");
    scanf("%lf", &kuvvet);
    
    /* taban^kuvvet değerini hesapla */
    sonuc = pow(taban, kuvvet);
    
    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc);
    
    return 0;
}


