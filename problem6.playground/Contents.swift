import UIKit
/*
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
var count = 1
var sum = 0
for count=1; count <= 100; count++ {
    sum += count * count
}
print(sum)
var sumsq = 0
for count = 1; count <= 100; count++ {
    sumsq += count
}
sumsq = sumsq * sumsq
print(sumsq)
print(sumsq - sum)
