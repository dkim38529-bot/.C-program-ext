/*
Name:Derrick Mathenge
Reg no: CT100/26181/25
Description: Bank loan
*/
#include <stdio.h>
int main(){
    int age;
    float amount;
    
    printf("Enter age:");
    scanf("%d", &age);
    
    printf("Enter salary:");
    scanf("%f", &amount);
    
    if(age >= 21 && amount >= 21000){
        printf("Congratulations, you qualify for a loan");
        }
        else{
            printf("Unfortunately, we are unable to offer you a loan at this time");
            }
    return 0;
    }