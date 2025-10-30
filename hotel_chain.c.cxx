/*
Name:Derrick Mathenge
Regno;CT100/26181/25
Description:3d_array_hotel_chain
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int occupied = 0;
    int vacant = 0;
    int room[3][5][10];
    
    for(int i = 0; i < 3; i++) {          
        for(int j = 0; j < 5; j++) {      
            for(int k = 0; k < 10; k++) { 
                room[i][j][k] = rand() % 2;
                if (room[i][j][k] == 1){
                    occupied++;
                }
                else{
                    vacant++;
                }
            }
        }
    }
    
    printf("\nNumber of Occupied rooms: %d", occupied);
    printf("\nNumber of Vacant rooms: %d", vacant);
    
    for(int i = 0; i < 3; i++) {
        printf("\n\nBranch %d:\n", i+1);
    for(int j = 0; j < 5; j++) { 
        printf("\nFloor %d:", j+1);
        for(int k = 0; k < 10; k++) { 
            printf("%d ",room[i][j][k]);
        }
    }
}
    
    return 0;
}