#include <stdio.h>
#include <stdlib.h>

// İki sayıyı yer değiştirmeyen fonksiyon
void yerdegistirnormal(int sayi1,int sayi2)
{
    int gecici;
    gecici=sayi1;
    sayi1 = sayi2;
    sayi2 = gecici;
    /// Fonksiyon, sayi1 ve sayi2'nin değerini yer değiştirir, ancak bu değişiklik main fonksiyonu etkilemez.
    // Çünkü burada sadece değerlerin kopyaları üzerinde işlem yapılır.
/*
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);*/
}

void yerdegistir(int *sayi1,int *sayi2)
{
    int gecici;
    gecici=*sayi1;
    *sayi1 = *sayi2;
    *sayi2 = gecici;
/*
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",*sayi1);
    printf("Ikinci sayim = %d\n",*sayi2);*/
}


int main()
{
    //Pointer kullanarak iki sayıyının yerini değiştirip sayıları yerdeğiştirmeden önce
    //ve yerdeğiştirdikten sonra console a bastırınız

    int sayi1,sayi2;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Sayilarim yer degistirmeden once\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);

    //yerdegistir(&sayi1,&sayi2);
    // Yer değiştirmeyen fonksiyon çağrılıyor
    yerdegistirnormal(sayi1,sayi2);
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);



    return 0;
}

/*
yerdegistirnormal fonksiyonu, değerleri sadece kendi kapsamında değiştirir ve ana fonksiyonu etkilemez.
yerdegistir fonksiyonu ise pointerlar aracılığıyla sayıların gerçekten yer değiştirmesini sağlar. 
Bu nedenle, bu fonksiyonun çağrılmasıyla ana fonksiyonun değerleri değişir.
*/