#include <stdio.h>
#include <stdlib.h>

int main ()
{

   /*
   karşılaştırma operatörleri eğer sonuc doğru bir değerse 1 sonucunu
   eğer sonuç yanlış ise 0 değerini verir
  
    karsılaşrıma operatörleri şu şekildedir;

    ==   eşit mi
    !=   eşit değil mi
    >    büyük mü
    <    küçük mü
    >=   büyük eşit mi
    <=   küçük eşit mi
   */
     int x =25;
     int y =30;

     printf("%d\n", x == y);
     printf("%d\n",x!=y);
     printf("%d\n", x>y );
     printf("%d",x<y);

    return 0;
}