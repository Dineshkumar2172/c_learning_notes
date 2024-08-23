#include <stdio.h>

int main(){
    // ARITHMETIC SEQUENCE
    // CHALLENGE 1 - write a program that calculates and prints the nth term of the given arithmetic sequence.
    // for example - 1, 3, 5, 7... till n. We need to find the values that comes in the nth place.
    // formula for calculation -> an (nth term of an arithmetic sequence) = a1 + (n-1) * d
    int a1, d, n, an;
    printf("enter the first term of the arithmetic sequence : "); scanf("%d", &a1);
    printf("enter the difference of the arithmetic sequence : "); scanf("%d", &d);
    printf("enter the number of elements in the arithmetic sequence : "); scanf("%d", &n);
    // calculating the nth term of the arithmetic sequence
    an = a1 + (n - 1) * d;
    printf("nth term of the given arithmetic sequence is : %d\n", an);

    printf("=========================================================================\n");

    // CHALLENGE 2 - write a program that calculates and prints Sn (Sum of arithmetic sequence)
    // formula for sum of arithmetic sequence -> Sn = (a1 + an) * n/d
    int nV1; // used V1 in suffix to differentiate earlier decalred variables
    double a1V1, anV1, dV1, Sn;
    printf("enter the first term of the arithmetic sequence : "); scanf("%lf", &a1V1);
    printf("enter the nth term of the given arithmetic sequence : "); scanf("%lf", &anV1);
    printf("enter the difference of the arithmetic sequence : "); scanf("%lf", &dV1);
    printf("enter the number of elements in the arithmetic sequence : "); scanf("%d", &nV1);
    // calculating sum of arithmetic sequence
    Sn = (a1V1 + anV1) * nV1/dV1;
    printf("result of sum of given arithmetic sequence : %lf\n", Sn);

    printf("=========================================================================\n");

    // CHALLENGE 3 - write a program that receives salary (per hours) and total hours worked (in a month).
    // the program should calculate and print the total monthly salary of thge employee.
    double salaryPerHour, workingHours, estimated_pay;
    printf("enter the salary fixed per hour : "); scanf("%lf", &salaryPerHour);
    printf("enter the number of hours you have worked : "); scanf("%lf", &workingHours);
    estimated_pay = salaryPerHour * workingHours;
    printf("estimated salary based on the number of hours worked and the pay per hours : $%lf\n",estimated_pay);

    printf("=========================================================================\n");

    // CHALLENGE 4 - a vehicle leaves from city A to city B. You know the distance from A to B as well as the speed the vehicle is
    // going to drive. so you have to initialize the distance and speed. then you have to find out how long it will take tha car to reach
    // from city A to city B and print the result on the screen.
    float distance, speed, timeTaken;
    printf("enter the distance between point A to point B: "); scanf("%f", &distance);
    printf("enter the speed at which you are going to drive : "); scanf("%f", &speed);
    timeTaken = distance/speed;
    printf("time taken to travel from point A to point B based on give distace and speed : %f\n", timeTaken);

    printf("=========================================================================\n");

    // CHALLENGE 5 - write a program that receives an integer representing seconds. the program should convert the given
    // seconds into total hours, total minutes and remaining seconds.
    int hourToSeconds = 3600; // 3600 seconds in one hour
    int inputSeconds;
    int hours, minutes, remainingSeconds;
    printf("enter the seconds that need to be convered: "); scanf("%d", &inputSeconds);
    // calculating hours from given seconds
    hours = inputSeconds/hourToSeconds;
    minutes = (inputSeconds - hours * 3600) / 60;
    remainingSeconds = (inputSeconds - hours*hourToSeconds) % 60;
    printf("after conversion, there are %d:%d:%d hours in given %d seconds\n", hours, minutes, remainingSeconds, inputSeconds);

    printf("=========================================================================\n");

    // CHALLENGE 6 - write a program that receives a variable "data" of type "float" from the user.
    // the program should print only the decimal part of the data. 0.7 is the decimal part of 12.7
    float decimalInput, decimalPart;
    int roundedInteger;
    printf("enter the decimal number : "); scanf("%f", &decimalInput);
    roundedInteger = (int)decimalInput; // we are getting the lowest integer value of the decimal number
    decimalPart = decimalInput - roundedInteger;
    printf("decimal part of the given decimal number %.2f is %.2f\n", decimalInput, decimalPart);

    printf("=========================================================================\n");

    // CHALLENGE 7 - write a program that receives a number with 3 digits.
    // the program should calculate the sum of digits in this numbee.
    int inputNumber, digitSum;
    int digit1, digit2, digit3;
    printf("enter the three digit number : "); scanf("%d", &inputNumber);
    // assume we are getting 568 - it's range is 001 till 999
    digit1 = (int)(inputNumber/100); // this will give me first digit
    digit2 = (int)((inputNumber - (digit1*100))/10); // this will give me second digit
    digit3 = inputNumber - (digit1*100) - (digit2*10); // this will give me last digit value
    digitSum = digit1 + digit2 + digit3;
    printf("summ of digits in the given number is %d\n", digitSum);

    printf("=========================================================================\n");

    // CHALLENGE 8 - write a program that receives a number with 3 digits.
    // the program should print the reversed number.
    int inputNumberV1;
    int digitV1, digitV2, digitV3;
    printf("enter the three digit number : "); scanf("%d", &inputNumberV1);
    // assume we are getting 568 - it's range is 001 till 999
    digitV1 = (int)(inputNumberV1/100); // this will give me first digit
    digitV2 = (int)((inputNumberV1 - (digitV1*100))/10); // this will give me second digit
    digitV3 = inputNumberV1 - (digitV1*100) - (digitV2*10); // this will give me last digit value
    printf("summ of digits in the given number is %d%d%d\n", digitV3, digitV2, digitV1);


    return 0; // don't forget to add return 0 everytime you create a function to indicate function ran successfully.
}
