// Program 2: This program calculates the sum of the digits of a four-digit number.
#include <stdio.h>

int main() {
    int number, d1, d2, d3, d4, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    d1 = number % 10;          // last digit
    d2 = (number / 10) % 10;   // second last digit
    d3 = (number / 100) % 10;  // third last digit
    d4 = (number / 1000) % 10; // fourth last digit (thousands place)

    sum = d1 + d2 + d3 + d4;

    printf("Sum of digits of %d is %d\n", number, sum);

    printf("Program 2 done\n");

    return 0;
}