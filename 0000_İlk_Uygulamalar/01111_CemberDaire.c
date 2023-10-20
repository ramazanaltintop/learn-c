/**
 * Cemberin capının ve çevresinin,
 * ilgili Daire'nin alaninin hesaplanmasi
*/

#include <stdio.h>

int main ()
{
    float yaricap, cap, cevre, alan;
    
    /**
     * Kullanicidan yaricap bilgisini al
    */
    printf("Cemberin/Dairenin yaricapini giriniz : ");
    scanf("%f", &yaricap);
    
    /**
     * Cap, cevre ve alan degerlerini hesapla
    */
    cap = 2 * yaricap;
    cevre = 2 * 3.14 * yaricap;
    alan = 3.14 * (yaricap * yaricap);
    
    /**
     * Tum sonuclari yazdir
    */
    printf("Cemberin capi = %.2f birimdir.\n", cap);
    printf("Cemberin cevresi = %.2f birimdir.\n", cevre);
    printf("Cemberin alani = %.2f birim karedir.", alan);
    
    return 0;
}