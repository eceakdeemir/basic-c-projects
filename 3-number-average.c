#include <stdio.h>

int main()
{
	float a, b, c, average;
	printf("Enter the 3 numbers you want the average of: ");
	scanf("%f %f %f",&a,&b,&c);
	average = (a + b + c) / 3;
	printf("Average: %.2f",average);
}
