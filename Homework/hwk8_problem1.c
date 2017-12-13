/****************************************/
/*** CPRE 185 – Homework 8 **************/
/****************************************/
/*** Author – Kenneth A. Jacobson *******/
/*** Lab section – C ********************/
/*** Date started – 29.10.2017 **********/
/*** Comments – Polynomial Calculator ***/
/****************************************/

#include <stdio.h>
#include <math.h>

float polynomial(float, float, int);

void main(void){
  float coef, vari, polyTotal;
  int expo, cont;

  //Program title for user clarity
  printf("POLYNOMIAL CALCULATOR\n");
  printf("*********************\n\n");

  //reading in value of x variable
  printf("Enter the value of x: ");
    scanf("%f", &vari);

  while(cont != 1){
    //reading in coefficient and exponent values
    printf("\nEnter the coefficient: ");
      scanf("%f", &coef);
    printf("Enter the exponent: ");
      scanf("%d", &expo);

    //adding value of current polynomial chunk to running sum
    polyTotal+= polynomial(coef, vari, expo);

    //print out value of polynomial to this point
    printf("Value of polynomial thus far: %.2f\n\n", polyTotal);

    //way for user to break loop
    printf("Continue? (1 to end): ");
      scanf("%d", &cont);
  }
  //Exit statement
  printf("\n*****End Program*****\n");
    printf("*********************");
}

float polynomial(float coef, float vari, int expo){
  return coef*pow(vari, expo);
}
