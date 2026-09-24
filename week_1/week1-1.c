#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numFaces;
    int roll;
    printf("Dice Roller Program: ");
    printf("How many faces is on your dice: ");
    scanf("%d", &numFaces);

    roll = rand();
    roll = roll % numFaces + 1;
}
