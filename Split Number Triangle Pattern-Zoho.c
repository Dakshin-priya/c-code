#include <stdio.h>

int main() {
    int n = 5; // number of rows
    int left = 1;
    int right = n * (n + 1); // total numbers to print

    for (int i = 0; i < n; i++) {
        int count = n - i;

        // Print leading spaces
        for (int s = 0; s < i; s++) {
            printf("  ");
        }

        // Print left part
        for (int j = 0; j < count; j++) {
            printf("%2d ", left++);
        }

        // Calculate starting point for right part
        int temp = right - count + 1;

        // Print right part
        for (int j = 0; j < count; j++) {
            printf("%2d ", temp++);
        }

        // Update right pointer
        right -= count;

        printf("\n");
    }

    return 0;
}

/*
 1  2  3  4  5 26 27 28 29 30 
   6  7  8  9 22 23 24 25 
     10 11 12 19 20 21 
       13 14 17 18 
         15 16 
*/
