#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumlem[100];
    char *p1,*p2;
    int kontrol;



    printf("Lutfen maksimum 100 karakterli bir cumle giriniz\n");
    gets(cumlem);

    for(p2=cumlem;*p2;p2++);

    p2--;


    kontrol=1;
    for(p1=cumlem;kontrol && p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            kontrol=0;
        }
    }

    if(kontrol)
    {
        printf("Girilen %s bir palendomdur",cumlem);
    }
    else
    {
        printf("Girilen %s bir palendrom degildir",cumlem);
    }
    return 0;
}
 /*
 Bu C programı, kullanıcıdan alınan bir cümleyi palindrom (tersten okunuşu da aynı olan) olup olmadığını kontrol eden bir programdır. Programın çalışma mantığı şu adımları içerir:

char cumlem[100];: Maksimum 100 karakter uzunluğunda bir karakter dizisi (cumlem) tanımlanır.

char *p1, *p2;: İki adet karakter işaretçisi (p1 ve p2) tanımlanır.

int kontrol;: Bir kontrol değişkeni tanımlanır. Bu değişken, cümlenin palindrom olup olmadığını belirlemek için kullanılacaktır.

printf("Lutfen maksimum 100 karakterli bir cumle giriniz\n");: Kullanıcıdan bir cümle girmesi istenir.

gets(cumlem);: Kullanıcının girdiği cümle cumlem dizisine alınır. Bu noktada gets fonksiyonu kullanılmıştır ancak bu fonksiyon eski ve güvenli olmayan bir fonksiyondur. Güncel C standardında fgets kullanılması önerilir.

for(p2=cumlem; *p2; p2++);: İkinci bir işaretçi olan p2, cümlenin son karakterinin bir ötesine kadar (NULL karakterine kadar) ilerletilir. Bu sayede p2, cümlenin son karakterini gösterir.

p2--;: p2 işaretçisi bir geri alınarak, şu anda p2 işaretçisi cümlenin son karakterini gösterir.

kontrol=1;: kontrol değişkeni başlangıçta 1 (true) olarak ayarlanır. Bu değişken, cümlenin palindrom olup olmadığını kontrol etmek için kullanılacaktır.

for(p1=cumlem; kontrol && p1<p2; p1++, p2--): Bir döngü ile p1 baştan, p2 ise sondan ilerleyerek karşılıklı karakterleri karşılaştırır. Eğer bir çift karakter eşleşmezse, kontrol değişkeni 0 (false) olarak değiştirilir ve döngüden çıkılır.

if(kontrol): Eğer kontrol değişkeni hala 1 ise (true), cümle palindromdur ve ekrana "Girilen ... bir palendromdur" yazdırılır. Aksi takdirde, ekrana "Girilen ... bir palendrom değildir" yazdırılır.
 */