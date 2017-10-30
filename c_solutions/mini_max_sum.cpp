//
// Created by Shihab Rahman on 3/24/17.
//
//https://www.hackerrank.com/challenges/mini-max-sum
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int min;
long long int max;

void calculate(long long int sum[]) {
    min = sum[0];
    max = sum[0];
    for (int i = 1; i < 5; i++) {
        if (sum[i] > max) {
            max = sum[i];
        }

        if (sum[i] < min) {
            min = sum[i];
        }
    }

}

int main() {
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
    long long int sum[5];
    sum[0] = b + c + d + e; //a
    sum[1] = a + c + d + e; //b
    sum[2] = a + b + c + e; //d
    sum[3] = a + b + c + d; //e
    sum[4] = a + b + d + e; //c
    calculate(sum);
    printf("%lld %lld", min, max);

    return 0;
}

