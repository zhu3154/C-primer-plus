#include<stdio.h>
#include<float.h>
int main(void)
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;

	printf("%.6f\n%.6f\n", a, b);
	printf("%.12f\n%.12f\n", a, b);
	printf("%.16f\n%.16f\n", a, b);
	printf("%d\n%d\n", FLT_DIG, DBL_DIG);

	return 0;
}