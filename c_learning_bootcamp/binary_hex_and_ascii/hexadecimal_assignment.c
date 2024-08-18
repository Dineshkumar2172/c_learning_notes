#include <stdio.h>
#include <stdlib.h>

int main() {

    // QUESTION 1: Write a program that should receive from use the 3 values:
    //  Year, Month, Day - The program should print the date in hexadecimal format
    int day, month, year;
    printf("please enter day : "); scanf("%d", &day);
    printf("please enter month : "); scanf("%d", &month);
    printf("please enter year : "); scanf("%d", &year);

    //printing data in hexadecimal format
    printf("day in hexadecimal format : 0x%X\n", day);
    printf("month in hexadecimal format : 0x%X\n", month);
    printf("year in hexadecimal format : 0x%X\n", year);


    // QUESTION 2: Write a program that should receive a character from the user.
    // The program should print if the character is:
    // Lowercase Letter, Uppercase Letter, Digit, Other
    char inputCharacter;
    int asciiRef; // we can even use ininputCharacter as it is instead of converting it to decimal since c supports decimal comparison by default A-Za-z0-9 in backend.
    printf("please enter the character here : "); scanf("%c", &inputCharacter);
    asciiRef = (int)inputCharacter; // converting input character into it's equivalent decimal digit
    
    // using if else condition to categorise and print
    if (asciiRef > 96 && asciiRef <123)
        printf("The entered character is Lowercase Letter\n");
    else if (asciiRef > 64 && asciiRef <91)
        printf("The entered character is Uppercase Letter\n");
    else if (asciiRef > 47 && asciiRef <58)
        printf("The entered character is a digit\n");
    else
        printf("The entered character is in other category\n");

    return 0;
}
