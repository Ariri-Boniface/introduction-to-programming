/*
NAME: ARIRI BONIFACE
REG NO: PA106/G/28780/25
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];  
    int floor, room;
    int occupied, vacant;

    
    printf("Enter occupancy data (1 = occupied, 0 = vacant):\n");
    for(floor = 0; floor < 5; floor++) {
        printf("\nFloor %d:\n", floor + 1);
        for(room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

   
    printf("\n--- Occupancy Report ---\n");
    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied = occupied + 1;
            else
                vacant = vacant + 1;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
