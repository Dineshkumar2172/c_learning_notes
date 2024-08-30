#include <stdio.h>
#include <stdlib.h>

/***************************************************************************/
/******************************* STRUCTURES  *******************************/
/***************************************************************************/

// struct <structure-name>{<types><veriables>;...}
struct date{
    int day;
    int month;
    int year;
};

struct address{
    char address[100];
    char city[10];
    char street[30];
    int doorNumber;
};


// we can use typedef to remove the need to use struct <structure_name> everytime we create a structure variable
typedef struct software{ // with the help of typedef, I don't need to use struct <structure_name> everytime I create a variable
    int version;
    struct date betaReleaseDate;
    struct date officialReleaseDate;
    char ownedBy[100];
    char developmentTeam[100];
}Software; // I can use this definition name instead directly.


// we can use structure as input argument type, we can also use structure as return type
void structTesting(Software sf){
    printf("the initial version %d of our software prototype will be available for beta users on %d-%d-%d. Thanks!\n", sf.version, sf.betaReleaseDate.day, sf.betaReleaseDate.month, sf.betaReleaseDate.year);
}



int main(){
    // to define struct/structure variables
    // struct <structure_name> <variable_name>;
    struct date firstDay, lastDay; // we can basiclly create our own data structure.

    // updating first variable
    firstDay.day = 20;
    firstDay.month = 7;
    firstDay.year = 2021;

    // updating second variable
    lastDay.day = 21;
    lastDay.month = 7;
    lastDay.year = 2024;


    // it's simple as this, <definition-name> <variable-name>;
    Software gamingSoftware, developmentSoftware;
    gamingSoftware.version = 1;
    gamingSoftware.betaReleaseDate.day = 21;
    gamingSoftware.betaReleaseDate.month = 8;
    gamingSoftware.betaReleaseDate.year = 2024;

    structTesting(gamingSoftware); // just tesing the stuct using it as input type

    return 0;
}

