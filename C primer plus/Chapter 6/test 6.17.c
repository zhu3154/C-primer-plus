#include<stdio.h>
int main(void)
{
	int years;
	float money = 100.0f;

	for (years = 0; money > 0; years++)
		money = money * 1.08f - 10.0f;
	printf("after %d years\n", years);
	printf("$%.2f for the last year.", money + 10.0f);

	return 0;
}
