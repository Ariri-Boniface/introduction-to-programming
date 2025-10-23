/*
Name: Ariri Boniface
Reg No: PA106/G/28780/25
Description:
*/
#include <stdio.h>

float convertToCelcius(int F){
	float C;
	C = (F - 32) * 5.0 / 9.0 ;
	return C;	
}

int main(){
	
	float temperature;
	int F;
	
	printf ("Enter Farenheits F ");
	scanf ("%d", &F);
	
	temperature = convertToCelcius(F);
	printf("Temperature in celcius is %.2f", temperature);
	
	return 0;
	
	
}