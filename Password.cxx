/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Password
*/
#include<stdio.h>
int main(){
    int password;
    
    do{
        printf("Enter your password:\n");
        scanf("%d,",& password);
        
        if(password==3560)
        {
            printf("Access granted\n");
           } else {
                printf("Incorrect password\n");
            }
            
        } while (password == 3560);
        
        return 0;
    }
        
            

	
