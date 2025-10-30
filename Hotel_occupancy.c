/* 
Name:Derrick Mathenge
Regno:CT100/26181/25
Description:Hotel_occupancy
*/
#include <stdio.h>
#include <stdlib.h>   
#include <time.h>    

int main() {
    int occupancy[5][10];
    int floor, room;

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random 0s and 1s
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 = vacant, 1 = occupied
        }
    }

    // Display occupancy data
    printf("Room Occupancy Data (1 = occupied, 0 = vacant):\n");
    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
        }
        printf("\n");
    }

    return 0;
}
