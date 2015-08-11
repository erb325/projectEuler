//
//  problem6.c
//  
//
//  Created by Ember Baker on 8/11/15.
//
//
//The sum of the squares of the first ten natural numbers is,
//
//1^2 + 2^2 + ... + 10^2 = 385
//The square of the sum of the first ten natural numbers is,
//
//(1 + 2 + ... + 10)^2 = 55^2 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int main(){
    int count=1;
    int sum = 0;
    int sumSquared = 0;

    for (count = 1; count<= 100; count++) {
        sum += count*count;
        sumSquared += count;
    }
    sumSquared = sumSquared*sumSquared;
    printf("Difference is: %i \n", sumSquared - sum);
    return 0;
}
