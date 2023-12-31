#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


        char bos[100];

        strcpy(bos,"benim");//once bos yerine benim karel-kterini atatık sonr abirlestirdik
        strcat(bos," adim");
        strcat(bos,"cesur bayram");

        printf("%s",bos);
        

    return 0;
}