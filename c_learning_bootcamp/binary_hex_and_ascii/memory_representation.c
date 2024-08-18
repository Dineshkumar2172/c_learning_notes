#include <stdio.h>
#include <stdlib.h>

int main() {

    char myChar1 = 'a'; // character datatype occupies 1 byte of memeory, which is 8 bits.
    // Compilation: 
    //      The compiler sees that myChar is a char and requires 1 byte of memory.
    //      It generates instructions to allocate 1 byte of memory when main() is executed.
    //      The compiler determines how much memory each variable will need but does not allocate memory.
    //      It generates the instructions needed for memory allocation.
    
    // Runtime:
    //      When main() runs, 1 byte of memory is allocated on the stack for myChar.
    //      The value 'a' is stored in that memory location as its binary equivalent (01100001). Based on ASCII decimal (97 for a)
    //      Memory is actually allocated when the program runs, and values are assigned to variables at that time.


    // since data is stored in binaries, we can access it in hexadecimal and decimal for as well derecitly using %d and %X
    printf("Character : %c \n", myChar1); // accessing data using char, same format it is stored in RAM
    printf("Decimal ASCII code : %d \n", myChar1); // accessing data in ascii decimal format, 'a' equivalent in ascii decimal
    printf("Hexadecimal ASCII code: %X \n", myChar1); // accessing data in ascii hexadecimal format, 'a' equivalent in ascii hexadecimal


    /**
     * HEXADECIMAL
     */
    char myChar2 = 'a'; // data in ASCII char representation format
    char myChar3 = 97; // same data but in ASCII decimal representation format
    char myChar4 = 0x61; // same data but in ASCII hexadecimal representation format
    // but all the above data formats are stored in memory in same binary format 01100001

    /**
     * SUMMARY
     * 1. Each character has its own 'numerical' ASCII code.
     * 2. The ASCII code can be seen in the ASCII table in various formats:
     *      - Decimal
     *      - Hexadecimal
     *      - Binary
     *      - etc
     * 3. Eventually, the same value can be represented in various formats.
     */

    return 0;
}
