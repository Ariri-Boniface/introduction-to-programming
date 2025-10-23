/*
Name: Ariri Boniface
Reg No:PA106/G/28780/25
Description:
*/
#include<stdio.h>

double calculateElectricBill(int unit){
	double Bill;
	if (unit <= 100) {
	Bill = unit*10;	
	}
	else if(unit > 100 && unit<= 200){
		Bill = (unit-100)*15 + (100*10);
	}
	else  {
		Bill = (unit-200)*20 + (200*15) +(100*10);
	}
	return Bill;
}

int main () {
	int unit;
	double totalBill;
	
	printf("Enter number of units used " );
	scanf("%d", &unit);
	
	totalBill = calculateElectricBill(unit);
	printf("Total bill used is KSH %.2f", totalBill);
	
	return 0;
}