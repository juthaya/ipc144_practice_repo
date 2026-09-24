// This include lets me use input/output functions like printf, scanf, etc.
// What it actually does is it copies the entire stdio.h file and replaces
// the include statement with its content
#include <stdio.h>


// This program will ask the user to enter two numbers. It will then calculate 
// its sum, difference, product and quotient

// Every C program has a main function. This is where everything starts
int main(void) {

    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    int quotient;
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

    printf("Sum of the numbers is: %d\n", sum);

    printf("Difference of the numbers is: %d\n", difference);

    printf("Product of the numbers is: %d\n", product);

    printf("Quotient of the numbers is: %d\n", quotient);

    return 0;
}