#include <stdio.h>
#include <stdlib.h>

int  main ()
{

int ilksayim;
float ikincisayim;
char basharf;

printf("lutfen isminizin bas harfini giriniz");
scanf(" %c",&basharf);

printf("lutfen ilk sayiyi giriniz");
scanf(" %d",&ilksayim);

printf("lutfen ikinci sayiyi giriniz");
scanf(" %f",&ikincisayim);

printf("ilksayim:%d ikincisayim :%f  isminizin bas harfi %c", ilksayim,ikincisayim,basharf);

return 0;
}