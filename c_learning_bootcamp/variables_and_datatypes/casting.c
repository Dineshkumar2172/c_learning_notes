#include <stdio.h>

int main() {

    // CASTING INTRODUCTION
    /*
        1. Sum of two integers will always be integers. int + int = int
        2. Also, sum or division of two floating point integers are expected to be integers. float/float=float (check point 8 for explanation)
        3. If two number are of the same type, then usually we would have expected the result of any math operation between them to be of 
            that same particular type. Type1 + Type1 = Type1.
        4. In C, the result usually get influenced by the type of the two numbers. result of 5/2 will be 2 and result of 5.0/2.0 will be 2.5. Same numbers
           will return different type of results based on the type of data that's being processed.
                    printf("division of %d and %d is equal to %d\n", 5, 2, 5/2);
                    printf("division of %.2f and %.2f is equal to %.2f\n", 5.0, 2.0, 5.0/2.0);
    */

    // int num1 = 5, num2 = 2;
    // double num1 = 5.0; // it's suffice as long as once of the two numbers are of different type to enforce double type in result.
    // int num2 = 2;
    // double result;
    // result = num1/num2; //assuming num2 is ! 0
    // printf("result = %lf\n", result);


    // from interpreting what we learned above. we can cast the data from one type to a other using (type)<value>
    int num1 = 5, num2 = 2;
    double result;
    // since we mentioned, either one of values should be of type double to enforce float division, instead of integer division.
    // but as you see above, we have defined both the values are integer data type. In order to perform float division instead without having
    // to change the source type, we can using type casting operation which will cast the data from one type to another when using it.
    result = num1/(double)num2; // using type casting to cast integer num2 to double during application. It changed number 2 to 2.0.
    printf("result = %f\n", result);
    // note: we can use casting on num1 as well, ot even for both, there is not limiation
    result = (double)num1/num2;
    printf("result1 = %f\n", result);
    result = (double)num1/(double)num2;
    printf("result2 = %f\n", result);
    // also we can use type casting directly on numbers or any kinda results from operations
    printf("result3 = %d\n", (int)5.6);
    printf("result4 = %f\n", (float)5);
    printf("result3 = %f\n", (int)5.6/6.0);


    // CHALLENGE #1 - write a program that gets 3 grades (int) from the user.
    // The program should calculate and print the EXACT average.
    int grade1, grade2, grade3;
    double average;
    printf("enter the grade1 : "); scanf("%d", &grade1);
    printf("enter the grade2 : "); scanf("%d", &grade2);
    printf("enter the grade3 : "); scanf("%d", &grade3);
    average = (grade1+grade2+grade3)/(double)3;
    printf("average of 3 grades is : %lf\n", average);

    // CHALLENGE #2 - weather station - write a program that gets from the user a temperature ("double") in celsius degrees.
    // the program should calculate and convert the temperature from celsium degrees to fahrenheit degrees and print it.
    // Formula for celsius to fahrenheit conversion -> T(F) = T(C) * 1.8 + 32
    double input_temp, converted_temp;
    printf("enter temperature in celsius for fahrenheit conversion : "); scanf("%lf", &input_temp);
    converted_temp = input_temp * 1.8 + 32;
    printf("after comversion, %lf degree celsius temperature is equivalent to  %lf degree fahrenheit\n", input_temp, converted_temp);

    // CHALLENGE #3 -  write a program that gets from the user a temperature ("double") in fahrenheit degrees.
    // the program should calculate and convert the temperature from fahrenheit degrees to celsius degrees and print it.
    // Formula for fahrenheit to celsius conversion -> T(C) = (T(F) - 32) / 1.8
    double fahrenheit_temp, celsius_temp;
    printf("enter temperature in fahrenheit for celsius conversion : "); scanf("%lf", &fahrenheit_temp);
    celsius_temp = (fahrenheit_temp - 32)/1.8;
    printf("after comversion, %lf degree fahrenheit temperature is equivalent to  %lf degree celsius\n", fahrenheit_temp, celsius_temp);

}
