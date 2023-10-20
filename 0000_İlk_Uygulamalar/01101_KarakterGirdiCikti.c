/**
 * Karakter girdi ve cikti islemlerinin
 * getchar() ve putchar()
 * fonksiyonları ile gerceklestirilmesi
*/

#include <stdio.h>

int main ()
{
    char ogrenci_notu;
    printf("Ogrenci notunu giriniz : ");
    
    /* getchar() komutu ile notu al ve ogrenci_notu degişkeninde sakla */
    ogrenci_notu = getchar();
    
    /* putchar() komutu ile notu çıktı olarak ver */
    putchar(ogrenci_notu);
    
    return 0;
}