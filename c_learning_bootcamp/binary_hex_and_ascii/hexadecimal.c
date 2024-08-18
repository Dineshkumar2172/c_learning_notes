#include <stdio.h>
#include <stdlib.h>

int main() {
    /**
     * INTRODUCTION - WHAT IS A HEX VALUE?
     * 1. Decimal Digit - 0-9
     * 2. Binary Digit - 0, 1
     * 3. Hexadecimal Digit - 0-9A-F
     *      - Hexadecimal digit has 16 options.
     */

    /**
     * CONVERTING HEXADECIMAL TO DECIMAL
     * 1. Hexadecimal Number [Base 16 - 0-F]
     * 2. 0x2A3 = 2*16^2 + 10*16^1 + 3*16^0 = 512 + 160 + 3 = 675
     * 3. 0x in the prefix simply signifies whatever the value after that is in hexadecimal representation.
     * 4. Hands on - Practice (Hex to Decimal)
     *      - 0x123 = 1*16^2 + 2*16^1 + 3*16^0 = 256 + 32 + 3 = 291
     *      - 0x2F = 2*16^1 + 15*16^0 = 32 + 15 = 47
     *      - 0x000F = 0*16^3 + 0*16^2 + 0*16^1 + 15*16^0 = 15
     *      - 0xA2 = 10*16^1 + 2*16^0 = 160 + 2 = 162
     *      - 0xABCD = 10*16^3 + 11*16^2 + 12*16^1 + 13*16^0 = 40960 + 2816 + 192 + 13 = 43981
     * 
     * CONVERTING DECIMAL TO HEXADECIMAL
     * 1. Given number 'X' value in decimal.
     * 2. Divide 'X' by 16 and add remainder to Hexadecimal.
     *      - The 'remainder' (0-F) will be added to digit "k" (k - number of iteration)
     * 3. Repeat step 2 while 'X' != 0
     * 4. The contribution of the value at "digit i" is 16. Based on "weight = base^position"
     * 5. For example: 123 decimal = 0x7B hexadecimal
     * 
     * 
     * CONVERTING HEXADECIMAL TO BINARY
     * 1. Hexadecimal Number [Base 16]
     * 2. Binary Number [Base 2]                        // both of em are based on powers of 2
     * 3. Every value of hexadecimal is represented by 4 buts in binary digits.
     * 4. For example: (should ignore 0x prefix since it's just used to represent hexadecimal numbers)
     *          - 0x123 = ob 0001 0010 0011
     *          - 0x2F = ob 0010 1111
     *          - 0x000F = ob 0000 0000 0000 1111
     *          - 0xA2 = ob 1010 0010
     *          - 0xABCD = ob 1010 1011 1100 1101
     * 5. Given the following in binary: 11010110 - 1101 0110 - 0xD6 (always separate 4 bits frim right to left, most times we get just 2 bits at last i.e in first digits, which has to be left padded with 0's)
     *          - ob 01101101 = 0110 1101 = 0x6D
     *          - ob 1111111011 = 0011 (padded with 0's to make it four bits) 1111 1011 = 0x3FB
     *          - ob 00011 = 0000 0011 = 0x03
     *          - ob 101010101010101011 = 0010 1010 1010 1010 1011 = 0x2AAAB
     *          - ob 0000110000100111000 = 0000 0110 0001 0011 1000 = 0x06138
     * 
     */
    return 0;
}
