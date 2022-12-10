#include<stdio.h>
int main(void)
{
	char first_name[30];
	char last_name[30];

	printf("Please enter your first name:\n");
	scanf_s("%s", first_name, 30);
	printf("Please enter your last name:\n");
	scanf_s("%s", last_name, 30);
	printf("Well,your full name is %s,%s.",
		first_name, last_name);

	return 0;
}