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

    // CHALLENGE 3: 






    return 0;
}