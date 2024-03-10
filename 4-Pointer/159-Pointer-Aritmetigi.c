#include<stdio.h>
#define MAX_SİZE 100


int main()
{
    int arr[] ={10,20,30,40,50};
    int *ptr;

    ptr=arr;
    ptr++;

    printf("%d",ptr);

    return 0;
}

/*
İlk olarak, ptr adlı bir işaretçi oluşturuluyor ve bu işaretçi, arr adlı bir diziye atanıyor. Daha sonra ptr işaretçisi bir arttırılıyor (ptr++). Ancak, burada bir hata var.
Hata: printf fonksiyonu kullanılarak ptr işaretçisi ekrana yazdırılmaya çalışılıyor, ancak %d format belirteci ile bir işaretçi değil, bir tamsayı beklenmektedir. 
Bu durumda, ptr işaretçisi doğrudan bir işaretçi adresini temsil ettiği için, %p format belirteci kullanılmalıdır.
*/