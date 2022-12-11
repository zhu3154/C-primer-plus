#include<stdio.h>
int main(void)
{
	float height_in;
	char name[40];

	printf("Please enter your height and name:\n");
	scanf_s("%f %s", &height_in, name, 40);
	printf("%s,you are %.3f feet tall\n", name, height_in / 12);

	return 0;
}