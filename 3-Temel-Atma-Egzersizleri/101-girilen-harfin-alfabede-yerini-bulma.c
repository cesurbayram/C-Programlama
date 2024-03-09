#include<stdio.h>
#include<stdlib.h>

int main() {
    char ch;
    int sira;

    printf("Bir tane karakter giriniz: ");
    scanf(" %c", &ch);  // Added a space before %c to consume any leading whitespace.

    if ((ch >= 'A') && (ch <= 'Z')) {
        sira = (int)ch - (int)'A' + 1;
        printf("%c : %d. harftir\n", ch, sira);
    } else if ((ch >= 'a') && (ch <= 'z')) {
        sira = (int)ch - (int)'a' + 1;
        printf("%c : %d. harftir\n", ch, sira);
    } else {
        printf("Lutfen harf giriniz. Boyle bir harf yoktur.\n");
    }

    return 0;
}
