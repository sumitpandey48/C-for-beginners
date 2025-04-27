#include <stdio.h>

float power(float base, int exponent) {
    float result = 1;
    int i;

    if (exponent > 0) {
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (i = 0; i < -exponent; i++) {
            result *= base;
        }
        result = 1 / result;
    } else {
        result = 1;
    }

    return result;
}

int main() {
    float base;
    int exponent;
    printf("base :");
    scanf("%f",& base);
    printf("exponent :");
    scanf("%d",& exponent);
    printf("%f^%d = %f\n", base, exponent, power(base, exponent));
    return 0;
}

                
    