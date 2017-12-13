// CprE 185: Lab 2
// Problem 1: Mysterious Output

#include <stdio.h>

int main(void)
{
	int integerResult;
	double decimalResult;
	
	integerResult = 77 / 5;
	printf("The value of 77/5 is %d\n", integerResult);
	//used incorrect format for int. Corrected %lf to %d
	
	integerResult = 2 + 3;
	printf("The value of 2+3 is %d\n", integerResult);
	//missing variable to be used
	
	decimalResult = 1.0 / 22.0;
	printf("The value 1.0/22.0 is %lf\n", decimalResult);
	//incorrect format identifier %d changed to %lf.
	
	return 0;
}

