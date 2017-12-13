/*********************************************/
/** CPRE 185 – Homework 9 ********************/
/*********************************************/
/** Author – Kenneth A. Jacobson *************/
/** Lab section – C **************************/
/** Date started – 30.10.2017 ****************/
/* Comments – String Insertion w/ user input */
/*********************************************/

#include <stdio.h>
#include <string.h>

void strInsert(char *, char *, char *, int);

void main(void){
  char inputString[30];
  char insertString[30];
  char finalString[30];
  int position;

  //read in values for inputString, insertString, and position
  printf("Enter a string: ");
    scanf("%s", &inputString);
  printf("\nEnter a string to insert: ");
    scanf("%s", &insertString);
  printf("\nInsert second string at what position?\n");
    scanf("%d", &position);

  //print out strings before the function is called
  printf("Strings before function call: \n");
  printf("First String: %s\n", &inputString);
  printf("Second String: %s\n", &insertString);
  printf("Position to insert second string: %d\n\n", position);

  //call function strInsert
  strInsert(inputString, insertString, finalString, position);

  //print out new string after the function is called
  printf("New String: %s\n", &finalString);
}

void strInsert(char *inputString, char *insertString, char *finalString, int x){
  //copies inputString into finalString up x characters
  strncpy(finalString, inputString, x);
  //add null character to finalString at x
  finalString[x]='\0';
  //add insertString to end of finalString then add the end of inputString
  strcat(finalString, insertString);
  strcat(finalString, inputString+x);
}
