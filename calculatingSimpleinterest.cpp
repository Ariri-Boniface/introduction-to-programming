/*
Name: ARIRI BONIFACE
Reg No:PA106/G/28780/25
Description: computing simple interest
*/
#include <stdio.h>

int main () {
	float principle, rate, time, simpleinterest;
	
	printf("\nEnter principle: ");
	scanf("%f", &principle);
	
    printf("\nEnter rate: ");
	scanf("%f", &rate);
	
    printf("\nEnter time: ");
	scanf("%f", &time);
	
	simpleinterest = (principle * rate * time)/100 ;
	
	printf("The simpleinterest is %f", simpleinterest);
	
	
return 0;
}