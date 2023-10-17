#include <stdio.h>

#define SUM_AB 20

void calculateMaxResult(int a, int b, int *maxValue, int *aMax, int *bMax) {
    int result = a * a * b;
    if (result > *maxValue) {
        *maxValue = result;
        *aMax = a;
        *bMax = b;
    }
}

int main() {
    int maxValue = 0;
    int aMax = 0;
    int bMax = 0;

    for (int i = 1; i <= SUM_AB / 2; i++) {
        int a = i;
        int b = SUM_AB - a;
        calculateMaxResult(a, b, &maxValue, &aMax, &bMax);
        calculateMaxResult(b, a, &maxValue, &bMax, &aMax);
    }

    printf("The maximum value of a^2 * b is %d when a is %d and b is %d", maxValue, aMax, bMax);
    return 0;
}
