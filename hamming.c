#include <stdio.h>
#include <stdlib.h>

int find_hamming_weight(int data);

int main() {
    int data = 0;

    while(1) {
        printf("Please enter a number (Enter -1 to exit): ");
        scanf("%d", &data);

        if (data == -1) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Hamming Weight Value: %d\n\n", find_hamming_weight(data));
    }

    return 0;
}

int find_hamming_weight(int data) {
    int counter = 0, i = 0;

    for (i = 0; i < 31; i++) {
        if ((data >> i) % 2 == 1) {
            counter++;
        }
    }

    return counter;
}
