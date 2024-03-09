#include<stdio.h>
#include<stdlib.h>


void sayiiste()
{
    int sayi;
    while (1)
    {
        printf("lutfen bir sayi giriniz");
        scanf("%d",&sayi);
        if (sayi<0)
        {
            break;
        }
        
    }
    

}


int main()
{
    return 0;
}