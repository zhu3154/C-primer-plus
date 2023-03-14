/* 调和平均数计算 */
#include<stdio.h>
double harmonic_mean(double x, double y);

int main(void)
{
    double x,y,mean;

    printf("输入两个浮点数，程序将计算它们的调和平均数\n");
    scanf("%lf %lf", &x, &y);
    mean = harmonic_mean(x, y);
    printf("%g与%g的调和平均数为：%g\n",x, y, mean);

    getchar();
    getchar();

    return 0;
}

double harmonic_mean(double x, double y)
{
    return (double)1/(((double)1/x+(double)1/y)/(double)2);
}