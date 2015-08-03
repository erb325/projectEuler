//: Playground - noun: a place where people can play

import UIKit
/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

var num = 2
var prime = 0
var count = 6
var flag = true

for num = 13; count <= 10001; num += 2{
    for var i = 3; i < (num / 2); i++ {
        if num % i == 0 {
            flag = false
            break
        }
    }
    if flag {
        print(num)
        prime = num
        count++
    }
    flag = true
}


print(prime)
//104743
