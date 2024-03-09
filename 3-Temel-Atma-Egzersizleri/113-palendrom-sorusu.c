#include<stdio.h>
#include<stdlib.h>
#define MAX 40

void cumleyi_oku(char tab[MAX])
{
    int i = 0;
    scanf("%c", &tab[i]);
    while ((tab[i] != '\n') && i < MAX)
    {
        i++;
        scanf("%c", &tab[i]);
    }
    tab[i] = '\0';
}

void boslugu_kaldir(char tab[MAX])
{
    int i, j = 0;
    for (i = 0; tab[i] != '\0'; i++)
    {
        if (tab[i] != ' ')
        {
            tab[j] = tab[i];
            j++;
        }
    }
    tab[j] = '\0';
    printf("Boslugu kaldirdiktan sonra dizimiz: ");
    for (i = 0; tab[i] != '\0'; i++)
    {
        printf("%c", tab[i]);
    }
    printf("\n");
}

int dizinin_boyu(char tab[MAX])
{
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}

void tersine_cevir(char cesur[MAX], char ters[MAX])
{
    int i;
    int j = dizinin_boyu(cesur) - 1;
    for (i = 0; cesur[i] != '\0'; i++)
    {
        ters[i] = cesur[j];
        j--;
    }
    ters[i] = '\0';
    printf("Dizinin tersine cevrilmis hali: ");
    for (i = 0; i < dizinin_boyu(ters); i++)
    {
        printf("%c", ters[i]);
    }
    printf("\n");
}

int palindrome(char dizi[MAX])
{
    int L;
    int i = 0;
    int test = 1; // Declare and initialize the test variable
    char gecici[MAX];
    boslugu_kaldir(dizi);
    L = dizinin_boyu(dizi);
    tersine_cevir(dizi, gecici);
    for (i = 0; i < L; i++)
    {
        if (gecici[i] != dizi[i])
        {
            test = 0;
        }
    }

    return test;
}

int main()
{
    char cumle[MAX];
    int a;
    printf("Lutfen bir cumle ya da bir kelime giriniz\n");
    cumleyi_oku(cumle);
    a = palindrome(cumle);
    if (a == 1)
    {
        printf("Bu bir palendromdur");
    }
    if (a == 0)
    {
        printf("bu bir palendrom degildir");
    }
    return 0;
}
