/*
Name: Ariri Boniface
Reg No: PA106/G/28780/25
Description: volume and surface area
*/
#include <stdio.h>
int main () {
	float height, radius, volume, SA, pi;
	
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	printf("Enter height: ");
	scanf("%f", &height);
	
	printf("Enter pi: ");
	scanf("%f", &pi);
	
	volume = pi * radius * radius * height ;
	SA = pi * radius * radius + pi * radius * radius +  pi * radius * height + pi * radius * height ;
	
	printf ("The volume is %f ", volume);
	printf ("The SA is %f ", SA);
	
	return 0;
	
	}/*
Name: Ariri Boniface

*/
