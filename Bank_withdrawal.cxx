/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Using a while loop
*/

#include<stdio.h>
int main(){
    int amount;
    int balance=2000 ;
    printf("Your current balance is %d\n",balance);
    while (balance>0)
    {
        printf("Enter amount to withdraw\n");
        scanf("%d",&amount);
        balance -=amount;
        printf("Balance:%d\n",balance);
    }
    printf("Insufficient balance");
    return 0;
}

	
