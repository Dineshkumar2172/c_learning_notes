#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// Work with neighbours;

// write a program that creates an array of integers
// the program should check and print if the array has at least one element with "good neighbours".
//          - an element with good neighbours has a value that equals to the multiplication of both its neighbours (right, left).
int main() {
    int arr[SIZE];
    int hasGoodNeighbours = 0;
    for(int i = 0; i < SIZE; i++){
        printf("pleaser enter the element %d : ", i+1); scanf("%d", &arr[i]);
    }

    // logic to check if the array has atleast one element with good neightbours.
    for(int i = 1; i < SIZE-1; i++){
        printf("%d * %d should be equal to %d and it is %d\n", arr[i-1], arr[i+1], arr[i], arr[i-1]*arr[i+1]);
        if (arr[i] == arr[i-1]*arr[i+1]){
            hasGoodNeighbours = 1;
            break;
        }
    }

    if (hasGoodNeighbours == 1)
        printf("yes, the array has a good multiplication neighbours!\n");
    else
        printf("no, the array does not have any good multiplication neighbours!\n");

    return 0;
}
