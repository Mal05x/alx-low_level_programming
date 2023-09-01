#include <stdio.h>

void print_diagsums(int *a, int size) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < size; i++) {
        primaryDiagonalSum += *(a + i * size + i); // Accessing elements along the primary diagonal
        secondaryDiagonalSum += *(a + i * size + size - 1 - i); // Accessing elements along the secondary diagonal
    }

    printf("Primary Diagonal Sum: %d\n", primaryDiagonalSum);
    printf("Secondary Diagonal Sum: %d\n", secondaryDiagonalSum);
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3; // Size of the square matrix

    print_diagsums(&matrix[0][0], size);

    return 0;
}
