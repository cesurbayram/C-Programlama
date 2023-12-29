#include <stdio.h>
#include <stdlib.h>

int main ()
{

    float yas;

        printf("lutfen yasinizi giriniz\n");
        scanf("%f",&yas);

        if(yas>=18)
        {
            printf("oy kullanabilirsizini");

        }
        
        else{
            printf("oy kullanamazsiniz");
        }
    return 0;
}