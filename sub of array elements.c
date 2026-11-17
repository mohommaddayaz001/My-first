#include <stdio.h>

int main() {
    // Changed variable name 'sum' to 'diff' for clarity
    int a[2][2], b[2][2], diff[2][2], i, j;

    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<2; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nElements of 1st matrix:\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<2; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nElements of 2nd matrix:\n");
    for(i=0; i<2; ++i) {
        for(j=0; j<2; ++j) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // FIX 1 & 2: Calculate the subtraction and store it in 'diff'
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            diff[i][j] = a[i][j] - b[i][j]; // Changed + to -
        }
    }

    // FIX 3: Print the result matrix using 'diff'
    printf("\nSubtraction result=\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
