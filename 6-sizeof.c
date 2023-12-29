#include <stdio.h>
#include <stdlib.h>

int main ()
{
     int cesur = 20;
     float sayim=4.64;
     double doublesayim= 4.56;
     char karakterim = 'h';

     printf("int hafizada %d byte kadar yer tutat\n",sizeof(int));
     printf("float hafizada %d byte kadar yer tutat\n",sizeof(float));
     printf("double hafizada %d byte kadar yer tutat\n",sizeof(double));
     printf("char hafizada %d byte kadar yer tutat\n",sizeof(char));

     /* or -------------------*/
    
    printf("cesur degiskeni hafizada %d byte kadar yertutar\n", sizeof(cesur));
    printf("char degiskeni hafizada %d byte kadar yertutar\n", sizeof(karakterim));
    printf("float degiskeni hafizada %d byte kadar yertutar\n", sizeof(sayim));
    printf("double degiskeni hafizada %d byte kadar yertutar\n", sizeof(doublesayim));

    return 0;
}