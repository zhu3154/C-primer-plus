#include<stdio.h>
#define DUNBAR 150
int main(void)
{
	int friends = 5;
	int weeks = 0;


	printf("weeks     friends\n");
	for (weeks = 0; friends < DUNBAR; weeks++)
	{
		printf("%d% 8d\n", weeks, friends);
		friends -= weeks + 1;
		friends *= 2;
	}

	return 0;
}