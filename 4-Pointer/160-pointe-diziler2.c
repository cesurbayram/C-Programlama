#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[20]={'b','a','y','r','a','m','\0'};
    char *cesur;

    cesur=isim;

    printf("%c",*(cesur+1));


    return 0;
}
/*
Kodun ana kısmı şu şekildedir:

char isim[20] = {'b', 'a', 'y', 'r', 'a', 'm', '\0'};: isim adlı bir karakter dizisi oluşturulur ve "bayram" ismini içerir. Dizi 20 elemanlıdır, ancak sadece 6 eleman kullanılmıştır ve sona '\0' (NULL) karakteri eklenmiştir. 
Bu karakter dizisi bir C-string'i temsil eder.

char *cesur;: cesur adında bir karakter işaretçisi oluşturulur.

cesur = isim;: cesur işaretçisi, isim karakter dizisinin ilk elemanını gösterir. Yani, cesur artık "b" harfinin adresini tutmaktadır.

printf("%c", *(cesur + 1));: cesur işaretçisi aritmetik işlemle bir artırılarak, yani cesur + 1, ikinci elemana (yani "a" harfine) işaret eder. 
Ardından *(cesur + 1) ifadesi kullanılarak bu adresteki değer ekrana yazdırılır. Bu durumda çıktı "a" olacaktır.

Sonuç olarak, bu program "bayram" isimli karakter dizisinin ikinci elemanını (yani "a" harfini) ekrana yazdırmaktadır.
*/