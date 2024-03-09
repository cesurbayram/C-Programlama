#include <stdio.h>

int main() {
    int no1, no2;
    char op;

    printf("Lutfen iki tam sayi giriniz: ");
    scanf("%d%d", &no1, &no2);

    printf("Lutfen bir operator giriniz (+,-): ");
    scanf(" %c", &op);  // Added a space before %c to consume any leading whitespace.

    if (no2 == 0 && (op == '/' || op == '%')) {
        printf("Bolme veya mod islemi yapilamiyor, ikinci sayi 0 olamaz.\n");
    } else {
        switch (op) {
            case '+':
                printf("%d + %d = %d\n", no1, no2, no1 + no2);
                break;
            case '-':
                printf("%d - %d = %d\n", no1, no2, no1 - no2);
                break;
            case '*':
                printf("%d * %d = %d\n", no1, no2, no1 * no2);
                break;
            case '/':
                printf("%d / %d = %.2f\n", no1, no2, (float) no1 / no2);
                break;
            case '%':
                printf("%d %% %d = %d\n", no1, no2, no1 % no2);
                break;
            default:
                printf("Gecersiz operator\n");
                break;
        }
    }

    return 0;
}
