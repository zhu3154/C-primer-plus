#include<stdio.h>
int main(void)
{
	float sum1, sum2;
	int i;

	for (i = 0, sum1 = 100.0, sum2 = 100.0;
		sum1 >= sum2;)
	{
		i++;
		sum1 += 100 * 0.10;
		sum2 *= 1.05;
	}
	printf("%d years %10.4f <%10.4f", i, sum1, sum2);

	return 0;
}