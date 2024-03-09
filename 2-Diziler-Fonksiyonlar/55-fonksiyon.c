#include<stdio.h>
#include<stdlib.h>


void tekmiciftmi(int cesur)
{
    if (cesur %2==0)
    {
        printf("sayimiz cift sayidir");
    }
    else
    {
        printf("sayimiz tek sayidir");
    }


}


int main()
{
    int sayi;
    printf("lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    tekmiciftmi(sayi);
    return 0;
}