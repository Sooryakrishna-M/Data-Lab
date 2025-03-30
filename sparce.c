#include <stdio.h>

int main() {
    int row, col, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int arr[row][col]; 

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter the %dth row %dth column element: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                printf("%d %d %d\n", i, j, arr[i][j]);
            }
        }
    }

    return 0;
}