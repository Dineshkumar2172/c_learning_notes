#include <stdio.h>
#include <stdlib.h>

void normalSwap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void pointerSwap(int *a, int *b){
    int temp;
    temp = *a; // storing value from address of a to temp
    *a = *b;   // now, updating value in the address of a with value from address of b
    *b = temp; // now, updating value in the address of b with the value stored inside temo from address of a
}

// NOTE: In C we cannot return more than one variable from a function, hence pointers are there.
// we need to pass address of variables that needs to be updated while calling a function in c.
void findMinMax(int num1, int num2, int *pMin, int *pMax){
    if (num1 > num2){
        *pMin = num2;
        *pMax = num1;
    } else {
        *pMin = num2;
        *pMax = num1;
    }

    // no need for any retun since we are updating memory address directly.
}

int main() {
    // 
    int a = 5, b = 7;
    printf("before normal swap operation a = %d and b = %d\n", a, b);
    normalSwap(a, b);
    printf("after normal swap operation a = %d and b = %d\n", a, b);

    // output
    // before swap operation a = 5 and b = 7
    // after swap operation a = 5 and b = 7

    printf("before pointer swap operation a = %d and b = %d\n", a, b);
    pointerSwap(&a, &b);
    printf("after pointer swap operation a = %d and b = %d\n", a, b);

    // write a program that initialized 2 variales (of integer types)
    //  1. grade 1
    //  2. grade 2
    // the program should print the value and the address of each of these variables
    int grade1 = 10, grade2 = 20;
    printf("value of grade1 = %d, and value of grade2 = %d\n", grade1, grade2);
    printf("address of grade1 = %p, and address of grade2 = %p\n", &grade1, &grade2);


    // CHALLENGE 2: guess what would be printed
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;
    
    printf("num1 = %d, num2 = %d \n", num1, num2); // 5, 7

    ptrA = &num1; // ptrA holds address of num1
    ptrB = &num2; // ptrB holds address of num2

    printf("num1 = %d, num2 = %d \n", num1, num2); // 5, 7

    // specifying * before variable allows us to access the actual veriable indirectly
    *ptrA = *ptrA + 1; // here, it's equivalent to num1 = num1 + 1 = 5 + 1 = 6
    *ptrB = *ptrB + 3; // here, it's equivalent to num2 = num2 + 3 = 7 + 3 = 10

    printf("num1 = %d, num2 = %d \n", num1, num2); // 6, 10

    // here accessing pointer variable directly without using * in prefix allows us to access the address instead.
    ptrA = ptrB; // here, adress in ptrA get's updated to address from pointerB, now both of them has address of num1
    ptrB = ptrA; // here, address in ptrB get's updated to address from pointerA, now both pointerA and pointerB points to same num1

    printf("num1 = %d, num2 = %d \n", num1, num2); // 6, 10 - since above operations was limited to pointer variables, not original num1 and num2
    printf("*ptrA = %d, *ptrB = %d \n", *ptrA, *ptrB); // 10, 10 - since both pointerA and pointerB are pointing to same memory address

    num1 = *ptrB; // * is used to access the value inside address, 10
    num2 = num1 - 3;  // 10 - 3 = 7

    printf("num1 = %d, num2 = %d \n", num1, num2); // num1 = 10, num2 = 7


    int minmaxTest1 = 7, minmaxTest2 = 5;
    int pMin, pMax;
    findMinMax(minmaxTest1, minmaxTest2, &pMin, &pMax);
    printf("min number os %d and max number is %d \n", pMin, pMax);

    return 0;
}
