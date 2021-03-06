
import UIKit

/* Project 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */
var sum = 0

struct FibonacciPair {
    var current: Int
    var previous: Int
    
    // using the name successor, since that's what Int
    // calls its next-in-sequence function
    func successor() -> FibonacciPair {
        return FibonacciPair(current: current + previous, previous: current)
    }
}

var generator = FibonacciPair(current: 1, previous: 1)

while generator.current < 4_000_000 {
    if generator.current % 2 == 0 {
        sum += generator.current
    }
    generator = generator.successor()
}

let answer = sum
