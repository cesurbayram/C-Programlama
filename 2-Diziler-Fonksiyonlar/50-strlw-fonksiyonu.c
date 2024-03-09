#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    //strev()

        char cesur[100];

        printf("lutfen bir text giriniz:");
        scanf("%s",&cesur);

        printf("girdiginiz ifade %s\n",cesur);
        printf("girdiginiz ifadenin kucuk harfe donusturulmus hali hali:%s\n",strlwr(cesur));
        
    return 0;
}