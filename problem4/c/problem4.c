//
//  problem4.c
//  Problem 4
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit
//  numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
//
//  Created by Ember Baker on 8/11/15.
//
//

#include <stdio.h>

int isPalindrome(int number);

int main(){
    int num = 0;
    int largest = 0;
    for (int i = 999; i > 900; i-- ){
        for (int j = 999; j > 800; j--){
            num = i*j;
            if (isPalindrome(num) == 1 && largest < num) {
                largest = num;
                printf("%i \n", largest);
            }
        }
    }
    
    return 0;
}

int isPalindrome(int number){
    
    int original = number;
    int reversed = 0;
    
    while (original>0) {
        reversed *= 10;
        reversed += original%10;
        original /= 10;
    }
    
    if (reversed == number) {
        return 1;
    } else {
        return 0;
    }
    
}