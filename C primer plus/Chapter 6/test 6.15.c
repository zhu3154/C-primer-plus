#include<stdio.h>
int main(void)
{
	char ch[256];
	int n = 0;
	ch[1] = 0;

	printf("Enter a line of characters:\n");
	scanf_s("%c", &ch[0], 1);
	while ( ch[n]!= '\n')
	{
		n++; 
		scanf_s("%c", &ch[n], 1);
	}
	for (n--; n >= 0; n--)
		printf("%c", ch[n]);
	printf("\nDone!");

	return 0;
}