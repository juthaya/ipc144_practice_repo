#include <stdio.h>

// Enter the number of ml of soy sauce are you using: 100

// Your recipe will use:

// 100 ml of soy sauce
// 200 ml of vinegar
// 300 ml of sugar
// 400 ml of water



int main (void)
{
	
	int soySauce;
	int vinegar;
	int sugar;
	int water;


	printf("Enter the number of ml of soy sauce are you using: ");

	scanf("%d", &soySauce);

	vinegar = soySauce * 2;
	sugar = soySauce * 3;
	water = soySauce * 4;


	printf("%d ml of soy sauce\n", soySauce);
	printf("\t%d ml of vinegar\n", vinegar);
	printf("%d ml of sugar\n", sugar);
	printf("%d ml of water\n", water);

	int x=1;
    printf("%d\n",x++);
    printf("%d\n",x++);
    printf("%d\n",x++);
    printf("%d\n",x++);
    printf("%d\n",x++);
    return 0;

	return 0;

}