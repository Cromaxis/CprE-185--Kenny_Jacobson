//Author: Kenneth A. Jacobson
//Name: Lab 9
//Description: Code responses for an Esplora Unit dropped
//3.11.2017

#include <stdio.h>
#include <math.h>

#define G 9.8	//Gravitational Acceleration on Earth
#define TOL .6	//tolerance of mag at a standstill
#define STL 1	//Value of mag when at a standstill ish
#define K 10	//Value of interval
double magnitude(double, double, double);
double position(double);

void main(void){
	
	int t, ti, tf;
	double ax, ay, az, mag, time;
	int cont = 1;
	
	//printf("How large should the Interval be? ");
	//	scanf("%d", &interval);
	
	printf("**Recieving Data**\n");
	printf("\tI'm Waiting");
	fflush(stdout);
	
	while(cont){
		scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az); //read in data from esplora
		mag = TOL+ magnitude(ax, ay, az);
		fflush(stdout);
		if(STL < mag){
			printf("\n\t\tHelp! I'm falling");
			ti=t;
			cont = 0;
			
			while(STL < mag){
				
				if(t%K == 0){
					printf("!");
				}
				
				scanf("%d,%lf,%lf,%lf", &t, &ax, &ay, &az);
				mag = TOL+ magnitude(ax, ay, az);
			}
			
			tf=t;
			printf("\n");
			
		}	
		else if(t%K == 0){
			printf(".");
		}
	}
	
	time = (tf-ti)/1000.0;	//convert time in ms to time in s
	printf("Ouch! I fell %.3lf meters in %.3lf seconds.", position(time), time);
	
	
	
}

double magnitude(double ax, double ay, double az){
	return sqrt(pow(ax, 2.0)+pow(ay, 2.0)+pow(az, 2.0));
}	

double position(double time){
	return (.5*G*pow(time, 2.0));	
}	