#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        %d - is for integers numbers.
        %f - is for floar numbers.
        %.nf - repalce n with the number of floating points you wanna display in float.
    */
    printf("I am %d years old\n", 20); // %id is one of the format specifier used to hold place for integer number.
    printf("Today I am %d years old and next year I'm going to be %d years old\n", 20, 21);
    printf("My average grade : %f\n", 93.7);
    printf("My average grade : %.1f\n", 93.7);

    // milestone #1 - building your first calculator A
    printf("addition : %d\n", 3+3);
    printf("subtraction : %d\n", 5-3);
    printf("multiplication : %.2f\n", 5*12.2);

    // by default, c does integer division if both the divider values are integers. use (double) or make one of the either values as float.
    // printf("dividing directly will throw error : %.2f\n", 15/2);
    printf("division (using double keyword) : %.2f\n", (double)15/2);
    printf("division (making either of one values as float) : %.2f\n", 15.0/2);
    printf("remainder : %d\n", 15%2);


    printf("calculator based on format specification : \n");
    printf("%d + %d = %d\n", 5, 2, 5 + 2);
    printf("%d - %d = %d\n", 5, 2, 5 - 2);
    printf("%d * %d = %d\n", 5, 2, 5 * 2);
    printf("%d / %d = %d\n", 5, 2, 5 / 2);
    printf("%d %% %d = %d\n", 5, 2, 5 % 2);

    // print asterisk pattern
    printf("\n\nprinting asterisk pattern : \n");
    printf("1*********\n");
    printf("12********\n");
    printf("123*******\n");
    printf("1234******\n");
    printf("12345*****\n");

    // print X shape
    printf("*     *\n *   *\n  * *\n   *\n");
    printf("  * *\n *   *\n*     *\n");

    // write a program that prints the year you were born
    printf("you birth year is %d\n", 2024 - 24);
    return 0;
}
