#include <stdio.h>

int main()
{
	float a, b, c, x;
	printf("Enter the sides of a triangle: ");
	scanf("%f %f %f", &a, &b, &c);
	if(a > c)
	{
		x = a;
		a = c;
		c = a;
	}
	if(b > c)
	{
		x = b;
		b = c;
		c = x;
	}	
	(a*a + b*b >= c*c) ?
	printf("Sides of a triangle are valid.") :
	printf("Sides of a triangle are invalid.");
	return 0;
}
