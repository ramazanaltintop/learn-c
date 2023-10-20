/* ++ Operatörünün İşleyişi */

#include <stdio.h>

int main ()
{
    int i;
    
    i = 0;
    printf("%d\n", i);
    printf("%d\n", i++); // önce mevcut değer yazılacak, sonra değer arttırılacak
    printf("%d\n", i);
    printf("%d\n", ++i); // önce değer arttırılacak, sonra yazdırma işlemi yapılacak
    printf("%d\n", i);
    // 0 0 1 2
    return 0;
}