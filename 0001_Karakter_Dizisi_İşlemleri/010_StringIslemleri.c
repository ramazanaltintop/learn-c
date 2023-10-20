/**
 * String (karakter dizisi) islemleri
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(ingiliz_alfabesi)); // Sadece bizim gordugumuz karakterleri icerir.
    printf("\n...\n");
    printf("%d", sizeof(ingiliz_alfabesi)); // \0 karakterini de icerir. Hafizada gereken yer miktarı, boyut
    printf("\n...............\n");
    
    // Multi-character character = Ç, Ğ, İ, Ö, Ş, Ü 23 + (2 * 6) = 35
    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
    printf("%d", strlen(turk_alfabesi));
    printf("\n...\n");
    printf("%d", sizeof(turk_alfabesi));
    printf("\n...............\n");
    
    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(deneme));
    printf("\n...\n");
    printf("%d", sizeof(deneme));
    printf("\n...............\n");
    
    return 0;
}