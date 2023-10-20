/**
 * Cemberin capinin ve cevresinin,
 * ilgili Daire'nin alaninin hesaplanmasi
*/

#include <stdio.h>
#include <math.h> // M_PI sayisini kullanmak amaciyla

int main ()
{
    float yaricap, cap, cevre, alan;
    
    /**
     * Kullanicidan yaricap bilgisini al
    */
    printf("Cemberin/Dairenin yaricapını giriniz : ");
    scanf("%f", &yaricap);
    
    /**
     * Cap, cevre ve alan degerlerini hesapla
    */
    cap = 2 * yaricap;
    cevre = 2 * M_PI * yaricap;
    alan = M_PI * (yaricap * yaricap);
    
    /**
     * Tum sonucları yazdir
    */
    printf("Cemberin capi = %.2f birimdir.\n", cap);
    printf("Cemberin cevresi = %.2f birimdir.\n", cevre);
    printf("Cemberin alani = %.2f birim karedir.", alan);
    
    return 0;
}