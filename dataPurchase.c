/*
Name:
Reg No:
Description:
*/
#include <stdio.h>
int main() {
	int option;
	printf ("1. 100 MB - Ksh 50\n");
	printf ("2. 500 MB - Ksh 200\n");
	printf ("3. 1 GB - Ksh 350\n");
	printf ("4. 2 GB - Ksh 600\n");
	
	printf ("Enter your choice 1-4\n");
	scanf("%d", &option);
	
	switch(option){
	case 1:
	printf ("You selected option 1 100 MB - Ksh 50\n");
	break;
    
    case 2:
	printf ("You selected option 2 500 MB - Ksh 200\n");
	break;

    case 3:
	printf ("You selected option 3 1 GB - Ksh 350\n");
	break;

    case 4:
	printf ("You selected option 4 2 GB - Ksh 600\n");
	break; 

    default:
	printf("Invalid choice. Try again");
}	 
	
return 0;	
}