#include "unit.h"
#include<stdio.h>
float unit(){
    float e, h1, rating, total1, m, unit_inkwh, x,similar;
    float unit = 0;
    char equipment[25];
    //this is a function to calculate your total unit consumed
    printf("Enter no of equipment in  your home");
    scanf("%f", &e);
    for (int i = 1; i <= e; i++)
    {
        printf(" Enter the name of Equipment    :\n");
        scanf("%s", equipment);
        printf(" you have %s please enter its power rating means in watt\n", equipment);
        scanf("%f", &rating);
printf("How mant %s you have",equipment);
scanf("%f",&similar);
        printf(" How many hour you run %s \n", equipment);
        scanf("%f", &h1);
        total1 = rating * h1*similar;
      
        unit = unit + total1;
    }
    unit_inkwh = (unit / 1000);
    printf("enter no of days in current month ");
    scanf("%f", &m);
    x = m * unit_inkwh;
    return x;
}
