/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Data bundles package
*/

#include<stdio.h>
int main(){
    int bundle;
    
    printf("Select data bundle:");
    printf("\n 1. 100MB @ 50 Kes");
    printf("\n 2. 500MB @ 200 Kes");
    printf("\n 3. 1GB @ 350 Kes");
    printf("\n 4. 2GB @ 600 Kes\n");
    scanf("%d",&bundle);
    
    switch(bundle){
        case 1:
        printf("You selected 100MB. Cost=50Kes");
        break;
        
        case 2:
        printf("You selected 500MB.Cost=200Kes");
        break;
        
        case 3:
        printf("You selected 1GB.Cost=350");
        break;
        
        case 4:
        printf("You selected 2GB.Cost=600");
        break;
        
        default:
        printf("Invalid request.Please try again.");
    }
    return 0;
}
        

