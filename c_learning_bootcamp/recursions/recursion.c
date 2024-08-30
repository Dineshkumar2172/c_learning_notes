#include <stdio.h>
#include <stdlib.h>

int sumUpto(int num){
    if(num >= 1)
        return num + sumUpto(num-1);
    return 0;
}

// num = 5 => 5 + sumUpto(5-1) = 5 + 10 = 15
// num = 4 => 4 + sumUpto(4-1) = 4 + 6 = 10
// num = 3 => 3 + sumUpto(3-1) = 3 + 3 = 6
// num = 2 => 2 + sumUpto(2-1) = 2 + 1 = 3
// num = 1 => 1 + sumUpto(1-1) = 1 + 0 = 1
// num = 0 => condition doesn't match ==> return 0


int factorialUpto(int num){
    if(num >= 1)
        return num * factorialUpto(num-1);
    return 1;
}

// f(5) = 5 * factorialUpto(5-1) => 5 * 30 => 120
// f(4) = 5 * factorialUpto(4-1) => 5 * 6 => 30
// f(5) = 3 * factorialUpto(3-1) => 3 * 2 => 6
// f(2) = 2 * factorialUpto(2-1) => 2 * 1 => 2
// f(1) = 1 * factorialUpto(1-1) => 1 * 1 => 1
// f(0) ==> confition doesn't match ==> return 1

int fibonacciIndex(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    return fibonacciIndex(n-1)+fibonacciIndex(n-2);
}


int findSumDigit(int n){
    if(n <= 9)
        return n;
    return n%10 + findSumDigit(n/10);
}


int countDigits(int n){
    if(n <= 9)
        return 1;
    return 1 + countDigits(n/10);
}


int main(){
    // RECURSIONS
    /**
     * 1. What is recursion? Recursion is a concept, not a data structure or something else
     * 2. It is a new approch to solve problems.
     */

    // How to think about it?
    /**
     * Problem to sub problems
     * Can we solve the original problem by dividing and solving some smaller "Sub Problems"?
     *      - If we can, can we do it on regular?
     */

    // Recursion - dividing problems into sub problems and so on, until we reach a trivial condition.

    // example 1 - write a recursive function that
    // 1. receives a natural number (num)
    // 2. return the SUM of - "arithmetical progression from 1 to num"
    int num = 5;
    int sumFunctionResult = sumUpto(num);
    printf("the sum of arithmetical progression of a given number is %d\n", sumFunctionResult);


    // example 2 - write a recursive function that
    // 1. receives a natural number (num)
    // 2. returns the factorial of this number.
    // formula: Factorial (num) = 1*2*3....* (num-1) * num
    int factorialFunctionResult = factorialUpto(num);
    printf("the factorial of a given natural number is %d\n", factorialFunctionResult);

    // example 3 - write a recursive function that
    // 1. receives an "n" (INDEX)
    // 2. returns the value at INDEX "n"
    int fibonacciResult = fibonacciIndex(num);
    printf("the fibonacci of a given natural number is %d\n", fibonacciResult);

    // example 4 - write a recursive function that
    // 1. receives a number (num)
    // 1. return the sum of all digits.
    int sumOfDigitsResult = findSumDigit(12345);
    printf("the sum of digits of a given number is %d\n", sumOfDigitsResult);

    // example 5 - write a recursive function that
    // 1. receives a number (num)
    // 1. return the total digits in num.
    int totalDigits = countDigits(12345);
    printf("the number of digits in a given number is %d\n", totalDigits);


    return 0;
}
