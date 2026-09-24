//this include lets me use input/output functions like printf and scanf
//What this actually does is....copies the entire stdio.h file and replaces
//the include statement with its contents
#include <stdio.h>

// Function prototype
void printBanner(void);
int readNumber(int promptNumber);
void printResults(int num1, char operator, int num2, int operation);
void getResults(int num1, int num2);
//this program will ask the user to enter two numbers.  it will then calculate
//its sum, difference, product and quotient


//every C program has a main function.  This is where everything starts
int main(void)
{
	int num1;
	int num2;

    // Function call
    // Program will execute the printBanner function from 
    // beginning to end fore continuing onto the next
    // step in main
    printBanner();

    num1 = readNumber(1);
    num2 = readNumber(2);
	getResults(num1, num2);

	return 0;

}

// _________________________________

// FUNCTION DEFINTIONS

// Declaration "Before Use" means that everything must be declared 
// before we can use it

void printBanner(void){
    //print a banner
	printf("Calculator Program\n");
	printf("==================\n");
}

int readNumber(int promptNumber){
    
    int num;
    //print a prompt
	printf("Please enter a number %d: ", promptNumber);
    // User enters number
	scanf("%d", &num);

    return num;
}

void printResults(int num1,  char operator, int num2, int operation){

	printf("%d %c %d = %d\n", num1, operator, num2, operation);

}

// this function acepts 2 numbers. It will calculate 
// the sum, difference, product and quotient for the 2
// numbers and print out the result
void getResults(int num1, int num2){

	int sum;
	int difference;
	int product;
	int quotient;

	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;

	printf("num1: %d num2: %d\n", num1, num2);

	printResults(num1, '+', num2, sum);
	printResults(num1, '-', num2, difference);
	printResults(num1, '*', num2, product);
	printResults(num1, '/', num2, quotient);
}