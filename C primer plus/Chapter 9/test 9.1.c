/* 返回两个double类型的较小值 */
#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x, y, m;

    printf("输入两个浮点数，程序将返回较小值\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        m = min(x, y);
        printf("较小的为：%g\n", m);
        printf("继续输入，输入非数字退出\n");
    }

    return 0;
}

double min(double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}