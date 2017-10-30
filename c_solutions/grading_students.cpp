//
// Created by Shihab Rahman on 3/27/17.
//

//https://www.hackerrank.com/challenges/grading

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int upgrade_grade(int original_grade){
    if(original_grade < 38 || original_grade % 5 <= 2) return original_grade;
    else return original_grade + (5-(original_grade % 5));
}

int main(){
    int n;
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        scanf("%d",&grade);
        printf("%d\n", upgrade_grade(grade));
    }
    return 0;
}


