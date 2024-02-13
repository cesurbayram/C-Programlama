#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ucgeninalani(int A, int B, int C)
{
    float u, alan;
    u = (A + B + C) / 2.0; // Use 2.0 to ensure floating-point division
    alan = sqrt(u * (u - A) * (u - B) * (u - C));
    return alan;
}

int main()
{
    int a, b, c;
    printf("Üç kenar uzunluğunu giriniz: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Eşkenar üçgenin alanı = %.2f", ucgeninalani(a, b, c));

    return 0;
}
