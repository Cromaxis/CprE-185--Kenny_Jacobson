/****************************************/
/** CPRE 185 – Homework 8 ***************/
/****************************************/
/** Author – Kenneth A. Jacobson ********/
/** Lab section – C *********************/
/** Date started – 29.10.2017 ***********/
/* Comments – Vector Dot Multiplication */
/****************************************/

#include <stdio.h>
#include <math.h>

float dotMult(float *, float *);

void main(void){
  float A[6];
  float B[6];
  int i, j;

  //Title of program for user clarity
  printf("DOT PRODUCT FOR 2 MATRICES\n");
  printf("**************************\n\n");

  //Data entry for matrix A
  printf("Enter values for matrix A:\n\n");
  for(i=0;i<6;i++){
    printf("Enter value for A[%d]: ", i);
      scanf("%f", &A[i]);
  }

  //Data entry for matrix B
  printf("\nEnter values for matrix B:\n\n");
  for(j=0;j<6;j++){
    printf("Enter value for B[%d]: ", j);
      scanf("%f", &B[j]);
  }

  //Printing values in matrix A
  printf("\nMatrix A: [%.2f,", A[0]);
  for(i=1;i<5;i++){
    printf("%.2f,", A[i]);
  }
  printf("%.2f]\n", A[5]);

  //Printing values in matrix B
  printf("Matrix B: [%.2f,", B[0]);
  for(j=1;j<5;j++){
    printf("%.2f,", B[j]);
  }
  printf("%.2f]\n", B[5]);

  //printing dot product of A*B
  printf("\nVector Dot Product of A and B: %f", dotMult(A, B));
}

float dotMult(float A[], float B[]){
  float sum= 0.0;
  int i;

  //for loop to multiply value of A and B at index i
  //then add to running sum
  for(i=0;i<6;i++){
    sum += A[i]*B[i];
  }

  return sum;
}
