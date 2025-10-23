/*
Name: Ariri Boniface
Reg No: PA106/G/28780/25
description:
*/

#include <stdio.h>

double calculateFare(double kilometer){
	double fare;
	fare = kilometer * 50;
	return fare;
}

int main () {
	double kilometer;
	double totalFare;
	
	printf ("Enter distance travelled " );
	scanf  ("%lf", &kilometer);
	
	totalFare = calculateFare(kilometer);
	printf("Total fare is KSH %.2lf", totalFare);
	
	return 0 ;
}