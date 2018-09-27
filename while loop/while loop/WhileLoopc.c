#include <stdio.h>


int main(void) {
	int number = 0;
	int numberTwo = 2;

	while (number < 10) // print 10 times
	{
		number++;
		printf("joey, %d\n", number);
	}
	number = 0; // set number back to 0

	printf("The same output in a do while loop\n");

	do // do this
	{
		number++;
		printf("joey, %d\n", number);
	} while (number < 10); // while this is true.

	if (numberTwo == 0) {
		printf("the value if the number is 0\n");

	}
	else {
		printf("the value of the number is not 0\n");
	}

	// Without the breaks it will skip the correct one and go 
	//to the next case.
	switch (numberTwo)
	{
	case 1: // umberTwo is = to 1.
		printf("This is case 1\n");
		break;
	case 2:
		printf("This is case 2\n");
		break;
	case 3:
		printf("This is case 3\n");
		break;
	default:
		printf("This is the defult case meaning none of the cases are true");
		break;
	}


}
