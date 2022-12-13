#include<stdio.h>
#include<string.h>
int main(void)
{
	char word[20] = { 0 };
	int i, l;		//计数，单词长度

	printf("Enter a word:\n");
	scanf_s("%s", word, 20);
	l = strlen(word);
	printf("Output:\n");
	for (i = l - 1; i >= 0; i--)
		printf("%c", word[i]);
	printf("\nDone!\n");

	return 0;
}