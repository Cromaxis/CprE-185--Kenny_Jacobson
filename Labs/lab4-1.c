//lab3-1.c
//strcmp function - string comparison
//
//NOTE - There is a semantic error in the code below
//       Step 1. Complete the printf and scanf statements below. 
//          Compile and run the code.
//          What semantic error do you see in the output?
//       Step 2. Now, fix the error. Compile and run the code to check your 
//          result.

#include <stdio.h>
#include <string.h>


int main(void)
{

  char major[100]; //string variable for major
  
  int flag = 0; //why do we need this variable ?
	//just in case the input does not trigger any of our if statements
  //write one printf to prompt the user
  //to enter a major 
  //For example, physics
  //             computer
  /******** YOUR CODE BELOW *********/
  printf("Enter a major: ");
  
  //write one scanf statement to read 
  //the string for the major from 
  //the keyboard (no spaces in string)
  /******** YOUR CODE BELOW *********/
  scanf("%s", major);
  
  //why do we need  ! in front of the strcmp function ?
	//because strcmp returns a 0 if the strings are the same and !0 == true
  //Fix sematic error and then, Try removing all 3 of the ! 
  //and see what happens with input "physics"?
	//the if statement doesn't trigger and you get a bad result
  if(!strcmp(major, "physics") || !strcmp(major, "chemister") || !strcmp(major, "biology")){
	  
	  printf("\nYou are a science major. \n");
	  
	  flag = 1;
  }
	//strcmp returns a value based on the 2 strings. It compares the two strings until it finds an unmatched value.
	//if there is an unmatched value it returns a value based on the ASCII value of the chars at that index
  
  if(!strcmp(major, "computer") || !strcmp(major, "mechanical") || !strcmp(major, "electrical")){
	  
	  printf("\nYou are an engineering major. \n");
	  
	  flag = 1;
	  
  }
  
  //what change should be made to the if statement
  //to fix the semantic error ?
  if(!flag)
   printf("\nSorry! I do not recognize your major. \n");
	//add ! before flag to invert the value if flag = 1 then !flag = 0
	//in order to print this the major cannot be found in the above statements
  
}