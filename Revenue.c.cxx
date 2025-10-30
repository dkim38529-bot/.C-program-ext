/*
Name:Derrick Mathenge
Regno:CT100/26181/25
Description:Array_weekly_tracker
*/

#include<stdio.h>
int main(){
    int sum=0;
    float average;
    int r;
    int revenue[7]={500,1000,2000,2500,3000,3500,4000 } ;
    for(r=0 ; r<7 ; r++){
        printf("%d\n",revenue[r]);
       
       
        sum+=revenue[r];
        average=sum / 7.0;
        
    }
    printf("The total weekly revenue= %d \n",sum);
    
    
    printf("The average daily revenue= %.2f \n",average);
    
    
    return 0;
}
        
        
        
