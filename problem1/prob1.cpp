//
//  prob1.cpp
//  
//
//  Created by Ember Baker on 8/7/15.
//g++ prob1.cpp
//./a.out
//

#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int  sum = 0;
    while (num<1000){
        if (num%3 == 0 || num%5 == 0){
            sum = sum+num;
        }
        num++;
    }
    
    cout << sum << "\n";
    return 0;
}