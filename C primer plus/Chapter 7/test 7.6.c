#include<stdio.h>
int main(void)
{
	char ch;
	char prev_ch = 0;
	int i = 0;

	printf("Enter some characters(# to quit):\n");
	while ((ch = getchar()) != '#')
	{
		if (prev_ch == 'e' && ch == 'i')
			i++;
		prev_ch = ch;
	}
	printf("Times of 'ei': %2d\n", i);

	return 0;
}