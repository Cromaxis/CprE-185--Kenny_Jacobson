//lab3-2.c
//strcpy function - string copy function

#include <stdio.h>
#include <string.h>

int main(void)
{

  char sourceString[100]; //source string variable 
  char hold[100]; //to hold destinationString 
  char destinationString[100] = "overwrite me"; //destination string variable
  
  //write one printf to prompt the user
  //to enter a source string
  /******** YOUR CODE BELOW *********/
  printf("Enter a string: ");
  
  
  //write one scanf statement to read 
  //the source string from 
  //the keyboard (no spaces in string)
  /******** YOUR CODE BELOW *********/
	scanf("%s", sourceString);
  
  
  
  
  //write one printf to print source and destination string
  /******** YOUR CODE BELOW *********/
  printf("\nSource: %s\nDestination: %s\n", sourceString, destinationString);
  
  strcpy(hold, destinationString); 
  //added to copy destinationString to hold before copying sourceString into destinationString
  strcpy(destinationString, sourceString);
	
 //print both source and destination string using
 // ONE/SINGLE printf statement 
 printf("\nSource: %s\nDestination: %s\n", sourceString, destinationString);
 printf("Original Destination: %s\n", hold);
 //added second printf to print hold which holds original value for destinationString
}
	 