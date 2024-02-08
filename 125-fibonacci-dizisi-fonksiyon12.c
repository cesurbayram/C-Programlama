#include<stdio.h>
#include<stdlib.h>

void fibonacci(int n)
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    int i;
    printf("uretilecek fibonacci degerleri:\n");

    for ( i = 0; i < n; i++)
    {
        if (i<=i)
        {
            sonraki=i;
        }
        else
        {
            sonraki=ilk+ikinci;
            ilk=ikinci;
            ikinci=sonraki;
        }
        printf("%d",sonraki);
        
    }
    
}

int main()
{
    int sayi;
    printf("kac adet fibonacci sayisi uretilecek\n");
    scanf("%d",&sayi);
    fibonacci(sayi);
    return 0;
}