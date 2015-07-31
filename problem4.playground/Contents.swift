import UIKit

/* Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

extension Int {
    func isPalindrome() -> Bool {
        return self == self.reversed()
    }

    func reversed() -> Int {
        var original: Int = self
        var reversed: Int = 0

        while original > 0 {
            reversed *= 10
            reversed += original % 10
            original /= 10
        }

        return reversed
    }
}
var count = 0
var num = 0
var second = 0
var largest=0
for count = 999; count > 100; count-- {
    for second = 999; second > 100; second-- {
        num = count * second
        if num.isPalindrome() && num > largest {
           largest = num
            print(num)
        }
    }
}
