//lab3-3.c
//strcat function - string concatenation function

#include <stdio.h>
#include <string.h>

int main(void)
{

  char sourceString[100]; //source string variable 
 
  char destinationString[100] ; //destination string variable
  
  //write one printf to prompt the user
  //to enter a source string
  /******** YOUR CODE BELOW *********/
  printf("Enter a string: ");
  
  
  //write one scanf statement to read 
  //the source string from 
  //the keyboard (no spaces in string)
  /******** YOUR CODE BELOW *********/
  scanf("%s", sourceString);
  
  
  //write one printf to prompt the user
  //to enter a destination string
  /******** YOUR CODE BELOW *********/
  printf("\nEnter a second string: ");
  
  
  //write one scanf statement to read 
  //the destination string from 
  //the keyboard (no spaces in string)
  /******** YOUR CODE BELOW *********/
  scanf("%s", destinationString);
  
  
  
  //write one printf to print source and destination string
  /******** YOUR CODE BELOW *********/
  
  
  
  strcat(destinationString, sourceString);
	
 //print both source and destination string using
 // ONE/SINGLE printf statement 
 

}
	 