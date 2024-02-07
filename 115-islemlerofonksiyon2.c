#include<stdio.h>
#include<stdlib.h>


float dortislem(float a, float b, char islem)
{
    if(islem == '+')
    {
        return a+b;
    }
    else if (islem == '-')
    {
        return a-b;
    }
    else if (islem == '*')
    {
        return a*b;
    }
    else if (islem == '/')
    {
        return a/b;
    }
    else
    {
        printf("yanlis operatar girdiniz");
    }

    

}




int main()
{

    int sayi1,sayi2;
    char islem;
    printf("lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("Hangi islemi yaptirmak istiyorsunuz(+ - / *)\n");
    scanf("%c",&islem);
    printf("islemin sonucu %.3f",dortislem(sayi1, sayi2, islem));
    
    return 0;
}