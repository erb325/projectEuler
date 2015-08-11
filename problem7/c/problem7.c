//
//  problem7.c
//  
//
//  Created by Ember Baker on 8/11/15.
//
//
/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 
 What is the 10 001st prime number?*/

#include <stdio.h>

int main(){
    int num = 13, prime = 0, count = 6;
    int flag = 1;
    
    while (count <= 10001){
        for (int i = 3; i < (num/2); i++) {
            if(num%i == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            prime = num;
            count ++;
        }
        flag =1;
        num +=2;
    }
    printf("10001 Prime is: %i \n", prime);
    return 0;
}