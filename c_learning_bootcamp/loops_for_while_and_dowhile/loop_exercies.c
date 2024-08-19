#include <stdio.h>
#include <stdlib.h>

int main() {
    // EXERCISE 1: write a program that receives a "num" from the user. This program should print
    // all the integers from 1 up to "num" and viceversa.
    // Example: Input num 5 should print
    //          1, 2, 3, 4, 5
    //          5, 4, 3, 2, 1
    // solution using ternary operator. Otherwise we have to use two for loops.
    int inputNum, line = 0;
    printf("please enter the num to print num and viceversa : "); scanf("%d", &inputNum);
    for(int i = 0; i < 2; i++){
        line = line + 1;
        for(
            int j = line == 1 ? 1 : inputNum;
            line == 1 ? j <= inputNum : j > 0;
            line == 1 ? j++ : j--)
        {
                 printf("%d, ", j);

        }

        printf("\n");
    }


    // EXERCISE 2: write a program that receives a "num" from the user. The program should print the
    // SUM of all the integers from 1 up to "num".
    // Example #1: 5 -> 1 + 2 + 3 + 4 + 5 = 15
    // Example #2: 7 -> 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28
    int inputNum2, result = 0; // default integer declaration get setted to 1
    printf("please enter the num to perform SUM operation : "); scanf("%d", &inputNum2);
    for(int i = 1; i <= inputNum2; i++){
        result += i;
    }
    printf("the result of sum of integers in %d is : %d \n", inputNum2, result);


    return 0;
}