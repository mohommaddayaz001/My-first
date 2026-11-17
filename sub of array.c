#include<stdio.h>

void main() {
    int s[5], diff;

    printf("enter 5 values: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &s[i]);
    }
    diff = s[0];
    for(int i = 1; i < 5; i++) {
        diff = diff - s[i];
    }
    printf("difference = %d", diff);
}
