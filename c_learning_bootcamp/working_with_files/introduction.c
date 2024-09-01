#include <stdio.h>
#include <stdlib.h>

int main(){
    // fopen - to open a file, 
    // fclose - to close the opened file,
    // fgetc(<pointer_to_a_file>) - to get the characater from  opened file. file should be opened in read mode.
    // fputc(<character>, <pointer_to_a_file>) - to put the character inside opened file. file should be opened in write or append mode.
    // fprintf(<pointer_to_a_file>, <placeholder>, <parameters>) - to write elements apart from just characters directly to a file.
    // fscanf(<pointer_to_a_file>, <placeholder>, <parameters>) - reads input from user and stores it in a veriable.
    // fputs(<string>, <pointer_to_a_file>) - writes string to a file.
    // fgets(<string>, <int/length_limit>, <pointer_to_a_file>)


    // EOF -  End Of File - similar to how we have \0 used to represent the end of a string, for files we use a special character called
    // EOF (basically means -1) to indicate end of the file. This ia not actually a part of the file, but instead it's an indicator from
    // the lower level system to indicate the end of file - handly incase if you are trying to read a file using while loop.
    // feof(<pointer_to_a_file>) - to check the end of file.


    // type of operations in fopen: fp = fopen(<file_name>, <type_of_operation>)
    //      1. "w" - writing.
    //      2. "r" - reading.
    //      3. "a" - appending.
    // FILE fp = fopen("filename", "operation");
    // once we finish performing our required operations in opened file using fp, then we have to close it.
    // fclose(fp);

    
    // if we use a file name which isn't present there in our system with "write" operation, then fopen will create on eautomatically.
    FILE* fp = fopen("sample.txt", "a"); // opening a file + FILE is a struct to handle files
    char myChar1;
    if (fp == NULL) { // make sure the file open operation was successful.
        // if not successfull, then print not successful message
        printf("the opening of the file has failed!\n");
    } else {
        printf("the file is opened for writing! \n");
        // myChar1 = fgetc(fp); // getting the character from the opened file.
        // printf("the first charater that we read is %c \n", myChar1);
        // myChar1 = fgetc(fp); // when you execute the same function second time, them it'll read the next character.
        // printf("the second charater that we read is %c \n", myChar1);
        
        // It'll basically overwite the existing contents of the file while being used with "w" operation,
        // and appends the new content with the exisiting content while being used with "a" operation.
        fputc('H', fp); // if we plan to use (" ") while adding elements, make sure to suffix it with \0 since it's treated as a string
        fputc('e', fp);
        fputc('y', fp);

        fclose(fp); // closing the file once we require file processing is finished.
    }

    return 0;
}
