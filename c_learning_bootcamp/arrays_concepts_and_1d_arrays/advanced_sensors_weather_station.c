#include <stdio.h>
#include <stdlib.h>

#define DAYS 7 // setting 7 days

int main() {
    float temperatures[DAYS];
    float hottestTemperature, coldestTemperature, averageTemperature = 0;
    int hottestDay, coldestDay;

    for (int i = 0; i < DAYS; i++){
        // getting temperature for 7 days from user
        printf("enter temperature for day %d :", i+1); scanf("%f", &temperatures[i]);
        averageTemperature = averageTemperature + temperatures[i];
    }

    hottestTemperature = temperatures[0];
    coldestTemperature = temperatures[0];
    for (int i = 0; i < DAYS; i++){
        if (temperatures[i] > hottestTemperature)
            hottestTemperature = temperatures[i];
        if (temperatures[i] < coldestTemperature)
            coldestTemperature = temperatures[i];
    }

    for (int i = 0; i < DAYS; i++){
        if (temperatures[i] == coldestTemperature)
            coldestDay = i+1;
        if (temperatures[i] == hottestTemperature)
            hottestDay = i+1;
    }

    printf("average temperature : %f\n", averageTemperature/DAYS);
    printf("hottest day of the week : %d\n", hottestDay);
    printf("coldest day of the week : %d\n", coldestDay);

    return 0;
}
