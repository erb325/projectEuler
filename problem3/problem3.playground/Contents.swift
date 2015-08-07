
import UIKit


/*project 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 */

var num = 600851475143
var count = 0
for count = 2; count < num; count++ {
    while num%count == 0{
        num = num/count
    }
    if num == 1 {
        break
    }
}
print(count)

