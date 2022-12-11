#include<stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	int xp;
	char name[30];

	printf("Pleaes enter your first name.");
	scanf_s("%s", name, 30);
	printf("All right,%s,what't your age?\n", name);
	scanf_s("%d", &age);
	xp = age + X;
	printf("That's a %s!You must be at least %d.\n",
		B, xp);

	return 0;
}