#include <stdio.h>

int main() {
    int num1, num2, num3, num4, min;

    // Get input from user
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the minimum number
    if (num1 < num2) {
        if (num1 < num3) {
            if (num1 < num4) {
                min = num1;
            } else {
                min = num4;
            }
        } else {
            if (num3 < num4) {
                min = num3;
            } else {
                min = num4;
            }
        }
    } else {
        if (num2 < num3) {
            if (num2 < num4) {
                min = num2;
            } else {
                min = num4;
            }
        } else {
            if (num3 < num4) {
                min = num3;
            } else {
                min = num4;
            }
        }
    }

    // Print the minimum number
    printf("The minimum number is: %d\n", min);

 
}
