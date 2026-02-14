#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int mat1[10][10], mat2[10][10], mat3[10][10];
    int i, j, k;
    int sum = 0;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix Multiplication
    for (i = 0; i < rows1; i++) {
        for (k = 0; k < cols2; k++) {
            sum = 0;
            for (j = 0; j < cols1; j++) {
                sum = sum + mat1[i][j] * mat2[j][k];
            }
            mat3[i][k] = sum;
        }
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
