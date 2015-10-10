//
//  prob9.c
//  
//
//  Created by Ember Baker on 9/4/15.

/*
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *
 * a2 + b2 = c2
 * For example, 32 + 42 = 9 + 16 = 25 = 52.
 *
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.*/

#include <stdio.h>

int main (){
    int a = 1000, b = 1000, c  = 1000;
    int sum = 0, product = 0;
    
    for (a = 330 ; a > 0; a--) {
        for (b = 330; b > 0; b--) {
            for (c = 330; c > 0; c-- ){
                sum = a + b + c;
                if (sum == 1000) {
                    if ((a*a) + (b*b) == (c*c)){
                        product = a * b * c;
                        printf("Product: %i \n", product);

                    }
                    sum = 0;
                } else {
                    sum = 0;
                }
            }
            sum = 0;
        }
        
    }
    
    printf("Product at end: %i \n", product);
    
    return 0;
}