//https://www.hackerrank.com/challenges/diagonal-difference
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int a_i = 0; a_i < n; a_i++) {
        for (int a_j = 0; a_j < n; a_j++) {
            scanf("%d", &a[a_i][a_j]);
        }
    }

    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) primary_diagonal = primary_diagonal + a[i][j];
            if (i == (n - j - 1)) secondary_diagonal = secondary_diagonal + a[i][j];
            else continue;
        }
    }

    printf("%d", abs(primary_diagonal - secondary_diagonal));
    return 0;
}
