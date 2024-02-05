#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[150];
    int kucukharf[26] = {0};
    int i = 0;
    int encok;
    char harf;

    printf("lutfen bir cumle giriniz\n");
    fgets(cumle, sizeof(cumle), stdin);

    while (cumle[i])
    {
        if (cumle[i] >= 'a' && cumle[i] <= 'z')
        {
            kucukharf[cumle[i] - 'a']++;
        }
        i++;
    }
    encok=kucukharf[0];
    for ( i = 1; i < 26; i++)
    {
        if (kucukharf[i] !=0)
        {
            if (kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
            
        }
        
    }
    printf("en fazla kullanilan harf");
    
    return 0;
}
