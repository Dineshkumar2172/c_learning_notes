#include <stdio.h>
#include <stdlib.h>

int main() {
    // FOR LOOP

    /**
     * 
     * For Loop - Structure
     * 1. Specify 'for' statement.
     * 2. Specify 'for' sections.
     *      - 'Initialization' statement. int i = 0;
     *      - 'Loop condition'. i < <certain-threshold>
     *      - 'Update' statement. i++ (update initialised variable during every iteration)
     * 3. Loop body.
     * 
     */

    // IMPLEMENTATION
    int num, i;
    printf("Hello! Please enter a number: "); scanf("%d", &num);
    for (i = 0; i < num; i++){ // #1 initialization   #2 loop condition   #3 update condition
        // #4 loop body
        printf("%d\n", i);
    }
    

    // CHALLENGE 1: write a program that receives as input twp values. Number and Power
    // The program should calculate the result of: "num^power" and print the result to the screen.
    int number, power, result = 1;
    printf("please enter the number and power separated by space : "); scanf("%d%d", &number, &power);
    for (int i = 1; i <= power; i++){
        result += result*num;
    }
    printf("power of %d^%d is : %d\n", number, power, result);


    // CHALLENGE 2: write a program that receives an integer - "n". The program should print
    // a right angle triangle with the following pattern up to a given "n". (use nested loops)
    int limit;
    printf("Please enter the right angle triangle limit : "); scanf("%d", &limit);
    for (int i = 0; i <= limit; i++){ // first iteration handles lines 
        for (int j = 0; j <= i; j++){ // second iteration to handle each characters in line.
            printf("*");
        }
        printf("\n");
    }


    // CHALLENGE 3: write a program that receives an integer - "n". The program should print
    // a right angle triangle with the following pattern up to a given "n".
    int secondLimit; // initializing limit variable
    printf("Please enter the right angle triangle second limit : "); scanf("%d", &secondLimit); // getting input from the user
    for (int i = 1; i <= secondLimit; i++){
        for (int j = 1; j <= i; j++){
            printf("%d",i);
        }
        printf("\n");
        
    }

    
    // BREAK AND CONTINUE STATEMENTS - (personally, nothing to learn here as it's universal)    

    return 0;
}
