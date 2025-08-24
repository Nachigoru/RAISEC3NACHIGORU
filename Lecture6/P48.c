#include <stdio.h>

int main() {

    int A[3][3] = {
        {1, 0, -1},
        {-1, 2, 3},
        {2, 4, 5}
    };
    int matrixResult[3][3] = {0};
    int i;
    int j;

    printf("Original Matrix of A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                    matrixResult[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    printf("\nResult of A x A\n");
    for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%4d", matrixResult[i][j]);
            }
            printf("\n");
        }

    return 0;
}