#include <stdio.h>

// Write the following function:

void sum3Digits(int number);

// This function is passed a 3 digit number.
// You may assume that the number provided to the function is exactly 3 digits.
// This function returns the sum of the 3 digits in the number

int main(void)
{

    int threeDigitNumber;

    printf("enter some number: ");

    scanf("%d", &threeDigitNumber);

    printf("The first digit you entered is %d \n", threeDigitNumber / 100);
    printf("The second digit you entered is %d \n", (threeDigitNumber / 10) % 10);
    printf("The last digit you entered is %d \n", threeDigitNumber % 10);
    
    

    sum3Digits(threeDigitNumber);

}

void sum3Digits(int number)
{
    int num1;
    int num2;
    int num3;
    int sum3D;

    num1 = number / 100;
    num2 = (number / 10) % 10;
    num3 = number % 10;

    sum3D = num1 + num2 + num3;

    printf("The sum of the number you entered is %d \n", sum3D);


}