//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

import UIKit

var num = 2
var prime = 0
var count = 6
var flag = true
var sum = 17

for num = 11; count <= 2000000; num += 2{
    for var i = 3; i < (num / 2); i++ {
        if num % i == 0 {
            flag = false
            break
        }
    }
    if flag {
        sum += num
    }
    flag = true
}

print(sum)