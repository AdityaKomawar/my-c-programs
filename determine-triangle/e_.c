#include <stdio.h>

int main()
{
	float a, b, c;
	printf("Enter three sides of a triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
		printf("It is right angled triangle.");
	else if(a == b && a == c)
		printf("It is equilateral triangle.");
	else if(a == b || a == c || b ==c)
		printf("It is isosceles triangle.");
	else
		printf("It is scalene triangle.");
}
