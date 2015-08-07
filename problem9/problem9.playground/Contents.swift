import UIKit

/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
    
    a2 + b2 = c2
    For example, 32 + 42 = 9 + 16 = 25 = 52.
    
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.*/

var a = 1000
var b = 1000
var c = 1000
var sum = 0
for a = 330 ; a > 0; a-- {
    for b = 330; b > 0; b-- {
        for c = 330; c > 0; c-- {
           sum = a + b + c
            if sum == 1000 {
                if ((a*a) + (b*b) == (c*c)){
                    var product = a * b * c
                    print(product)
                }
                sum = 0
            } else {
                sum = 0
            }
        }
        sum = 0
    }
    
}
print("Done")
//31875000
