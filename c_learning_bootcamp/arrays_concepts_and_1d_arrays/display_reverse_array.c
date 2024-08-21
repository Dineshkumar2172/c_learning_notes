#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int reversibleArray[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    // logic to display array in reverse order
    for (int i = SIZE; i > 0; i--){
        printf("%d ,", i);
    }

    printf("\n");
     
    return 0;
}
