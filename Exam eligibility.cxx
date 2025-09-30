/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Exam eligibility
*/
#include<stdio.h>
int main (){
    float attendance;
    int marks;
   
    printf("enter attendance percentage:");
    scanf("%d",& attendance);
    
    printf("enter average marks:");
    scanf("%d",& marks);
    
    if(attendance >= 75.0 && marks >= 40){
    printf("you are eligible for exams");
    }
    else {
        printf("you are not eligible for exams");
    }
    return 0;
}
    

	
