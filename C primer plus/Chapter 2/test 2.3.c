#include<stdio.h>
int main(void)
{
	int age;
	int days;

	age = 27;
	days = age * 365;
	printf("There are %d days in %d years old.", days, age);

	return 0;
}