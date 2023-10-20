/**
 * String (karakter dizisi)
 * Birlestirme, kopyalama ve karsilastirma islemleri
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dünya!";
    char metin3[20];
    
    // metin2'yi metin1'in ucuna ekle (sonuc metin1'de depolanır)
    strcat(metin1, metin2); // string concatenate (strcat)
    
    // metin1'i yazdır
    printf("%s", metin1);
    printf("\n...\n");
    
    // metin1 içerigini metin3'e kopyalama string copy (strcpy) assignment
    strcpy(metin3, metin1);
    
    // metin3'u yazdir
    printf("%s", metin3);
    printf("\n...\n");
    
    // Compare metin1 ve metin3'u karsilastir ve sonucu yazdir string compare (strcmp)
    /**
     * metin1 = "Merhaba Dunya!"
     * metin2 = "Dunya!"
     * metin3 = "Merhaba Dunya!"
    */
    // Bu fonksiyon iki karakter dizisi arasındaki farki sayisal olarak dondurur.
    printf("%d\n", strcmp(metin1, metin3)); // (Esit olduklari icin) 0 dondurecek
    printf("\n...\n");
    printf("%d\n", strcmp(metin1, metin2)); // (Esit olmadikları icin) 9 dondurecek
    printf("\n...\n");
    printf("%d\n", strcmp(metin2, metin1)); // (Esit olmadikları icin) -9 dondurecek
    printf("\n...\n");
    
    return 0;
}