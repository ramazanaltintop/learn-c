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
    
    printf("Zamanı giriniz: ");
    scanf("%f", &zaman);
    
    printf("Faiz oranını giriniz : ");
    scanf("%f", &faiz_orani);
    
    /* Basit faiz hesabı ile faiz miktarını hesapla */
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
    
    /* Basit faiz hesabının sonucunu yazdır */
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı = %f \n", basit_faiz_miktari);
    
    /* Bileşik faiz hesabı ile faiz miktarını hesapla */
    bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));
    
    /* Bileşik faiz hesabının sonucunu yazdır */
    printf("Bileşik faiz hesabı ile hesaplanan faiz miktarı = %f", bilesik_faiz_miktari);
    
    return 0;
}


