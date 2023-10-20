/**
 * String (karakter dizisi)
 * Birleştirme, kopyalama ve karşılaştırma işlemleri
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dünya!";
    char metin3[20];
    
    // metin2'yi metin1'in ucuna ekle (sonuç metin1'de depolanır)
    strcat(metin1, metin2); // string concatenate (strcat)
    
    // metin1'i yazdır
    printf("%s", metin1);
    printf("\n...\n");
    
    // metin1 içeriğini metin3'e kopyalama string copy (strcpy) assignment
    strcpy(metin3, metin1);
    
    // metin3'ü yazdır
    printf("%s", metin3);
    printf("\n...\n");
    
    // Compare metin1 ve metin3'ü karşılaştır ve sonucu yazdır string compare (strcmp)
    /**
     * metin1 = "Merhaba Dünya!"
     * metin2 = "Dünya!"
     * metin3 = "Merhaba Dünya!"
    */
    // Bu fonksiyon iki karakter dizisi arasındaki farkı sayısal olarak döndürür.
    printf("%d\n", strcmp(metin1, metin3)); // (Eşit oldukları için) 0 döndürecek
    printf("\n...\n");
    printf("%d\n", strcmp(metin1, metin2)); // (Eşit olmadıkları için) 9 döndürecek
    printf("\n...\n");
    printf("%d\n", strcmp(metin2, metin1)); // (Eşit olmadıkları için) -9 döndürecek
    printf("\n...\n");
    
    return 0;
}