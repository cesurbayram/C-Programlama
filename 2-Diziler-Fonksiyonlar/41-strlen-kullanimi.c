#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[]="Aralik";
        printf("Karakter dizimizin boyu %d",strlen(can));
        printf("Karakter dizimizin boyu %d",sizeof(can));// \0 aldığı için 7 karekterli

    return 0;
}