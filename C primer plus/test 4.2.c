#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[30] = { 0 };
	int l_str;
	printf("Please enter your name:\n");
	scanf_s("%s", name, 30);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n", name);
	l_str = strlen(name);
	printf("%*s\n", l_str + 3, name);

	return 0;
}