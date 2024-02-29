#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int sayma[26] = {0}; // Corrected array initialization
    int CESUR, karekter, i;

    karekter = 0;
    printf("Lutfen bir metin girin ve Enter'a basin\n");
    while ((c = getchar()) != '\n')
    {
        CESUR = c - 'A'; // Assuming you want to count only uppercase letters
        if (CESUR >= 0 && CESUR < 26)
        {
            sayma[CESUR]++;
        }
        else
        {
            karekter++;
        }
    }
    printf("\nGirdiginiz metin %d karakter iceriyor:\n", karekter);

    for (i = 0; i < 26; i++)
    {
        printf("%d kez %c\n", sayma[i], 'A' + i); // Corrected character printing
    }

    return 0;
}
