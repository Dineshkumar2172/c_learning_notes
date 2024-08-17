#include <stdio.h>
#include <stdlib.h>

int main(){
    /**
     * INTRODUCTION - what is bit?
     * decimal digit - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
     * what are english letters - A-Z and a-z
     * bit - 0, 1 (bit can be either 0 or 1)
     *      1. A 'bit' can be either 0 or 1 - total of two options.
     *      2. A 'bit' is a basic unit in computing.
     */

    /**
     * BITS & BYTES
     * 1. A bit is just a basic unit to represent a 'value'.
     * 2. A 'byte' is a sequence of 8 bits. (where each bit can be either 0 or 1)
     *      for example:
     *          option #1 - 01101110
     *          option #2 - 11011000
     *          option #3 - 11001101
     * 
     * 
     * BINARY NUMBERS
     * 1. Decimal Number (it's the number system we humans are using today in our day to day life)
     *      - consists of decimal digits - 0-9
     *      - we have 10 options to count from 0 up to 9
     *      - once we reach the value of '9' - we run out of digits
     *        (but we know that there are more decimal numbers...)
     *      - we can add tens to the number and get another 10 options for each ten.
     *      - one additional information, decimal number system are base 10.
     *      - A 'decimal number' consists of digits.
     *      - "digits" are places at "positions", form right to left, starting at position 0.
     *      - There's a 'weight' associated with each digit position. from right to left, one's(10^0)->ten's(10^1)->hundred's(10^2)-> thousand's (10^3)
     *          2463 - 3 has weight 1, 6 has weight of 10, 4 has a weight of 100 and 2 has a weight of 1000.
     *          2463 = 2*10^3 + 4*10^2 + 6*10^1 + 3*10^0 <--- right to left
     *          weight =  base^position (position starts from 1 and increases by 1 as we move towards left)
     * 
     *
     * note from google about bases - In the number system, each number is represented by its base. If the base is 2 it 
     * is a binary number, if the base is 8 it is an octal number, if the base is 10, then it is called decimal number system.
     * 
     * 
     * 
     * BINARY NUMBER INTRODUCTION
     * 1. decimal Value (binary Value) : 0 (0), 1 (1), 2 (10), 3 (11), 4 (100), 5 (101), 6 (110), 7 (111)...
     * 2. There are digits (0/1). The numbers can be represented by multiple digits.
     * 3. Everytime we add a new digit to a left position.
     * 
     * 
     * CONVERTING BINARY NUMBERS INTO DECIMAL
     * 1. Binary Number [Base 2]
     * 2. Similar to what we have in decimal system, it;s position goes from right to left [...3 2 1 0 <----]
     * 3. 1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 (as mentioned in decimal section --> weight = base^position)
     *         = 8 + 4 + 1
     *         = 13
     * 4. Binary representation of value 1101 equals to 13 in decimal representation.
     */

    return 0;
}
