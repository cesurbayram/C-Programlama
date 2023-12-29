#include <stdio.h>
#include <stdio.h>

int main()
{
        int x= 55;
        int y= 43;


        if(x > y)
         {
            printf("x y den buyuk mudur\n");           
        }

        else{

            printf("x y den kucuktur ya da esittir\n");

        }
        
        int a;
        int b;

        printf("a sayisini giriniz\n");
        scanf("%d",&a);

        printf("b sayisini giriniz\n");
        scanf("%d",&b);
        if(a>b)
        {
            printf("a b  dem buyuk mu");
        }

        else if(a==b)
        {
            printf("a b  ye esit mi");
        }
        else
        {
          printf("a b den kucukdur");
        }
    return 0;
}