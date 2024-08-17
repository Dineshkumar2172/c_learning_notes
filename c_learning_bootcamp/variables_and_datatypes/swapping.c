#include <stdio.h>

int main() {
    int value1 = 10, value2 = 20;
    int temp; // introducing temproary variable to hold data temproarily,
    printf("before swapping, data stores in value1 = %d, and data stored in value2 = %d\n", value1, value2);
    temp = value1;
    value1 = value2;
    value2 = temp;
    printf("after swapping, data stores in value1 = %d, and data stored in value2 = %d\n", value1, value2);

    // CHALLENGE 1: implement the swap functionality between 2 floating point variables holding 2 floating point values.
    // print the values of both variables BEFORE and AFTER the swapping functionality. Note: Try solving this exercise without going to
    // the previous solution. That's how you practice.
    double var1 = 10, var2 = 20, temp_var;
    printf("BEFORE CONVERSION : a = %.2lf and b = %.2lf\n", var1, var2);
    // performaing swap operation
    temp = var1;
    var1 =  var2;
    var2 = temp;
    printf("AFTER CONVERSION : a = %.2lf and b = %.2lf\n", var1, var2);
}
