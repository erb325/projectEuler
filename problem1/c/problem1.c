//
//  problem1.c
//
//  Created by Ember Baker on 8/7/15.
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
// gcc problem1.c -o prob1
//./prob1

#include "stdio.h"

int main(){
    int count = 0;
    int  sum = 0;
    while (count<1000){
        if (count%3 == 0 || count%5 == 0){
            sum = sum+count;
        }
        count++;
    }
    
    printf("%i \n",sum);
    return 0;
}
