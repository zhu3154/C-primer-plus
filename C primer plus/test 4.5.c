#include<stdio.h>
int main(void)
{
	float speed;
	float size;

	printf("Please enter your networspeed in Mb/s:\n");
	scanf_s("%f", &speed);
	printf("Please enter your file size in MB:\n");
	scanf_s("%f", &size);
	printf("At %.2f megabits per second,a file of %.2f megabytes\n"
		"downloads in %.2f seconds.", speed, size, size * 8 / speed);

	return 0;
}