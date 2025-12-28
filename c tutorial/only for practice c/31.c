// write a program to multiply two 3 X 3 matrices
#include <stdio.h>
int main()
{
    int row, col, row1, col1;

    printf("\nEnter the number of rows and columns for matrix 1 : ");
    scanf("%d %d", &row, &col);

    printf("\nEnter the number of rows and columns for matrix 2 : ");
    scanf("%d %d", &row1, &col1);

    int matrix1[row][col];
    int matrix2[row1][col1];

    if (col!= row1)
    {
        printf("\nMatrix multiplication is not possible...");
        printf("\nMatrix order doesn't follow the condition of multiplication...");
        return 0;
    }

    printf("\nEnter the elements for matrix 1 : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element matrix1[%d][%d] : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("\nEnter the elements for matrix 2 : \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Enter element matri2[%d][%d] : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nEntered Matrix1 is : \n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nEntered Matrix2 is : \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int mulMatrix[row][col1], sum = 0;

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            for (int k = 0; k < row1; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            mulMatrix[i][j] = sum;
            sum = 0;
        }
    }

    printf("\nMultiplication matrix is : \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", mulMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}