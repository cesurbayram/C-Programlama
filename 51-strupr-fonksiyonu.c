#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


        char cesur[100];

        printf("lutfen bir text giriniz:");
        scanf("%s",&cesur);

        printf("girdiginiz ifade %s\n",cesur);
        printf("girdiginiz ifadenin kucuk harfe donusturulmus hali hali:%s\n",strupr(cesur));
        

    return 0;
}