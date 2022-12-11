#include<stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{
	double distk, distm;	//���룬��λ�ֱ�Ϊ���Ӣ��
	double rate;			//ƽ���ٶȣ�Ӣ��/Сʱ
	int min, sec;			//�ܲ���ʱ�����ӣ���
	int time;				//�ܲ���ʱ����
	double mtime;			//��ÿӢ��
	int mmin, msec;		//�֣���ÿӢ��

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and your average\n");
	printf("speed in miles per hour");
	printf("Please enter,in kilometers,the distance run.\n");
	scanf_s("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf_s("%d", &min);
	printf("Now enter the seconds.\n");
	scanf_s("%d", &sec);

	time = S_PER_M * min;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;

	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
		distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, ",
		mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
		rate);

	return 0;

}