#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int i;
    int *pt;


    for(pt=t;pt<t+100;pt++)
    {
        *pt=0;
    }
    for(pt=t;pt<t+100;pt++)
    {
        printf("%d\n",*pt);
    }


    /*
    İlk olarak, işaretçi (pointer) kullanarak dizi elemanlarını sıfırlama işlemi yapılıyor. 
    İşaretçi, dizinin ilk elemanını gösteriyor ve bir döngü kullanılarak tüm elemanlar sıfırlanıyor.
    Daha sonra, aynı işaretçi kullanılarak dizinin elemanları ekrana yazdırılıyor.
    İkinci olarak, doğrudan dizi indisleri kullanılarak aynı işlem yapılmıştır. 
    Bir döngü kullanılarak dizinin elemanları sıfırlanmış ve ardından yine bir döngü ile ekrana yazdırılmış.
    İki yaklaşım da aynı sonucu üretir: 100 elemanlı bir dizi oluşturulur, tüm elemanları sıfırlanır ve ardından her eleman ekrana yazdırılır. 
    Ancak birinci yaklaşım, işaretçi kullanarak bu işlemleri gerçekleştirirken, ikinci yaklaşım doğrudan dizinin indislerini kullanarak işlemi gerçekleştirir.
    
    for(i=0;i<100;i++)
    {
        t[i]=0;
    }
    for(i=0;i<100;i++)
    {
       printf("%d\n",t[i]);
    }*/



    return 0;
}
