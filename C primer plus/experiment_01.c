#include<stdio.h>
int main(void)
{
	int x;
	int y;

	x = 6 + (y = 5);
	printf("x = %d, y = %d", x, y);

	return 0;
}