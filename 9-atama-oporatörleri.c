#include <stdio.h>
#include <stdlib.h>

int main()
{
            /*
            atama operatörleri şu şekilde gösteriyoruz
             = += -= *=  /=   %=
            
            */

    int a,b,c,d,e,f,g,h;
    a=5;
    b=10;
    c=15;
    d=20;
    e=25;
    f=30;
    g=35;
    h=40;


    a = a+3;
    b +=3;
    c = c*3;
    d *=3;
    e = e/5;
    f /=5;
    g =f%6;
    h %=6;

    printf("%d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h);
      
    return 0;
    }


    