/****************************************/
/** CPRE 185 – Homework 8 ***************/
/****************************************/
/** Author – Kenneth A. Jacobson ********/
/** Lab section – C *********************/
/** Date started – 29.10.2017 ***********/
/** Comments – Polynomial Calculator 2 **/
/****************************************/

#include <stdio.h>
#include <math.h>

float polynomial(float, float, float, int, int);

void main(void){
  float coef, varx, vary, polyTotal;
  int expox, expoy, cont;

  //Program title for user clarity
  printf("POLYNOMIAL CALCULATOR\n");
  printf("*********************\n\n");

  //reading in values for x and y
  printf("Enter the value of x: ");
    scanf("%f", &varx);
  printf("Enter the value of y: ");
    scanf("%f", &vary);

  while(cont != 1){
    //reading in values for coefficient, and exponents
    printf("\nEnter the coefficient: ");
      scanf("%f", &coef);
    printf("Enter the exponent on x: ");
      scanf("%d", &expox);
    printf("Enter the exponent on y: ");
      scanf("%d", &expoy);

    //calculating value of polynomial chunk and adding it to running sum
    polyTotal+= polynomial(coef, varx, vary, expox, expoy);

    //printing out value of polynomial up to this point
    printf("Value of polynomial thus far: %.2f\n\n", polyTotal);

    //way for user to break loop
    printf("Continue? (1 to end): ");
      scanf("%d", &cont);

  }
  //Exit statement
  printf("\n*****End Program*****\n");
    printf("*********************");
}

float polynomial(float coef, float varx, float vary, int expox, int expoy){
  return coef*pow(varx, expox)*pow(vary, expoy);
}
