#include <stdio.h>
#define PI 3.14159265359

int main()
{
	float r;
	printf(" Introduza o raio da circunferencia : ");
	scanf("%f", &r);
	double area = PI * r * r;
	double perimetro = 2 * PI * r;
	printf(" Area = %f, Perimetro = %f\n", area, perimetro);
}
