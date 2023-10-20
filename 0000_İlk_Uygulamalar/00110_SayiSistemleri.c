/* Farkli Sayi Sistemlerinde Deger Atama */

#include <stdio.h>

int main ()
{
    int a = 35; // 10'luk sayi duzeninde (decimal)
    int b = 0b00100011; // 2'lik sayi duzeninde (binary)
    int c = 0x23; // 16'lık sayi duzeninde (hexadecimal)
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}