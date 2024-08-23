#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
#define PALINDROME_SIZE 10

int main() {
    // CHALLENGE 1: write a program that initializes an array.
    // 3 elements should represent a date:
    //      1. Day
    //      2. Month
    //      3. Year
    // The program should create another array and copy the data from original array.
    // print both the arrays to see both are same.
    int date1[SIZE] = {21, 7, 2000};
    int date2[SIZE]; // declaring new array where array data will be copied
    int isPalindrome = 1;
    // vdate2 = date1; - in other programming languages. but it won't work here
    // in c, we gotta use for loop to copy one array into another, pain right? I understand ><
    for (int i = 0; i < SIZE; i++){
        date2[i] = date1[i];
    }
    
    for (int i = 0; i < SIZE; i++){
        printf("value in date1 = %d and value in date2 = %d\n", date1[i], date2[i]);
    }


    // CHALLENGE 2: palindrome!!!
    // should be same even if we read it from either side, both from left to right and right to left
    int date3[PALINDROME_SIZE] = {1, 2, 3, 4, 5};
    int date4[PALINDROME_SIZE]; //  variable to store reverse order to date 3
    // loop to update date4 array with the reverse order ot date3, we can use this date4 for reference
    for (int i = PALINDROME_SIZE -1, j = 0; i >= 0 && j < PALINDROME_SIZE; i--, j++){
        date4[j] = date3[i];
    }
    // loop to match the values to check if they are same, if not same, update isPalindrome function by setting it to 0(false)
    for (int i = 0; i < PALINDROME_SIZE; i++){
        if( date3[i] != date4[i]){
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome){ // if the array is palindrome, execute below statement
        printf("The given array is a palindrome\n");
    } else { // if the array is not palindrome, execute below statement
        printf("The given array is not a palindrome\n");
    }
        

    // CHALLENGE 3: write a program that should calculate and print the largest sum of two adjacent elements in the array.
    // example:
    //      1. 4, 3, 7, 1 --> 10
    //      5, 7, 1, 5, 2 --> 12
    int arr[5] = {1, 4, 3, 7, 1};
    int largestSum = 0;
    for (int i = 0; i < 5-1; i++){
        int localSum = arr[i]+arr[i+1];
        if(localSum > largestSum){
            largestSum = localSum;
        }
    }
    printf("The largest sum of given array is : %d \n", largestSum); // output is 10


    // CHALLENGE 4: write a program to find if a given array is sorted
    // check if the array is "really sorted", "sorted", or "not sorted"
    // Example:
    //      [1, 2, 5, 7, 10] - > really sorted
    //      [1, 2, 2, 5, 10] - > sorted
    //      [1, 2, 5, 3, 10] - > not sorted
    int sampleArray[5] = {1, 2, 2, 5, 10}; // array to be checked
    int sorted, reallySorted;
    for (int i = 0; i < 5-1; i++){
        if (sampleArray[i] > sampleArray[i+1]) {
            printf("The given array is not started\n");
            sorted = 0; reallySorted = 0;
            break;
        }

        if (sampleArray[i+1] == sampleArray[i]){
            sorted = 1;
            continue;
        }

        if (sampleArray[i+1] > sampleArray[i]){
            reallySorted = 1;
        }
    }

    if(sorted){
        printf("The given array is sorted\n");
    } else if (reallySorted) {
        printf("The given array is really sorted\n");
    }


    // CHALLENGE 5: write a program to print and count all unique elements in an array.
    // #PART1 - print all unique elements in an array.
    // #PART2 - count the number of unique elements in an array.
    // TODO: need to be properly written
    int mainArray[PALINDROME_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int uniqueCount = 0;
    int i, j;
    for (i = 0; i < PALINDROME_SIZE; i++){
        for (j = 0; j < PALINDROME_SIZE; j++){
            if(i == j){
                continue;
            }

            if(mainArray[i] == mainArray[j]){
                break;
            }
        }

        if(j == 10){
            printf("%d is unique in the given array\n", mainArray[i]);
            uniqueCount++;
        }
        
    }

    printf("\nNumber of unique elements in the array : %d\n", uniqueCount);


    // CHALLENGE 5: write a program to print and count all non-unique elements in an array.
    // we can find it simply by comparing each elements with other elements in an array.
    // if we find a match, if the index of match is before the match of the matching element, else
    // it's a proper match.
    int mainArray1[PALINDROME_SIZE] = {2, 2, 3, 4, 10, 6, 7, 9, 9, 10};
    int nonUniqueCount = 0;
    for (int i = 0; i < PALINDROME_SIZE; i++){
        for (int j = 0; j < PALINDROME_SIZE; j++){
            if ((mainArray1[i] == mainArray1[j]) && (j > i)){
                printf("%d is not an unique element\n",mainArray1[i]);
                nonUniqueCount++;
            }
        }
    }

    printf("The given array has %d non unique elements\n", nonUniqueCount);
    

    // CHALLENGE 6: write a program to rotate left a given array by one position.
    int rotateLeftArray[PALINDROME_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp = rotateLeftArray[0];
    for (int i = 1; i < PALINDROME_SIZE; i++){
        rotateLeftArray[i-1] = rotateLeftArray[i];
    }
    rotateLeftArray[PALINDROME_SIZE-1] = temp;
    for (int i = 0; i < PALINDROME_SIZE; i++){
        printf("%d",rotateLeftArray[i]);
    }

    printf("\n");


    // CHALLENGE 7: write a program to rotate left a given array by n positions.
    // simply re execute the same above logic n number of times.
    int n, rotateNLeft[PALINDROME_SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("please enter the number of left rotation you wanna execute : "); scanf("%d", &n);
    for(int k = 0; k < n; k++){
        int temp = rotateNLeft[0];
        for (int i = 1; i < PALINDROME_SIZE; i++){
            rotateNLeft[i-1] = rotateNLeft[i];
        }
        rotateNLeft[PALINDROME_SIZE-1] = temp;
    }

    for (int i = 0; i < PALINDROME_SIZE; i++){
        printf("%d",rotateNLeft[i]);
    }
    printf("\n");


    // CHALLENGE 8: write a program to rotate right a given array by n positions.
    int n2, rotateNRight[PALINDROME_SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("please enter the number of right rotation you wanna execute : "); scanf("%d", &n2);
    for(int k = 0; k < n; k++){
        int temp2 = rotateNRight[PALINDROME_SIZE-1];
        for (int i = PALINDROME_SIZE-1; i >= 0; i--){
            rotateNRight[i] = rotateNRight[i-1];
        }
        rotateNRight[0] = temp2;
    }

    for (int i = 0; i < PALINDROME_SIZE; i++){
        printf("%d",rotateNRight[i]);
    }

    printf("\n");

    return 0;
}
