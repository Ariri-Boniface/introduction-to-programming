/*
Name: ARIRI BONIFACE
Reg No: PA106/G/28780/26
Description: A program to check student exam legibity
*/
#include <stdio.h>
int main () {
	float attendance, averageMarks;
printf ("Enter Attendance: ");
scanf ("%f", &attendance);

printf ("Enter average marks ");
scanf ("%f", &averageMarks);

if (attendance >= 75 && averageMarks >= 40) {
printf("Legible for exams");
} else
{
printf("Not legible for exams");	
}
return 0;	
}