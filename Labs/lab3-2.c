/***********************************************/
/************ CPRE 185 - Lab 3 *****************/
/***********************************************/
/********** Author – Kenny Jacobson ************/
/************* Lab section – C *****************/
/********** Date started – 9/15/2017 ***********/
/********** Comments –  ************************/
/***********************************************/

#include <stdio.h>
#include <math.h>

int main(void){
	int x;
	double y;
	
	//3.2a
	x = 6427+1725;
	printf("\n6427+1725=%d\n",x);
	//output is normal
	
	//3.2b
	x = (6971*3825)-95;
	printf("(6971*3825)-95=%d\n",x);
	//output is normal
	
	//3.2c
	y = 79+12/5;
	printf("79+12/5=%.2lf\n",y);
	//output should be 81.4
	//the program outputs 81.00 because 79,12 and,5 are all formatted as integers 
	//and wont have decimal places when output through double
	
	//3.2d
	y = 3640.0/107.9;
	printf("3640.0/107.9=%.2lf\n",y);
	//output is normal
	
	//3.2e
	x = (22/3)*3;
	printf("(22/3)*3=%d\n",x);
	//output should be 22
	//the programs outputs 21 because integer division in c only outputs whole numbers without remainders
	//22/3=7 7*3=21
	
	//3.2f
	x = 22/(3*3);
	printf("22/(3*3)=%d\n",x);
	//output should be 2.444
	//in c int variables truncate values following a decimal point
	//therefore 2.44 --> 2
	
	//3.2g
	y = 22/(3*3);
	printf("22/(3*3)=%.2lf\n",y);
	//output should be 2.44
	//integer division truncates numbers after the decimal point. However double adds decimal places to any number
	//therefore 2 --> 2.00
	
	//3.2h
	y = 22/3*3;
	printf("22/3*3=%.2lf\n",y);
	
	//3.2i
	y = (22.0/3)*3.0;
	printf("(22.0/3)*3.0=%.2lf\n",y);
	
	//3.2j
	x = 22.0/(3*3.0);
	printf("22.0/(3*3.0)=%d\n",x);
	
	//3.2k
	y = 22.0/3.0*3.0;
	printf("6427+1725=%.2lf\n",y);
	
	//3.2l
	y = pow(23.567,2)/(4*M_PI);
	printf("A circle with circumference of 23.567 has an area of %.2lf\n",y);
	//equation dervied from C=2pi*r and A=pi*r^2
	//solved for r then input into area equation
	//final equation: A=C^2/4pi
	
	//3.2m
	y = 14.0 * .3048;
	printf("14 feet is %.2lf meters\n",y);
	
	//3.2n
	y = (76.0-32.0)/1.8;
	printf("76 degrees F is %.2lf degrees C\n",y);
	
	return 0;
}