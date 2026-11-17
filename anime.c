#include <stdio.h>
#include <unistd.h>

int main() {
    int i;

    for (i = 0; i < 40; i++) {
        printf("\r%*s🚀", i, "");
        fflush(stdout);
        usleep(100000);  // 0.1 seconds
    }

    printf("\n");
    return 0;
}
