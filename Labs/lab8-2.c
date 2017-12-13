//Author: Kenneth A. Jacobson
//Name: Lab 7
//Description: Rework of Lab 6 with functions
//27.10.2017

#include <stdio.h>
#include <math.h>

#define TRUE 1

int buttons(int, int, int, int, int);

int main(void) {
    //variables to store values from Esplora
	//zz store the 2 values at the end
	//I don't know what they are but can't ignore them completely
	int a, b, x, y, l3, zz; 	
	

	while (TRUE) {
		//change values of a,b,x,y,z and, zz based on input from explore.exe
		scanf("%d,%d,%d,%d,%d,%d", &a, &b, &x, &y, &l3, &zz);
		//print output of buttons() based on a,b,x,y
		printf("Buttons Pressed: %d\r", buttons(a, b, x, y, l3));
		
		fflush(stdout);
	}

return 0;
}

//function to return # of buttons pressed
int buttons(int a, int b, int x, int y, int l3){
	int button= 0;
	if(a==1){
		button = button + 1;
	}
	if(b==1){
		button = button + 1;
	}
	if(x==1){
		button = button + 1;
	}
	if(y==1){
		button = button + 1;
	}
	if(l3==1){
		button = button + 1;
	}
	return button;
}