//ÇóÄ£ÔËËã
#include<stdio.h>
int main(void)
{
	int num1, num2;

	printf("This program computes moduli.\n");
	printf("Enter an integer to as the second oprend: ");
	scanf_s("%d", &num2);
	printf("Now enter the first oprend: ");
	scanf_s("%d", &num1);
	while (num1 > 0)
	{
		printf("%d %% %d is %d\n", num1, num2, num1 % num2);
		printf("Enter the next number for first oprend (<=0 to quit): ");
		scanf_s("%d", &num1);
	}
	printf("Done");

	return 0;
}