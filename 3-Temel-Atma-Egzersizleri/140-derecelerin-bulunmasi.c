#include<stdio.h>
#include<stdlib.h>

float FdenCye(float f)
{
    return (5/9.0)*(f-32);  // Use 9.0 to ensure the division results in a float
}

float CdenFye(float c)
{
    return (1.8*c)+32;
}

int main()
{
    float f, c, secim;
    
    printf("1 Fahrenheit => Celsius\n");
    printf("2 Celsius => Fahrenheit\n");
    
    scanf("%f", &secim);

    if (secim == 1)
    {
        printf("Please enter the Fahrenheit value: ");
        scanf("%f", &f);
        printf("%f F = %f C\n", f, FdenCye(f));
    }
    else if (secim == 2)
    {
        printf("Please enter the Celsius value: ");
        scanf("%f", &c);
        printf("%f C = %f F\n", c, CdenFye(c));
    }
    else
    {
       printf("Invalid choice\n"); 
    }

    return 0;  // The main function should return an integer
}
