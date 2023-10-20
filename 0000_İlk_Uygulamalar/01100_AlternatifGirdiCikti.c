/**
 * Girdi ve cikti islemlerinin
 * scanf() ve print() fonksiyonlari
 * ile gerceklestirilmesi
 */

#include <stdio.h>

int main()
{
    int sayi1, sayi2, toplam;
    
    /* Kullaniciya mesaj yaz */
    printf("İki sayı giriniz: ");

    /* Iki degeri kullanicidan al */
    scanf("%d%d", &sayi1, &sayi2);

    /* Sayiları topla */
    toplam = sayi1 + sayi2;

    /* Toplami yazdir */
    printf("Toplam = %d", toplam);

    return 0;
}