#include <stdio.h>

int main() {
    int rows, columns;
    char operator;
    // Take number of rows and columns as input from the user
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int A[rows][columns], B[rows][columns], C[rows][columns];
    // Take elements of first matrix as input
    printf("Enter the elements of matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // Take elements of second matrix as input
    printf("Enter the elements of matrix B:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // Input the operator
    printf("Enter operator: ");
    scanf(" %c", &operator);
    if(operator == '+') {
        // Addition of matrices
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else if(operator == '-') {
        // Subtraction of matrices
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                C[i][j] = A[i][j] - B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else if(operator == '*') {
        // Multiplication of matrices
        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                C[i][j] = 0;
                for(int k = 0; k < columns; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else if(operator == '/') {
        // Division of matrices
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns; j++) {
                if (B[i][j] != 0) {
                    C[i][j] = A[i][j] / B[i][j];
                    printf("%d ", C[i][j]);
                } 
                else {
                    printf("Division by zero error.");
                    return 0;
                }
            }
            printf("\n");
        }
    } 
    else {
        printf("Invalid operator");
    }
    return 0;
}

