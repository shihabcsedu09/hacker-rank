//
// Created by Shihab Rahman on 3/15/17.
//

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
    int a = n-1;
    int b = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= a; j++) {
            printf(" ");
        }
        for (int k = 1; k <= b; k++) {
            printf("#");
        }
        a--;
        b++;
        printf("\n");
    }
    return 0;
}