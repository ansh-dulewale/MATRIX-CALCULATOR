#include <stdio.h>
int main() {
	/*n = rows, m = columns*/
    int n, m;
    char opera; /*opera = operator*/
    /*Take row and column of the matrix as input from the user*/
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);
    /*Declare two array A and B and store the final value in C*/
	int A[n][m], B[n][m], C[n][m];
	/*Take elements of first array as input from the user*/
	printf("Enter the elements of matrix A:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    /*Take elements of second array as input from the user*/
    printf("Enter the elements of matrix B:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    /*Take the operator as input from the user*/
    printf("Enter operator: ");
    scanf("%c", &opera);
    /*Addition*/
	if(opera == '+') {
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
		}
	}
	/*Subtraction*/
	else if(opera == '-') {
    	for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    	}
	}
	/*Multiplication*/
	else if(opera == '*') {
	for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    	}
	}
	/*Division*/
	else if(opera == '/') {
		for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (B[i][j] != 0) {
                C[i][j] = A[i][j] / B[i][j];
            } 
	else {
                printf("Division by zero error.");
            }
            printf("%d ", C[i][j]);
        printf("\n");
    	}
	} 
	}
	else {
		printf("Invalid operator");
	}
	/*Print the final answer*/
	printf("Answer: "); 
	{
	for(int i=0;i<n;i++) {
	for(int j=0;j<m;j++) {
	printf("%d ",C[i][j]);
	}
	printf("\n");
	}
	}
}
