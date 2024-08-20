#include <stdio.h>
#include <stdlib.h>


 // Function receives "height" and "width" and calculate and return the area.
 // using double for return type assuming return type could be either integer or float.
double findRectangleArea(double height, double width){
    return height*width; // returns areas of a rectangle
}


// Function receives a 2digit number from the user and find the max in 2 digits
// using int return type assuming digits are only gonna be integers and returns info also as integer.
int findMaxDigit(int inputDigit){
    // input is gonna be 2 digit integer: for input 35 --> maximum digit is gonna be 5
    int firstDigit, secondDigit, maxDigit;
    firstDigit = (int)inputDigit/10; // since it's gonna be 2 digit number, dividing it by 10 and rounding it off to lowest integer gives the first digit.
    secondDigit = inputDigit - (firstDigit*10); // now subtracting the input number with 10*firstDigit gives second digit.

    // typical comparison logic to find which one if larger.
    if (firstDigit > secondDigit)
    // if firstDigit is larger, update maxDigit with firstDigit
        maxDigit = firstDigit;
    else
    // if secondDigit is larger, update maxDigit with secondDigit
        maxDigit = secondDigit;
    
    return maxDigit; // return the result
}


// Function receives a integer number as parameter and calculate factorial of the same
// using return type as int considering factorial is used on whole numbers.
int calculateFactorial(int inputNumber){

    // factorial cannot be performed on top of negative numbers
    // hence keeping a check to return -1 if input number of less than 0
    if (inputNumber < 0)
        return -1;

    // inputNumber is gonna be integer number for which we have to calculate factorial.
    // for example: factorial of 5 ==> f(5) = 1 + 2 + 3 + 4 + 5 = 15.
    int factorial = 0;
    // loop starts from 1 and the logic inside it gets executed for 15 times.
    for (int i = 1; i <= inputNumber; i++){
        factorial += i; // factorial gets increased during each iteration with value of i.
    }

    return factorial; // return the factorial of given number
}


// Function receives an integer from the user and check if the given integer is even
// should return 1 of the given integer is even, and return 0 if the given integer is odd
int isEven(int inputNumber){
    if (inputNumber%2 == 0)
        return 1;
    return 0;
}


// Function receives an integer from the user and check if the given integer is odd
// should return 1 of the given integer is odd, and return 0 if the given integer is even
int isOdd(int inputNumber){
    if (inputNumber%2 == 0)
        return 0;
    return 1;
}


int main() {

    // CHALLENGE1: Calculate area of a given rectangle.
    float height, width, rectangleArea;
    printf("enter the height and width of the rectangle to calculate its area : "); scanf("%f%f", &height, &width);
    rectangleArea = findRectangleArea(height, width);
    printf("area of the given rectangle is : %lf\n", rectangleArea);


    // CHALLENGE2: Maximum DIGIT in a 2-digits number
    int inputDigit, maxDigit;
    // implementing/integrating a condition to make sure input number has two digits using do while loop.
    do
    {
        // we should keep on prompting user to give valid input if the give integer with less than or greater than 2 digits
        printf("enter the two digit integer to find max of two digits : "); scanf("%d", &inputDigit);
    } while (( inputDigit < 10) || (inputDigit >= 100));
    maxDigit = findMaxDigit(inputDigit);
    printf("max digit from input two digits are : %d\n", maxDigit);


    // CHALLENGE 3: Calculate factorial of a given number
    int inputNumber, factorialNumber;
    printf("enter the number to calculate factorial for : "); scanf("%d", &inputNumber);
    factorialNumber = calculateFactorial(inputNumber);
    printf("factorial of %d is : %d\n", inputNumber, factorialNumber);


    // CHALLENGE3: Write a function to check if a given number is even
    int inputEvenNumber, isInputEven;
    printf("enter the number to check if it's even : "); scanf("%d", &inputEvenNumber);
    isInputEven = isEven(inputEvenNumber);
    if (isInputEven == 1)
        printf("The given number is even\n");
    else
        printf("The given number is not even\n");


    // CHALLENGE4: Write a function to check if a given number is odd
    int inputOddNumber, isInputOdd;
    printf("enter the number to check if it's odd : "); scanf("%d", &inputOddNumber);
    isInputOdd = isOdd(inputOddNumber);
    if (isInputOdd == 1)
        printf("The given number is odd\n");
    else
        printf("The given number is not odd\n");

    
    return 0;
}
