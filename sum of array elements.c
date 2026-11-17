#include <stdio.h>

int main() {
    int a[2][2], b[2][2], sum[2][2], i, j;

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

    // FIX 1 & 2: Calculate the addition and store it in 'sum'
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // FIX 3: Corrected variable names and braces for printing
    printf("\naddition=\n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Prints a new line after each row is done
    }

    return 0;
}

