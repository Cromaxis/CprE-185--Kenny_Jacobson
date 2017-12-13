//Author: Kenneth A. Jacobson
//Name: Lab 7
//Description: Rework of Lab 6 with functions
//27.10.2017

#include <stdio.h>
#include <math.h>

#define TRUE 1

//Function Prototypes
double mag(double, double, double);

int minutes(int);
int seconds(int);
int millis(int);


int main(void) {
    /* DO NOT MODIFY THESE VARIABLE DECLARATIONS */
	int t;
	double  ax, ay, az; 	


	while (TRUE) {
		scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az);	

/* CODE SECTION 0 */
		printf("Echoing output: %d, %lf, %lf, %lf\n", t, ax, ay, az);

// 	CODE SECTION 1 
		printf("At %d ms, the acceleration's magnitude was: %lf\n", 
			t, mag(ax, ay, az)); //*/
// 	CODE SECTION 2
		printf("At %d minutes, %d seconds, and %d milliseconds it was: %lf\n", 
		minutes(t), seconds(t), millis(t), mag(ax,ay,az)); //*/

	}

return 0;
}

//Returns magnitude of values from main
double mag(double ax, double ay, double az){
	return sqrt(pow(ax,2)+pow(ay,2)+pow(az,2));
}

/* Functions to return time in a readable way */

	//return minutes
	int minutes(int t){
		t= t/1000;
		return t/60;
	}

	//return seconds
	int seconds(int t){
		t= t/1000;
		return t%60;
	}

	//return milliseconds
	int millis(int t){
		return t-(minutes(t)*60*1000)-(seconds(t)*1000);
	}
