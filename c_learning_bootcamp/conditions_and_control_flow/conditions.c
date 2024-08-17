#include <stdio.h>
#include <stdlib.h>

int main() {

    // note: this section have covered control flows (if conditions), relational operators and logical operators.
    // this c file contains only notes related to switch case since it's easier it's the only concept new for me.

    // find max of two numbers
    // int num1, num2;
    // printf("enter two number separated by space : "); scanf("%d%d", &num1, &num2);

    // if (num1 > num2)
    //     printf("max value - %d\n", num1);
    // else 
    //     printf("max value - %d\n", num2);


    // grade categoriesation
    int grade;
    printf("Enter your grade : "); scanf("%d", &grade);
    if(grade >= 80)
        printf("Excellent Job!\n");
    else if(grade >= 60)
        printf("Not bad...\n");
    else
        printf("Oh... You didn't pass..\n");



    // implemtaing the above logic using swithc case
    // switch case - it allows us to organise code in much more structured way, we can add as many cases as we want using this method
    // unlike if conditions where code will get messy as we add more conditions inside it.
    char gradeV1;
    printf("Enter your grade : "); scanf("%c", &gradeV1);
    switch (gradeV1)
    {
        case 'A': // when grade == A
            printf("Grade between 90-100 \n");
            break;
        case 'B': // when grade == B
            printf("Grade between 80-89 \n");
            break;
        case 'C': // when grade == C
            printf("Grade between 70 - 79 \n");
            break;
        case 'D': // when grade == D
            printf("Grade between 60 -69 \n");
            break;
        default: // optional line, which will get executed if condition doesn' match any above cases.
            printf("Error... Try Again! \n");
            break;
    }

    // CHALLENGE - Intermediate Calculator
    // develop a calculator that:
    //      1. reads I characters ('+', '-', '*', '/', '%')
    //      2. reads 2 numbers from user.
    //      3. use "switch cases" to calculate and print out the result.
    char operation;
    int num1, num2, result;
    printf("Enter the operation you wish to perform : "); scanf("%c", &operation);
    printf("Enter the two numbers separated by space : "); scanf("%d%d", &num1, &num2);
    switch (operation)
    {
        case '+':
            result = num1 + num2;
            printf("addition of %d and %d is %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("subtraction of %d and %d is %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("multiplication of %d and %d is %d\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("division of %d and %d is %d\n", num1, num2, result);
            break;
        case '%':
            result = num1 % num2;
            printf("modulo of %d and %d is %d\n", num1, num2, result);
            break;
        
        default:
            printf("sorry, operation is not possible");
            break;
    }

    return 0;
}
