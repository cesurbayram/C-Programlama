#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    //strev()

        char cesur[100];

        printf("lutfen bir text giriniz:");
        scanf("%s",&cesur);

        printf("girdiginiz ifade %s\n",cesur);
        printf("girdiginiz ifadenin ters cevrilmis hali:%s\n",strrev(cesur));
        
    return 0;
}