#include <stdio.h>
#include <stdlib.h>


// to make code more readable, this one line can be used to change instead of changing it in multiple places.
#define SIZE 5 // useful to keep a constants instead of using it in multiple places

int main() {
    // ARRYAYS - 'It's a collection'
    //      1. One name
    //      2. Access to all elements
    // 
    // SUMMARIZE
    //      1. Create "unique name"
    //      2. Put inside "some elements"
    //              - elements arrange in strict order
    //      3. "unique name" has size.
    //      4. elements can be access or changes using it's index



    // array declaration - <type> <variable_name> [<size>];
    // example - int grades[5];
    // main steps:
    //      1. specify the "type of the elements"  ->  "double", "char" and so on..
    //      2. specify the "name"  ->  appropriate unique name.
    //      3. specify the "length of the array"  ->  how many elements.
    //              - size of the array must BE CONSTANT. else it won't work.
    // example:
    double salaries[10]; // array of type double with size 10 - assume there are 10 employees
    // type of array = type of all the array's elements



    // array initialization - how can we declare and assign content to the variable
    // individual variable: int num = 5;
    // example: 
    //      1. array of integers  ->  int arr[3] = {1, 2, 3};
    //      2. array of floaring points  ->  float bArr[3] = {1.5, 2.5, 3.5};
    //      3. array of characters  -> char name[6] = {'D', 'i', 'n', 'e', 's', 'h'};
    // another way: 
    //      1. int arr[5] = {0}; // set all the elements in an array to zero.
    //      2. int arr[5] = {1, 2}; // after first and second element, all the following elements will be set to 0 by default.



    // accessing array elements - how can we access elements from an array
    // first element - index 0; last element - index "size - 1"
    int testArray[SIZE] = {2, 5, 3, 7, 10};
    int firstElement = testArray[1]; // accessing element from an array
    testArray[4] = 6; // updating elements inside an array using its index
    printf("%d\n", testArray[4]); // printing element of an array by accessing it directly



    // example - find the lowest grade of the five grades by getting input frm the user
    int gradesArray[SIZE]; // using constant to set size.
    int lowestGrade; // declaring array of size 5
    for (int i = 0; i < SIZE; i++){
        int grade;
        printf("please insert grade %d : ", i+1); scanf("%d", &grade); // getting grade as an input from the user
        gradesArray[i] = grade; // updating grade array with the grade provided by user
    }

    lowestGrade = gradesArray[0];

    for (int i = 0; i < SIZE; i++){
        if (gradesArray[i] < lowestGrade)
            lowestGrade = gradesArray[i];
            continue; // doesn't required, but just adding it here ><
    }

    printf("lowest of all the five grades are : %d\n", lowestGrade);



    // CHALLENGE #1: finding maximum value in an array
    int highestGrade = lowestGrade;
    for (int i = 0; i < SIZE; i++){
        if (gradesArray[i] > highestGrade)
            highestGrade = gradesArray[i];
            continue; // doesn't required, but just adding it here ><
    }

    printf("highest of all the five grades are : %d\n", highestGrade);



    // CHALLENGE #2: finding index of max digit in an array
    int maxIndex = 0;
    for (int i = 0; i < SIZE; i++){
        if (gradesArray[i] == highestGrade)
            maxIndex = i; // i typically refers to index
    }

    printf("maximum index of an array : %d\n", maxIndex);

    return 0;
}
