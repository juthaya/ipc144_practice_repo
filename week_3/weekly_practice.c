
#include <stdio.h>

// Programming 1:
// Write the following function:

// double metricHeight(int feet, int inches);

// This function is passed the height of a person in feet and inches and will return 
// the height of the person in centimeters.

// 1 foot = 12 inches 1 inch = 2.54 centimeters

double metricHeight(int feet, int inches)
{

    return  (feet * 12 + inches) * 2.54;

}

int main(void){

    int feet;
    int inches;
    double heightCm;

    printf("What is your height in feet and inches? \n");

    scanf("%d %d", &feet, &inches);

    heightCm = metricHeight(feet, inches);


    printf("Your metric height is %.2f cm. \n", heightCm);

    return 0;

}