#include <stdio.h>
#include <stdlib.h>

// note: unlike in other languages, any function that's gonna be used inside another function should be defined before the
// function where are gonna use it. If you are gonna use functionA inside main function, then functionA has to be defined before
// main function like I have done here, otherwise it'll throw exception.
void printGreetings(){
    // no paramters are provided, and nothing returned
    printf("Hello World!\n");
    printf("Welcome to my learning journey! Never settle for less and keep learning!!\n");
    printf("Seeya! Until next time... \n");
    return; // no need to return any value, since it's void and return nothing.
}


void printMaxInteger(int num1, int num2){
    // function gets two parameters/arguments, and nothing returned
    if (num1 > num2)
        printf("Num %d is greater than num %d\n", num1, num2);
    else
        printf("Num %d is greater than num %d\n", num2, num1);
    
    return; // no need to return anything since this function doesn't return anything and defined void as return type.
}


// specifying return type as int assuming input numbers are only gonna be integers
int returnMaxOfThree(){
    // function gets noinput  parameters from user and return the maximum of three numbers
    int num1, num2, num3; // these variables gets input from the user for comparison
    int maxOfThree; // this variable is used to hold hold the return value from function
    printf("please enter three numbers separated by space to return max of three numbers : "); scanf("%d%d%d", &num1, &num2, &num3);
     // declaring/initialising return variable
    
    // checks if num1 is greater than other two
    if ((num1 > num2) && (num1 > num3))
        maxOfThree = num1;
    else if ((num2 > num1) && (num2 > num3)) // checks if num3 is greater than other two
        maxOfThree = num2;
    else
        maxOfThree = num3; // assigns num3 if none of the above conditions are met

    return maxOfThree; // returns the final value stored inside maxOfThree
}


// specifying return type as double since average result could be in float type
double averageCalculation(int num1, int num2, int num3){
    return (num1 + num2 + num3)/3; // returns the average of three numbers - double/float datatype.
}

int main() {
    // FUNCTIONS -INTRODUCTION
    /**
     * Characteristics of function
     * 1. <"function name">
     * 2. <"parameter list">
     * 3. <"return type"> - could be void (return nothing), int, char, float, strings etc
     */

    // FUNCTION 1 - no parameters and nothing returned.
    // FUNCTION 2 - some parameters and nothing returned.
    // FUNCTION 3 - no parameters and something returned.
    // FUNCTION 4 - some parameters and something returned.


    // Function 1 to print greetings
    printGreetings();
    
    // Function 1 to print maximum of two numbers.
    int num1, num2;
    printf("please enter two numbers separated by space to find max numbers : "); scanf("%d%d", &num1, &num2);
    printMaxInteger(num1, num2); // Function 2 to print maximum of two numbers

    // Function 3 to return maximum of three 3 integers
    int maxNumber;
    maxNumber = returnMaxOfThree();
    printf("Max of three input number provided is : %d\n", maxNumber);

    // Function 4 to calculate and return average between three numbers.
    int num6, num7, num8;
    double averageResult;
    printf("please enter three numbers separated by space to return average of three numbers : "); scanf("%d%d%d", &num6, &num7, &num8);
    averageResult = averageCalculation(num6, num7, num8); // calling function to calculate the average of three numbers.
    printf("Averge of provided three numbers are : %lf\n", averageResult);

    return 0;
}
