/*
Name:Derrick Mathenge
Reg no: CT100/26181/25
Description: Volume And Surface area of a cylinder
*/


#include<stdio.h>
int main() {
    int height;
    int radius;
    double volume;
    double surface;
    printf("enter height:");
    scanf("%d",&height);
    
    printf("\n enter radius:");
    scanf("%d",&radius);
    
    volume=3.142*radius*radius*height;
    
    surface=(2*3.142*radius*radius + 2*3.142*radius*height);
    
    printf("volume:%lf",volume);
    printf("\nsurface:%lf",surface);
	
return 0;
}