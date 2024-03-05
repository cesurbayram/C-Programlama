#include<stdio.h>
#include<stdlib.h>
#define MAX 40

void boy(char tab[MAX], int *cesur)
{
    int i;
    for ( i = 0; tab[i]!='\0' ; i++);
    *cesur=i;
    
}

void ortak_harf(char tab[MAX], char bayram[MAX], int *t)
{
    int i, j;
    int kelime1, kelime2;
    *t=0;

    boy(tab, &kelime1);
    boy(bayram, &kelime2);

    for ( i = 0; i < kelime1; i++)
    {
        for ( j = 0; j < kelime2; j++)
        {
            if (tab[i]==bayram[j])
            {
                *t=*t+1;
            }
            
        }
        
    }
    
}

int main()
{
    char cumle[MAX], tab[MAX];
    int i=0;
    int a;
    int r;
    printf("lutfen bir cumle ya da kelime giriniz\n");
    do
    {
        scanf("%c",&cumle[i]);
        i++;
    } while (cumle[i-1]!='\n');
    cumle[i-1]='\0';
    boy(cumle, &a);
    printf("Dizimizin boyu %d ",a);
    printf("lutfen iki kelime giriniz\n");
    scanf("%s %s",&cumle, &tab);
    ortak_harf(cumle,tab,&r);
    printf("%s ve %s %d kadar ortak karektere sahiptir\n", cumle, tab, r);
    
}