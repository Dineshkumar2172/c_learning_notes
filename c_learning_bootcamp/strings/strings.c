#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // STRINGS
    // We using strings for...
    //      1. hold TEXT
    //      2. hold basically any bunch of characters.
    

    // Introduction to Strings
    // Recall the "arrays" topic
    //      - in order to create array of integers, we usually use
    //              int arr[5] = { 1,2,3,4,5 };
    //      - we can create array of integers, array of floating-points, array of characters 
    //
    // What are strings?
    //     Formally, string is just like an array of characters but with the last element "\0" (null character)
    //              {p, r, o, g, r, a, m, \0}
    // What it means?
    //      "Computer" provides us
    //          1. additional functionality to array of characters
    //          2. more abilities to work with Strings.
    // Main point to remember - String in C is an array of characters + the last character '/0' (null character)
    // once we add null charater to an array, the computer will treat this array as a string, this will provide more
    // capabilities and functionalities to it. (we shall see them below)


    // STRING INITIALIZATION (as mentioned earlier, strings are nothing but an array of characters with null suffix)
    // First let's initialize simple array of characters
    char charArray[] = { 'H', 'e', 'l', 'l', 'o' };
    // now in order to initialise strings (as we know it's nothing but an array of characters with null suffix)
    // option 1 - initialization array with null at last index
    char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // \0 represents null
    // option 2 - using double quotes
    char str2[] = "Hello";
    for (int i = 0; i < 5; i++){
        printf("character %d : %c\n", i+1, str2[i]);
    }

    // just trying to use do while loop to print this
    int indexPosition = 0;
    do
    {
         printf("(using do while) : character %d : %c\n", indexPosition, str2[indexPosition]);
         indexPosition += 1;
    } while (str2[indexPosition] != '\0');
    
    // string initialization examples
    // example 1:
    char firstName[] = "Dinesh"; // { 'D' , 'i', 'n', 'e', 's', 'h', '\0' }
    // exmaple 2:
    char lastName[10] = "Anbalagan"; // set size to 10 though there are only 9 characters in last name - it is to include space for \0
    // example 3:
    char password[10] = "123456789";


    /********************************************* NOTHING TO DO WITH COURSE, JUST SOME EXTERNAL SEARCH *********************************************/
    /**
     * After looking at how we sometimes define size and sometimes we don't, a question arises when to define and when not to define
     * First of all, there are three ways to defining string size
     *      1. Explicitly Defining the Size of the String
     *      2. Not Defining the Size of the String (Letting the Compiler Determine It)
     *      3. Dynamic Allocation (Using Pointers)
     */

    // Explicitly Defining the Size of the String
    char str5[10]; // Allocates memory for 10 characters, including the null terminator.
    strcpy(str5, "Hello"); // Works fine because "Hello" fits in the allocated space.

    // Not Defining the Size of the String (Letting the Compiler Determine It)
    char str6[] = "Hello"; // Compiler automatically allocates memory for 6 characters (5 + 1 for '\0').

    // Dynamic Allocation (Using Pointers)
    char *str7 = malloc(50 * sizeof(char)); // Dynamically allocate memory for 50 characters.
    strcpy(str7, "Hello");
    free(str7);  // When done, free the allocated memory.

    /********************************************* NOTHING TO DO WITH COURSE, JUST SOME EXTERNAL SEARCH *********************************************/

    // INPUT & OUTPUT
    // How to read and input and store it (as string)?
    // How to print a string in just 1 line?
    // "input" and "output" functions
    char firstName2[20];
    printf("please enter your first name : "); scanf("%s", firstName2); // %s is to represent string
    printf("your first name is : %s\n", firstName2); // we use use same %s to print the string instead of using for loop.
    // we can add a security mechanism while taking string input from the user using integer before it.
    // assume we only wanna have string of 9 character, then we have to define %9s.
    // If the user writes >9 characters (as an input), then the program will read the first 9 characters.

    // notes: if we use scanf to take string input with space between them, then scanf will ignore all the
    // characters after space. It uses some kinda delimiter and it's one of the limitations in using scanf.
    // In order to overcome this, we use gets(<variable>) to take string inputs, which overcomes which limitation
    // just for example: if you give 'Dineshkumar Anbalagan' as an input to scanf, it'll only take 'Dineshkumar'
    // by ignoring afterspace characters. Below logic is using gets to take string input
    // note: gets is depricated, so we need to use fgets. Google it for more details.

    // <string.h> package to perform string operations
    // strlen - returns the number of characters. (until the first '\0' character)
    // strcpy - copy one array into another. (strcpy(<destination-string>, <source-string>))
    //        - make sure that there is enough memory in the destination-string to hold the source-string
    // strcat - concatenates one string to the end of the other. destination-string + source-string. (strcat(<destination-string>, <source-string>))
    //        - string destination must have enough memory to hold both strings.
    // strcmp - compares two strings. strcmp(str1, str2)
    //        - return 0 if both are same, 
    //        - -1 if The first string is lexicographically smaller than the second string,
    //        - 1 if the first string is lexicographically larger than the second string.
    
    return 0;
}
