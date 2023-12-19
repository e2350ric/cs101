#include <stdio.h>

int main() {
    for (int i = 1; i <= 9 * 9; ++i) {
        printf("%2d x %2d = %2d   ", (i - 1) / 9 + 1, (i - 1) % 9 + 1, i);
        
        if (i % 9 == 0) {
            printf("\n");
        }
    }

    return 0;
}
