#include<stdio.h>
#include<stdlib.h>

int cesur(int n)
{
    if (n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int man(int n)
{
    if ( n %3==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{

    int n;
    printf("bir sayi giriniz!\n");
    scanf("%d",&n);
    if (cesur(n)==1)
    {
        printf("Sayimiz cift sayidir\n");
    }
    if (man(n)==1)
    {
        printf("sayimiz 3 ile tam bolunur");
    }
    if (cesur(n)==1 && man(n)==1)
    {
        printf("Sayimiz 6 ile tam bolunur");
    }
    
    return 0; 
}