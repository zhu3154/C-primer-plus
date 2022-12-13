#include<stdio.h>
int main(void)
{
	double a[8], b[8];
	int i = 0;
	int n = 0;

	printf("Enter some numbers:\n");
	while ((i += scanf_s("%lf", &a[i])) < 8)
	{
		b[i - 1] = n += a[i - 1];
		printf("Continue enter:\n");

	}
	printf("Enough.\n\nOutput:\n");

	b[7] = b[6] + a[7];
	for (i = 0; i < 8; i++)
		printf("%10.3f", a[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%10.3f", b[i]);

	return 0;
}