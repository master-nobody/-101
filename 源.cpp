#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, x1, x2, s, x0;
	printf("Please input three points: ");
	scanf("%f%f%f", &a, &b, &c);
	if (a != 0)
	{
		s = pow(b, 2) - (4 * a * c);
		x1 = ((-b) + sqrt(pow(b, 2) - (4 * a * c)));
		x2 = ((-b) - sqrt(pow(b, 2) - (4 * a * c)));
		if (s > 0)
			printf("x1=%f,x2=%f", x1, x2);
		else if (s = 0)
			printf("x1=x2=%f", x1);
		else
			printf("ÎÞÊµ¸ù");


	}
	else
		x0 = (-c) / b;
	printf("x0=%f",x0)
}