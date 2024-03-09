#include<stdio.h>
#include<stdlib.h>
#define circleArea(r) (PI*r*r)
#define PI 3.14


int main()
{
    printf("File :%s\n", __FILE__);
    printf("File :%s\n", __DATE__);
    printf("File :%s\n", __TIME__);
    printf("File :%s\n", __LINE__);
    printf("File :%s\n", __STDC__);
    return 0;
}