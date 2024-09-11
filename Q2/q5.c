#include<stdio.h>

// User-defined function to check if a number is even
int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // Return 1 if the number is even
    } else {
        return 0; // Return 0 if the number is odd
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
