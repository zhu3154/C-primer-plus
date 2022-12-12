#include<stdio.h>
int main(void)
{
	int num1, num2;		//输入的两个整数
	int snum, bnum;	    //小数、大数
	long square, cubic;

	printf("Enter two integer number:\n");
	scanf_s("%d%d", &num1, &num2);
	snum = (num1 <= num2) * num1 + (num2 <= num1) * num2;
	bnum = (num1 <= num2) * num2 + (num2 <= num1) * num1;
	printf("From %d to %d :\n", snum, bnum);
	printf("num     square      cubic\n");
	do
	{
		square = (long)snum * snum;
		cubic = (long)snum * snum * snum;
		printf("%3d %10ld %10ld\n", snum, square, cubic);
		snum++;
	} while (snum <= bnum);

	return 0;
}