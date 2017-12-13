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
	int w,h,d;
	printf("Enter a width value: ");
		scanf("%d", &w);
	printf("Enter a height value: ");
		scanf("%d", &h);
	printf("Enter a depth value: ");
		scanf("%d", &d);
	printf("\nA %d by %d by %d rectangular prism's volume is %d.\n",w,h,d,w*h*d);
	return 0;
}