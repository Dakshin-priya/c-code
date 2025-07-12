#include <stdio.h>

/* 
Left‑aligned star triangle:
* 
* * 
* * * 
* * * * 
* * * * * 
 */
void leftStar(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j)  printf("* ");
        printf("\n");
    }
}

/* 
Right‑aligned star triangle:
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

 */
void rightStar(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) printf("  ");
        for (int j = 1; j <= i;   ++j)   printf("* ");
        printf("\n");
    }
}

/* 
Full star pyramid:
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

 */
void pyramidStar(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) printf("  ");
        for (int j = 1; j <= 2*i - 1; ++j) printf("* ");
        printf("\n");
    }
}

/* 
Inverted left star triangle:
* * * * * 
* * * * 
* * * 
* * 
*

 */
void invertedLeftStar(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) printf("* ");
        printf("\n");
    }
}

/* 
Inverted star pyramid:
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        
 */
void invertedPyramidStar(int n) {
    for (int i = n; i >= 1; --i) {
        for (int s = 1; s <= n - i; ++s) printf("  ");
        for (int j = 1; j <= 2*i - 1; ++j) printf("* ");
        printf("\n");
    }
}

/* 
Floyd’s triangle:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

 */
void floyd(int n) {
    int num = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) printf("%d ", num++);
        printf("\n");
    }
}

/*
Pascal’s triangle:
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
   
 */
void pascal(int n) {
   for (int i = 0; i < n; ++i) {
        for (int s = 0; s < n - i - 1; ++s)
            printf("  ");  // Print leading spaces

        int val = 1;
        for (int j = 0; j <= i; ++j) {
            printf("%4d", val);  // Print the number in 4-char width
            val = val * (i - j) / (j + 1);
        }

        printf("\n");  // Use printf instead of putchar
    }
}

/* 
Hollow star pyramid:
        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 
 */
void hollowPyramidStar(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int s = 1; s <= n - i; ++s) printf("  ");
        for (int j = 1; j <= 2*i - 1; ++j) {
            if (j == 1 || j == 2*i - 1 || i == n) printf("* ");
            else                                  printf("  ");
        }
        printf("\n");
    }
}

/* ----------------- Driver / Demo ----------------- */
int main(void) {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nLeft‑aligned star triangle:\n");          leftStar(n);
    printf("\nRight‑aligned star triangle:\n");         rightStar(n);
    printf("\nFull star pyramid:\n");                   pyramidStar(n);
    printf("\nInverted left star triangle:\n");         invertedLeftStar(n);
    printf("\nInverted star pyramid:\n");               invertedPyramidStar(n);
    printf("\nFloyd’s triangle:\n");                    floyd(n);
    printf("\nPascal’s triangle:\n");                   pascal(n);
    printf("\nHollow star pyramid:\n");                 hollowPyramidStar(n);

    return 0;
}
