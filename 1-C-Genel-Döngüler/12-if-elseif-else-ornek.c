#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 3 adet sayiyi alip bunlar arasında en büyük olanı bulacaz

    int a,b,c;

        printf("lutfen uc adet sayi giriniz\n");
        scanf("%d %d %d",&a,&b,&c);

        if (a>b && a>c);
        {
            printf("%d sayisi en buyuktur\n",a);
        }
        if (b>a && b>c);
        {
            printf("%d sayisi en buyuktu3r\n",b);
        }
        if (c>a && c>b);
        {
            printf("%d sayisi en buyuktur\n",c);
        }
        if(a==b && a==c)
        {
            printf("hepsi birbirine esittir\n");
        }

        int x,y,z;
        printf("lutfen 3 sayi giriniz");
        scanf("%d %d %d",&x,&y,&z);

        if (x>y && x>z)
        {
            printf("%d sayisi en buyuktur\n",x);
        }
        else if (y>x && y>z)
        {
            printf("%d sayisi en buyuktu3r\n",y);
        }
        else if (z>x && z>y)
        {
            printf("%d sayisi en buyuktur\n",z);
        }
        else
        {
            printf("hepsi birbirine esittir\n");
        }


    return 0;

}