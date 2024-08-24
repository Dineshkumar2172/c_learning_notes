#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10
#define SENTENCE_SIZE 100

int findLength(char *pStr);

int main(){
    // CHALLENGE 1: write a program to  initialise a string and print it
    char str1[] = "Dineshkumar Anbalagan";
    printf("your full name is : ");
    // last character will be empty, because string in c has \0 in suffix
    for (int i = 0; i < sizeof(str1); i++){
        printf("%c",str1[i]);
    }

    // CHALLENGE 2: write a function that finds the length of a given string
    char str[SIZE];
    printf("\nplease enter a string to find its length : "); scanf("%s", str);
    int length = findLength(str);
    printf("The lengt of given string is : %d\n", length);

    // CHALLENGE 3: write a program to find the number of words in a given sentence
    char sentence[SENTENCE_SIZE];
    int wordCount = 0;
    printf("\n please enter the sentence here : "); fgets(sentence, sizeof(sentence), stdin);
    for (int i = 0; i < strlen(sentence); i++){ // string length function gives me a len of string till \0
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }
    wordCount++;
    printf("total number of words in the given sentence is : %d\n", wordCount);
    

    return 0;
}

int findLength(char *pStr){
    int stringLength = 0;

    do
    {   
        stringLength++;
    } while (pStr[stringLength] != '\0');

    return stringLength;
}
