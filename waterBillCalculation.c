/*
Name: ARIRI BONIFACE
Reg No: PA106/G/28780/25
Description: A water bill calculation program
*/
#include<stdio.h>
int main () {
	float units, totalBill;
	printf ("Enter water units consumed: ");
	scanf ("%f", &units);
	
	if (units <= 30){
		totalBill = units * 20;
	} else if(units <=60)
	{
	    totalBill = units * 25;
	}else
	{
		totalBill = units * 30;	
	}
	printf("totalBill = %.2f", totalBill);
	return  0;
}