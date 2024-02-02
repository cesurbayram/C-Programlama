#include<stdio.h>
#include<stdlib.h>



int main()
{

    int a,b,h;
    int taban_alani=a*b;
    int yanal_alan=2*a*h+2*b*h;
    int toplam_alan=2*a*b+2*a*h+2*b*h;
    int hacim=a*b*h;


        printf("lutfen a,b,ve h degerleriniz giriniz");
        scanf("%d%d%d",&a,&b,&h);

        printf("taban alani =%d\n",a*b);
        printf("yanal alanlar toplamai=%d\n",2*a*h+2*b*h);
        printf("toplam alnim=%d\n",2*a*b+2*a*h+2*b*h);
        printf("hacmim=%d",a*b*h);

    return 0;
}