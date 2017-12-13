//Author: Kenneth A. Jacobson
//Description: Display magnitude of acceleration from Esplora unit
//Lab6
//13.10.2017

#include <stdio.h>
#include <math.h>

#define TRUE 1


int main(void) {
    /* DO NOT MODIFY THESE VARIABLE DECLARATIONS */
	int t;
	double  ax, ay, az; 	

	//Your other variable declarations below
	double time;				double sample0= 0.0, sample1= 0.0;
	double accl;				int minutes, seconds, millis;
	double tolerance = .02;	double avemag= .987, sampleSum;
	double sample2= 0.0;		double sample3= 0.0, sample4= 0.0;
	int i= 0;
	
	while (TRUE) {
		scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az);	

//CODE SECTION 0
// modify the printf below for appropriate formatted output
		
		time = (double) t/1000.0;
		printf("Echoing output: %8.3lf, %+7.4lf, %+7.4lf, %+7.4lf\n", time, ax, ay, az);

//CODE SECTION 1 
// declare appropriate variable type for accl
//write an expression to compute accl, see Lab handout
		accl = sqrt(pow(ax,2.0)+ pow(ay,2.0)+ pow(az,2.0));
		
		//printf("At %8d ms, the acceleration's magnitude was: %lf\n", 
		//	t, accl);  
			
//CODE SECTION 2
// Convert the time expressed in milliseconds in variable t into
// three parts - minutes, seconds and milliseconds
// declare appropriate variables for each of the three parts - minutes, seconds, millis

		minutes = time/60.0;
		seconds = (int) time % 60;
		millis = t - (seconds*1000) - (minutes*60*1000);
		
		
		printf("At %d minutes, %d seconds, and %d milliseconds it was: %lf\n", 
		minutes, seconds , millis, accl); 

//CODE SECTION 3
//Interpret magnitude to return human-friendly strings
		//change sampled values and compute average magnitude
		
			sample4 = sample3;
			sample3 = sample2;
			sample2 = sample1;
			sample1 = sample0;
			sample0 = accl;
			sampleSum = sample0+ sample1+ sample2+ sample3+ sample4;
			avemag = sampleSum/5;
		
	
		/*test statement
		if(i=5){
		printf("s0: %.3lf, s1: %.3lf, s2: %.3lf, s3: %.3lf, s4: %.3lf\n", sample0, sample1, sample2, sample3, sample4);
		printf("accl: %.3lf, avemag: %.3lf\n", accl, avemag);
		return 0;
		}*/
		
		if(fabs(accl-avemag) > tolerance && (accl-avemag)> 0){
			printf("Speeding Up\n");
			
		}
		else if(fabs(accl-avemag) > tolerance && (accl-avemag)< 0){
			printf("Slowing Down\n");
			
		}
		else{
			printf("Constant Acceleration\n");
			
		} 		
		
	}
return 0;
}



