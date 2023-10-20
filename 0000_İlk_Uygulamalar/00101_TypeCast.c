/* Degisken Tipleri Arasinda Donusum Islemleri (typecasting)*/

#include <stdio.h>

int main ()
{
    int sayi1 = 17, sayi2 = 5;
    
    int tamsayi_bolme_sonucu;
    float gercel_bolme_sonucu_float;
    double gercel_bolme_sonucu_double;
    int gercel_bolme_sonucu_float_tamsayi;
    
    tamsayi_bolme_sonucu = sayi1 / sayi2;
    printf("Tamsayı Bölme Sonucu = %d\n", tamsayi_bolme_sonucu);
    
    gercel_bolme_sonucu_float = (float) sayi1 / sayi2;
    printf("Gerçek Bölme Sonucu (Float) = %.20f\n", gercel_bolme_sonucu_float);
    
    gercel_bolme_sonucu_double = (double) sayi1 / sayi2;
    printf("Gerçek Bölme Sonucu (Double) = %.20f\n", gercel_bolme_sonucu_double);
    
    gercel_bolme_sonucu_float_tamsayi = (int) gercel_bolme_sonucu_float;
    printf("Gerçek Bölme Sonucu (Float)'un Tamsayıya Dönüştürülmüş Hali = %d\n", gercel_bolme_sonucu_float_tamsayi);
    
    return 0;
}