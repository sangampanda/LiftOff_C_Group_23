#include<stdio.h>

int main()
{
	float const pi = 3.142;
	float radius , circumference , diameter , area;
	printf("Enter the radius: ");
	scanf("%f" , &radius);
	
	diameter = 2*radius;
	circumference = 2*pi*radius;
	area = pi*radius*radius;
	
	printf("The diameter is: %.2f\n" ,diameter);
	printf("The circumference is: %.2f\n" ,circumference);
	printf("The area is: %.2f\n" ,area);
	
	return 0;
	
}