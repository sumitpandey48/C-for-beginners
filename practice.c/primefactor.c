#include <stdio.h>
#include <math.h>

void findPrimeFactors(int n) {
    printf("Prime factors of %d are: ", n);

    // First, remove all factors of 2
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // Now, check for odd factors
    for (int i = 3; i <=sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        findPrimeFactors(number);
    }

    return 0;
}
