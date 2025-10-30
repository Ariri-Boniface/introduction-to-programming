/*
NAME: BONIFACE ARIRI
REG NO: PA106/G/28780/25
*/
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int chain[3][5][10];  
    int branch, floor, room;
    int occupied = 0;

    srand(time(0));
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;  
            }
        }
    }
     for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1)
                    occupied = occupied + 1;
            }
        }
    }
    
    printf("Total occupied rooms across all branches: %d\n", occupied);

    return 0;
}
