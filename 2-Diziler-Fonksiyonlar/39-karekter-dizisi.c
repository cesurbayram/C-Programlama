#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cesur[]={'b','a','y','r','a','m','\0'};

    char dizim[]="cesur";
    char kullanici[100];

        printf("%s\n",dizim);

        printf("lutfen bir karekter dizisini giriniz\n");
        scanf("%s",&kullanici);

        printf("\n");
        printf("%s",kullanici);

    return 0;
}