/* ++ Operatorunun Isleyisi */

#include <stdio.h>

int main ()
{
    int i;
    
    i = 0;
    printf("%d\n", i);
    printf("%d\n", i++); // once mevcut deger yazilacak, sonra deger arttirilacak
    printf("%d\n", i);
    printf("%d\n", ++i); // once deger arttirilacak, sonra yazdirma islemi yapilacak
    printf("%d\n", i);
    // 0 0 1 2
    return 0;
}