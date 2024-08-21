#include <stdio.h>
#include <stdlib.h>

int main() {
    // DECLARATION
    // 1. Standard Variables
    //      - int num;
    //      - double b;
    //      - char myChar;
    //
    // 2. 1-D arrays
    //      - int grade[5];
    //      - double my_array[5];
    //      - char m_seq[10];
    //
    // 3. 2-D arrays (it's should be handled like a rows and columns)
    //      - specify the size of rows
    //      - specify the size of columns
    //      - int arr[3][4];


    // INITIALIZATION OF 2D ARRAYS + 3 TRICKS TO INITIALISE
    // 1. The standard way
    //      - int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //      - double mat[3][2] = {{1.5, 2.5}, {3.2, 4.6}, {5.3, 6.5}};
    // 2. Imcomplete values in the internal curly brackets
    //      - int mat[2][3] = {{5, 6}, {7}} // here first row will have 5, 6, 0 and second row will have 7, 0, 0
    //      - int mat[4][3] = {{1, 2}, {4, 5, 8}, {10}} // here row will have 1, 2, 0 and row 2 will have 4, 5, 8 and row 3 will have 10, 0, 0 and row 4 will have 0, 0, 0
    // 3. Excessively values in the internal curly brackets
    //      - int mat[2][3] = {5, 2, 1, 6, 5}; // here first row will get 5, 2, 1 and second row will get 6, 5, 0

    // ACCESSING ELEMENTS FROM 2D ARRAY
    // gotta use row and column insdex to access values from 2D arrays.
    // for example:
    //  int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //  accessedElement = mat[0][1]; // to access element 2 from the array

    // CHALLENGE 1: initialise and print 2D arrays
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

     
    return 0;
}
