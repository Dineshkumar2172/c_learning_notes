#include <stdio.h>
#include <stdlib.h>

int main(){

    // Question 1: write a program that reads from the user 2 values of an "integer" type. The program should print
    // "EQUAL" if both values are equal. Otherwise, the program should print "NOT EQUAL".
    int input1, input2;
    printf("enter values separated by space : "); scanf("%d%d", &input1, &input2);
    if(input1 == input2)
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");


    // QUESTION 2: write a program that reads from the user 3 values of an "integer" type. The program should print
    // "EQUAL" if all the values are equal. Otherwise, the program should print "NOT EQUAL".
    int num1, num2, num3;
    printf("enter three values separated by space : "); scanf("%d%d%d", &num1, &num2, &num3);
    if ((num1 == num2) && (num2 == num3))
        printf("EQUAL\n");
    else
        printf("NOT EQUAL\n");


    // QUESTION 3: write a program that reads from the user a "three-digit" integer value. the program should
    // print "ASCENDING" if the three digits of the number are in ascending order (from left to right). if not, the
    // program should print "NOT ASCENDING".
    int inputDigit;
    int digit1, digit2, digit3;
    printf("enter three digit integer value : "); scanf("%d", &inputDigit);
    digit1 = (int)(inputDigit/100); // this will give me first digit
    digit2 = (int)((inputDigit - (digit1*100))/10); // this will give me second digit
    digit3 = inputDigit - (digit1*100) - (digit2*10); // this will give me last digit value
    if ((digit1 < digit2) && (digit2 < digit3))
        printf("ASCENDING\n");
    else
        printf("NOT ASCENDING\n");


    return 0; // necessary to indicate function execution was successful
}