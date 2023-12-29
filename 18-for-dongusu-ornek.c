#include <stdio.h>
#include <stdlib.h>
int main()
{
  /*0 dan 10 a kadar olan tek ve çift sayıları ayrı ayrı gösterimi*/

  int i;

        for ( i = 0; i <= 10; i +=2)
        {
            printf("%d\n",i);
        }
        
  int a;

        for ( a = 1; a <= 10; a +=2)
        {
            printf("%d\n",a);
        }
        
    return 0;
}
