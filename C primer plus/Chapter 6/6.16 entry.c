#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	printf("to enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number: ");
	scanf_s("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("to enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf_s("%d", &code_entered);
	}
	printf("Congratulations! You are crued!\n");

	return 0;
}