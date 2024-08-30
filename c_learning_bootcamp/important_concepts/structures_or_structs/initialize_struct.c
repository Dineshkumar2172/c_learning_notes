#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    int x;  // assume it represents x axis
    int y;  // assume it represents y axis
}Point;

void DisplayPointInfo(Point p1){
    printf("x : %d, y : %d \n", p1.x, p1.y);
};

Point GetPointInfo(){
    Point p1;
    printf("please enter the x value of point : "); scanf("%d", &p1.x);
    printf("please enter the y value of point : "); scanf("%d", &p1.y);
    return p1;
};

int main(){
    // declaring a "Point" veriable (without initialization)
    Point p1;

    // initializing a "Point" variable (members in order)
    Point p2 = {2, 3};

    // using designated initializer
    Point p3 = { .x = 2, .y = 3 };

    // using designated initializer (out of order)
    Point p4 = { .y = 3, .x = 2 };

    // Designated initializer (other members are initialized with 0)
    Point p5 = { .x = 2 };



    // exercise 1: write 2 functions
    //          - Function #1 - gets a point veriable and print its information
    //          - Function #2 - responsible for getting a point input from the user and then return it.
    Point p6 = GetPointInfo();
    DisplayPointInfo(p6);

    return 0;
}
