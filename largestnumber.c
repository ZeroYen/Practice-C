#include <stdio.h>

int main() {
    float number, largest = -1;

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number <= 0) {
            break; 
        }

        if (number > largest) {
            largest = number; 
        }
    }

    printf("The largest number entered was %.0f\n", largest);

    return 0;
}
