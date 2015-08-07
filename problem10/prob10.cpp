//
//  prob10.cpp
//  
//
//  Created by Ember Baker on 8/7/15.
//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

//142913828922

#include <stdio.h>
#include<iostream>

using namespace std;

int main()

{
    
    unsigned long i = 9, flag = 0;
    
    unsigned long sum = 17;
    
    do{ i=i+2;
        
        for ( int c=2; c<i; c++){
            if ( i%c == 0){
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
        if (flag == 0){
            sum=sum+i;
        }
    } while(i<2000000);
    
    cout<<"sum of prime numbers till 2 million is: "<<sum;
    return 0;
}
