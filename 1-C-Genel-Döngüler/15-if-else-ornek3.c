#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;

    printf("lutfen iki sayi giriniz\n");
    scanf("%d %d",&sayi1, &sayi2);

        if (sayi1 == sayi2)
        {
            printf("sonuc: %d=%d",sayi1,sayi2);
        }
        else if(sayi1>sayi2)
        {
            printf("sonuc:sayi1>sayi2");
        }
        else
        {
            printf("sonuc : %d  < %d", sayi1,sayi2);
        }

    float number1,number2;
      printf("lutfen iki sayi giriniz");
      scanf("%f %f", &number1,&number2);

        if(number1>number2)
        {
            if(number1==number2)
            {
                printf("sonuc : %d=%d",number1,number2);
            }
            else
            {
                printf("sonuc: %d>%d",number1,number2);
            }

        }
        else
        {
            printf("sonuc : %d<%d",number1,number2);
        }

    return 0;
}