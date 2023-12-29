#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*
      logical peratorler;
      && --> ve / iki sonucunda doğru olması lazım
    
      || --> ve da / bir tane doğru olması yeterlidir
       
      ! ---> değil için bu işaret kullanılr
  */
      

      int x= 25;
      int y= 20;


     printf("%d\n",x>10 && x<20);
     printf("%d\n",x >10 || x<20);
     printf("%d", (x>10 || x<20));


    return 0;
}