#include<stdio.h>
int main(void)
{
	float b;//��
	float pt;//Ʒ��
	float as;//��˾
	float dts;//������
	float cs;//����

	printf("Please enter the number of cups; ");
	scanf_s("%f", &b);
	pt = b / 2;
	as = b * 8;
	dts = as * 2;
	cs = dts * 3;
	printf("%fpt\n%fas\n%fts\n%fcs", pt, as, dts, cs);

	return 0;
}