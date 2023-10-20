/**
 * Basit ve bileşik
 * faiz hesapları
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
    
    /* Girdileri al */
    printf("Ana para miktarını giriniz : ");
    scanf("%f", &ana_para);
    
    printf("Zamani giriniz: ");
    scanf("%f", &zaman);
    
    printf("Faiz oranini giriniz : ");
    scanf("%f", &faiz_orani);
    
    /* Basit faiz hesabi ile faiz miktarini hesapla */
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
    
    /* Basit faiz hesabinin sonucunu yazdır */
    printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f \n", basit_faiz_miktari);
    
    /* Bilesik faiz hesabi ile faiz miktarini hesapla */
    bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));
    
    /* Bilesik faiz hesabinin sonucunu yazdir */
    printf("Bilesik faiz hesabi ile hesaplanan faiz miktari = %f", bilesik_faiz_miktari);
    
    return 0;
}