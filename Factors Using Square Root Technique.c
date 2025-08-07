#include <stdio.h>
#include <math.h>

void printFactors(int n) {
    printf("Factors of %d are:\n", n);
    // First print all smaller divisors and their pair
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i) {
                printf("%d ", n / i); // print the paired factor only if it's different
            }
        }
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printFactors(num);
    }

    return 0;
}
