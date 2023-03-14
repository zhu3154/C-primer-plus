/* 将三个变量按从小到大重新赋值 */
#include <stdio.h>
void xyz(double *pa, double *pb, double *pc); // 根据输入值按从小到大赋值

int main(void)
{
    double x, y, z;

    printf("输入三个数给x,y,z赋值，程序将按从小到大重新给他们赋值\n");
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    printf("z = ");
    scanf("%lf", &z);
    printf("初始 x = %-10g, y = %-10g, z = %g\n", x, y, z);
    xyz(&x, &y, &z);
    printf("现在 x = %-10g, y = %-10g, z = %g\n", x, y, z);

    getchar();
    getchar();

    return 0;
}

void xyz(double *pa, double *pb, double *pc)
{
    double x, y, z;

    z = (*pa >= *pb) ? *pa : *pb;
    if (*pc >= z)
    {
        y = z;
        z = *pc;
        x = (*pa <= *pb) ? *pa : *pb;
    }
    else
    {
        x = (*pa <= *pb) ? *pa : *pb;
        if (*pc <= x)
        {
            y = x;
            x = *pc;
        }
        else
            y = *pc;
    }

    *pa = x;
    *pb = y;
    *pc = z;
}