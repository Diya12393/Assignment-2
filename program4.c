//4)Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results. 
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
//Arithmatic operation
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d)\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

//Relational operation
    printf("%d == %d %d\n", num1, num2, num1 == num2);
    printf("%d != %d %d\n", num1, num2, num1 != num2);
    printf("%d > %d %d\n", num1, num2, num1 > num2);
    printf("%d < %d %d\n", num1, num2, num1 < num2);
    printf("%d >= %d %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d %d\n", num1, num2, num1 <= num2);

//logical operator
    printf("%d && %d  %d (Logical AND)\n", num1, num2, num1 &num2);
    printf("%d || %d  %d (Logical OR)\n", num1, num2, num1 || num2);
    printf("!%d  %d (Logical NOT)\n", num1, !num1);
}

