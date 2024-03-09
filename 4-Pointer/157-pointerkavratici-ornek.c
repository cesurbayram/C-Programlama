#include<stdio.h>
#include<stdlib.h>

/*
    Bu kod, verilen adımları sırasıyla gerçekleştirir. Ancak, bazı adımlar mantıklı olmayabilir veya hatalı olabilir. 
    Örneğin, y = (short)p1; satırı, bir pointer'ı short bir değişkenine doğrudan atamak hatalı bir kullanımdır ve genellikle tip uyumsuzluğuna neden olur. 
    Aynı şekilde, p2 = (short*)12; satırı da genellikle hatalıdır çünkü bellekte belirli bir adrese doğrudan işaret etmek pek önerilmez.
    Adimlar:
    
    short x,y, *p1,*p2;
    x=4;
    p1=&x;
    y=*p1;
    p2=&y;
    (*p1)++;
    y=p1;
    y++;
    p2=12;
    p1=y;
    */
int main() {
    // Değişkenleri tanımla
    short x, y, *p1, *p2;

    // x'e 4 değerini ata
    x = 4;

    // p1'i x'in adresine işaret ettir
    p1 = &x;

    // y'ye p1'in işaret ettiği değeri ata (y = x)
    y = *p1;

    // p2'yi y'nin adresine işaret ettir
    p2 = &y;

    // p1'in işaret ettiği değeri 1 arttır (x++)
    (*p1)++;

    // y'yi p1'in değeri ile değiştir (y = p1)
    y = (short)p1;

    // y'yi 1 arttır (y++)
    y++;

    // p2'yi 12 değerine işaret ettir
    p2 = (short*)12;

    // p1'i y'nin değerine işaret ettir (p1 = y)
    p1 = (short*)y;

    return 0;
}