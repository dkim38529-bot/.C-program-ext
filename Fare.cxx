/*
Name:Derrick Mathenge
Reg no:CT100/26181/25
Description:Calculate_Fare
*/

#include <stdio.h>
int calculateFare(float distance);

int main()
{
    int sum;
    float distance;

    printf("Enter distance travelled in kilometers: ");
    scanf("%f", &distance);

    sum = calculateFare(distance);

    printf("The total fare billed is = KES %d\n", sum);
    return 0;
}

int calculateFare(float distance)
{
    int sum = distance * 50;
    return sum;
}
	
