/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Water charges
*/
#include<stdio.h>
int main(){
	int unit;
	float Kes,bill;
	
	
	printf("Enter water units consumed:");
	scanf("%d",&unit);
	if(unit >= 0 && unit <= 30){
	    Kes=20;
	}
	else if (unit >= 31 && unit <= 60){
	    Kes=25;
	}
	else if(unit > 60){
	    Kes=30;
	}
	 bill=unit*Kes;
	printf("Total water billed is: %.2f Kes\n",bill);
	return 0;
}
	
