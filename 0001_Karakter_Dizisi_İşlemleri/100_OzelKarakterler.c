/**
 * Ozel Karakterler
*/

#include <stdio.h>

int main ()
{
    char metin1[] = "Merhaba\nDünya!"; // new line
    printf("%s\n", metin1);
    printf("\n...\n");
    
    char metin2[] = "Merhaba\tDünya!"; // tab
    printf("%s\n", metin2);
    printf("\n...\n");
    
    char metin3[] = {'M','e','r','h','a','b','a','\0'}; // \0 bitiris, sonlandirma
    printf("%s\n", metin3);
    printf("\n...\n");
    
    /**
     * C derleyicisine metnimizin içerisinde cift tırnak ya da 
     * tek tırnak vardir dememizin yolu kaçis dizisidir.
    */
    char metin4[] = "Ogretmen iceri girince sinifa \"Sessizlik\" coktu."; // \ Kaçis dizisi
    printf("%s\n", metin4);
    printf("\n...\n");
    
    char metin5[] = "Ramazan\'in telefonu hic susmuyordu.";
    printf("%s\n", metin5);
    printf("\n...\n");
    
    char metin6[] = "\\ karakteri ters taksim veya backslash olarak adlandirilir.";
    printf("%s\n", metin6);
    printf("\n...\n");
    
    return 0;
}