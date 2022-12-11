#include<stdio.h>
#include<string.h>
int main(void)
{
	char first_name[30] = { 0 };
	char last_name[30] = { 0 };
	int l_first;
	int l_last;

	printf("Please enter your first name:\n");
	scanf_s("%s", first_name, 30);
	printf("Please enter your last name:\n");
	scanf_s("%s", last_name, 30);
	printf("%s %s\n", first_name, last_name);
	l_first = strlen(first_name);
	l_last = strlen(last_name);
	printf("%*d %*d\n", l_first, l_first, l_last, l_last);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d\n", l_first, l_first, l_last, l_last);

	return 0;
}