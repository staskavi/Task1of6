#include<stdio.h>

int main()
{
	const float  PI = 3.14159;
	float radius = 15;
	float perimeter = 0;
	float area = 0;
	perimeter = 2 * PI * radius;
	area = PI * (radius * radius);
	printf("The perimeter is %f\n", perimeter);
	printf("The area is %f", area);
	return 0;
}