//
// Created by Shihab Rahman on 4/11/17.
//
//https://www.hackerrank.com/challenges/birthday-cake-candles


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int get_heighest_candles_count(int *height, int n) {
    int counter=0;
    int max = height[0];
    for (int i = 1; i < n; i++) {
        if(max <= height[i]) max = height[i];
    }

    for(int i=0;i< n ;i++){
        if(height[i] == max) counter++;
    }
    return counter;
}

int main() {
    int n;
    scanf("%d", &n);
    int *height = (int *) malloc(sizeof(int) * n);
    for (int height_i = 0; height_i < n; height_i++) {
        scanf("%d", &height[height_i]);
    }
    printf("%d", get_heighest_candles_count(height,n));
    return 0;
}
