// This include lets me use input/output functions like printf, scanf, etc.
// What it actually does is it copies the entire stdio.h file and replaces
// the include statement with its content
#include <stdio.h>


// This program will ask the user to enter two numbers. It will then calculate 
// its sum, difference, product and quotient. Vlues will be soted as floats

// Every C program has a main function. This is where everything starts
int main(void) {

    int num1;
    int num2;
    float sum;
    float difference;
    float product;
    float quotient;
    //Print a banner
    printf("Calculator Program\n");
    printf("====================\n");

    //Print a prompt
    printf("Please enter a number: \n");

    //Read the first number
    //The %d tells the computer, I am expecting a whole number
    //& is the address of operator
    //&num1 is the ddress of num1 in memory

    scanf("%d", &num1);

    //Print a prompt
    printf("Please enter another number: \n");

    //Read the second number
    scanf("%d", &num2);

    printf("num1: %d\nnum2: %d\n", num1, num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("Sum of the numbers is: %.2f\n", sum);

    printf("Difference of the numbers is: %.2f\n", difference);

    printf("Product of the numbers is: %.2f\n", product);

    printf("Quotient of the numbers is: %.2f\n", quotient);

    return 0;
}

// if both a and b are ints, then result is in int. 
// if one of them is a floating point, then the other will be a float.