#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        VARIABLES
        1. Variable Type - type of data stored inside variable
        2. Variable Name - name of variable where data is stored
        3. Variable Content - data that is stored inside the variable
        4. Variable Address - unique address where the variable with data is going to be stored.

        Steps involved in variables:
            1. Variable Declaration
            2. Assignment
            3. Reading Input from the user

        VARIABLE DECLARATION
            1. Variable "Creation"
            2. Structure in C Laguage <type> <name>;
                1. int age;
                2. double temp;
                <type-of-variable> <variable-name>

        ASSIGNMENT
            1. Put some value in a variable.
            2. Structure in C Language.
                int age;
                age = 30;

                double temp;
                temp = 26.5;

        READING INPUT FROM THE USER
            1. Reading data from the user.
            2. Structure in C Language (using assignment)
                // hardcoding values directly into variables
                int grade1;
                int grade2;
                grade1 = 80;
                grade2 = 100;
                printf("Average = %d\n", (grade1+grade2)/2);

                // taking input from the user and assign them into variables
                int grade1;
                int grade2;
                scanf("%d", &grade1); //read integer from the console and assign it to grade1
                scanf("%d", &grade2); //read integer from the console and assign it to grade2
                printf("Average = %\n", (grade1+grade2)/2)
     */

    int grade1; // declared variable grade1
    int grade2; // declared variable grade2
    scanf("%d", &grade1); // take data from user and assign it to the variable grade1 using its address + scanf will go to next line automatically.
    scanf("%d", &grade2); // take data from user and assign it to the variable grade2 using its address
    printf("Average = %d\n", (grade1 +  grade2)/2); // calculating average of grade1 and grade2 and printing it on screen


    // CHALLENGE 1:  write a program that gets input from the user and calculates year of both.
    // we should get current year and age from user, and use it to calculate the year of birth
    int currentYear;
    int userAge;
    scanf("%d", &currentYear);
    scanf("%d", &userAge);
    printf("You were born in year %d\n", currentYear - userAge);

    // CHALLENGE 2: Write a program to calculate rectangule's area.
    // we should get two double numbers from the user, the first number should represent the height of the rectangle
    // and the second number should represent the width of the rectangle. The program should calculate and print the Area of the
    // given rectangle. Formula: area of rectangle = height * width.
    double height, width;
    scanf("%lf", &height);
    scanf("%lf", &width);
    printf("Area of the given rectangle : %lf\n", height * width);

    // to make the above code more readable, we can rewrite it in the following way.
    // double height, width;
    double area;
    printf("enter the height : ");
    scanf("%lf", &height);
    printf("enter the width : ");
    scanf("%lf", &width);
    area = height*width;
    printf("Aread of the given rectangle : %lf\n", area);

}
