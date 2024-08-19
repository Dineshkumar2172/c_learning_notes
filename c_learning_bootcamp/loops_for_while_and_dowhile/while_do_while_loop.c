#include <stdio.h>
#include <stdlib.h>

int main() {
    /**
     * 
     * TYPES OF LOOPS
     * 1. while loop
     * 2. do while loop
     * 3. for loop
     * 
     * WHILE LOOP - while <condition> --(true)--> loop body
     */

    
    // while loop - while loop checks the entry condition first and then executes the logic
    int price, totalPrice = 0;
    printf("please enter the price : "); scanf("%d", &price);
    while (price != 0)
    {
        totalPrice = totalPrice + price;
        printf("please enter the price : ");  scanf("%d", &price);
    }

    printf("Total order price = %d\n", totalPrice);


    // do-while loop - executes the logic first and then check the condition.
    // we tend to avoid while loop in places where we need to get some data before checking condition
    // basically to improve code readiblity. This do while does the same job as while, but
    // do while looks from neat in comparison with while loop.
    int secondPrice, secondTotalPrice = 0;
    do
    {
        printf("please enter the price : "); scanf("%d", &secondPrice);
        secondTotalPrice = secondTotalPrice + secondPrice;
    } while (secondPrice != 0);

    printf("Total order price = %d\n", secondTotalPrice);


    // CHALLENGE 2: write a program that receives as input a valid grade.
    // 1. Greater than 0
    // 2. Less than 100
    // The program should print a corresponding message with the grade itself.
    // example: 'Thanks! You've inserted 90, which is a legit grade!'
    // solution 1: implementationusing while loop
    int grade;
    printf("please enter the grade : "); scanf("%d", &grade);
    while (grade>0 && grade <100)
    {
        printf("Thanks! You've inserted %d, which is a legit grade!\n", grade);
        printf("please enter the grade : "); scanf("%d", &grade);
    }

    printf("Thanks! You've inserted %d, which is not a legit grade!\n", grade);

    
    // solution 2: implementation using do while loop
    int secondGrade;
    do
    {
       printf("please enter the grade : "); scanf("%d", &secondGrade);
       printf("Thanks! You've inserted %d, which is a legit grade!\n", secondGrade);

    } while (secondGrade>0 && secondGrade <100);

    printf("Thanks! You've inserted %d, which is not a legit grade!\n", secondGrade);

    
    return 0;
}
