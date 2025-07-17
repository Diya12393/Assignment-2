//9)Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements. 
#include <stdio.h>

int main() {
	int i,j;
int arr1D[5] = {10, 20, 30, 40, 50};
    printf("1D Array Elements:\n");
    for (i = 0; i < 5; i++) {
    printf("%d ", arr1D[i]);
    }

    int matrix[3][3];
    int sum = 0;

 printf("\n\nEnter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
     printf("Element [%d][%d]: ", i, j);
     scanf("%d", &matrix[i][j]);
     sum += matrix[i][j];
        }
    }

    printf("\nMatrix Elements:\n");
    for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
    printf("%d\t", matrix[i][j]);
        }
     printf("\n");
    }

  printf("\nSum of all elements in 3x3 matrix = %d\n", sum);

    return 0;
}
