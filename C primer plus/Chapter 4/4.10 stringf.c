#include<stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);

	char name[40] = "Authentic";
	float cash = 123.456;

	printf("The %s family just may be $%.2f dollars richer!\n",
		name, cash);

	return 0;
}