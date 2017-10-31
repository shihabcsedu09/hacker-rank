//https://www.hackerrank.com/challenges/plus-minus?h_r=next-challenge&h_v=zen
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

float positive_fraction_counter = 0;
float negative_fraction_counter = 0;
float zero_fraction_counter = 0;

float positive_fraction = 0.0f;
float negative_fraction = 0.0f;
float zero_fraction = 0.0f;


void calculate_fraction(int *numbers, int n) {
    for (int i = 0; i < n; i++) {
        if (numbers[i] > 0) positive_fraction_counter++;
        else if (numbers[i] < 0) negative_fraction_counter++;
        else zero_fraction_counter++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    calculate_fraction(numbers, n);
    positive_fraction = (positive_fraction_counter / n);
    negative_fraction = (negative_fraction_counter / n);
    zero_fraction = (zero_fraction_counter / n);

    printf("%f \n", positive_fraction);
    printf("%f \n", negative_fraction);
    printf("%f \n", zero_fraction);

    return 0;
}


