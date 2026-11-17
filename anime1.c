#include <stdio.h>
#include <unistd.h>

int main() {
    int i, j;

    for (i = 0; i < 30; i++) {
        printf("\033[2J\033[H");  // Clear screen

        for (j = 0; j < i; j++)
            printf("\n");

        for (j = 0; j < 20; j++)
            printf(" ");

        printf("⚽");
        fflush(stdout);

        usleep(100000);
    }

    return 0;
}
