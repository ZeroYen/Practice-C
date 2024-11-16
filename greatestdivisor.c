#include <stdio.h>

int main() {
    int input1, input2, left;

    printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    while (input2 != 0) {
        left = input1 % input2;
        input1 = input2;
        input2 = left;
    }

    printf("Greatest common divisor: %d\n", input1);

    return 0;
}
