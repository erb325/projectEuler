//
//  problem3.c
//  
//
//  Created by Ember Baker on 8/7/15.
//
//
/*project 3
 The prime factors of 13195 are 5, 7, 13 and 29.
 
 What is the largest prime factor of the number 600851475143 */

#include <stdio.h>
int main(){
    long int num = 600851475143;
    for (int i = 2; i< num; i++){
        while (num%i == 0) {
            num /= i;
        }
        if (num ==1) {
            break;
        }
    }
    printf("%li \n", num);
    return 0;
}