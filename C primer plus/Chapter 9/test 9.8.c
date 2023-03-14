/* 计算一个数的整数次幂 */
#include <stdio.h>
double power(double num, int p);

int main(void)
{
    double num;
    int p;
    double pow;

    printf("计算一个数的幂\n");
    printf("输入幂的底数：");
    scanf("%lf", &num);
    printf("输入幂的幂次：");
    scanf("%d", &p);
    pow = power(num, p);
    printf("%g 的 %d 次幂为 %g", num, p, pow);

    getchar();
    getchar();

    return 0;
}

double power(double num, int p)
{
    double pow = 1;
    int i;

    if (p > 0)
        for (i = 1; i <= p; i++)
            pow *= num;
    else if (p == 0)
    {
        pow = 1;
        if (num == 0)
            printf("0的0次幂未定义，把该值处理为1\n");
    }
    else
        for (i = 1, num = 1 / num,
            p = -p;
             i <= p; i++)
            pow *= num;

    return pow;
}