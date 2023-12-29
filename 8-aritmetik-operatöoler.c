#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    aritmetik operatörler asağıdaki semboller ile gosterilir ;
    toplama --> +
    çıkarma --> -
    çarpma  --> *
    bölme   --> /
    kalan   --> %
    --------------

    arttırma --> ++
    azaltma  --> --

    */

   int x = 20;
   int y =5;
   int sonuc1,sonuc2,sonuc3, sonuc4, sonuc5;


    sonuc1 = x + y;
    sonuc2 = x - y;
    sonuc3 = x*y;
    sonuc4 = x/y;
    sonuc5 = x%y;
    printf(" sonuc1:%d\n sonuc2:%d\n sonuc3:%d\n sonuc4:%d\n sonuc5:%d\n",sonuc1,sonuc2,sonuc3,sonuc4,sonuc5);//tüm işlemleri 4 print yerine tek bir print ile yapabiliriz.

    printf("%d\n", ++x);
    printf("%d", --y);

 return 0;
}