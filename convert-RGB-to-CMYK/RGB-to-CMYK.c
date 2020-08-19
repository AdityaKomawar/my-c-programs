#include <stdio.h>

int main()
{
	float R, G, B;
	float C, M, Y, K, W, r, g, b, max;
	printf("Enter the RGB value: ");
	scanf("%f %f %f", &R, &G, &B);
	r = R / 255;
	g = G / 255;
	b = B / 255;
	(R >= G && R >=B) ? (max = r) : ((G >= R, G >= B)) ? max = g: (max = b);
	W = max;
	K = 1 - W;
	C = 1 - r / W;
	M = 1 - g / W;
	Y = 1 - b / W;
	printf("\n(R, G, B) = (C, M, Y, K)");
	printf("\n(%f, %f, %f) = (%f, %f, %f, %f)", R, G, B, C, M, Y, K);
}
