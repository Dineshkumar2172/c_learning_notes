#include <stdio.h>
#include <stdlib.h>

int main(){
    // fopen - to open a file
    // type of operations: fp = fopen(<file_name>, <type_of_operation>)
    //      1. "w" - writing.
    //      2. "r" - reading.
    //      3. "a" - appending.
    // FILE fp = fopen("filename", "operation");
    // once we finish performing our required operations in opened file using fp, then we have to close it.
    // fclose(fp);

    
    FILE* fp = fopen("sample.txt", "w"); // opening a file + FILE is a struct to handle files
    if (fp == NULL) { // make sure the file open operation was successful.
        // if not successfull, then print not successful message
        printf("the opening of the file has failed!\n");
    } else {
        printf("the file is opened for writing! \n");
        fclose(fp); // closing the file once we require file processing is finished.
    }

    return 0;
}