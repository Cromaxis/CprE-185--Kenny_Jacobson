/***********************************************/
/************ CPRE 185 - Lab 2 *****************/
/***********************************************/
/********** Author – Kenny Jacobson ************/
/************* Lab section – C *****************/
/********** Date started – 9/8/2017 ************/
/** Comments –  Area calculator w/ user input **/
/***********************************************/

#include <stdio.h>

int main(int argc, char* argv[]){
	int w,h;
	printf("Enter a width value: ");
		scanf("%d", &w);
	printf("\nEnter a height value: ");
		scanf("%d", &h);
	printf("\nA %d by %d rectangle's area is %d.\n",w,h,w*h);
	return 0;
}