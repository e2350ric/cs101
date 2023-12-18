#include <stdio.h>

int main() {
    int terms = 1000000000;
    double pi = 0.0;

    for (int k = 0; k < terms; ++k) {
        pi += (k % 2 == 0 ? 1.0 : -1.0) * 4.0 / (2 * k + 1);
    }

    printf("%.5f\n",pi);

    return 0;
}