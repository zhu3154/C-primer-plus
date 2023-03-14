/* 把两个浮点数同步为两个中较大的值 */
#include <stdio.h>
void larger_of(double *x, double *y);

int main(void)
{
    double x, y;

    printf("输入两个数，程序会将他们改为较大值\n");
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    printf("程序执行前，x = %-10g,y = %g\n", x, y);
    larger_of(&x, &y);
    printf("程序执行后，x = %-10g,y = %g\n", x, y);

    getchar();
    getchar();

    return 0;
}

void larger_of(double *x, double *y)
{
    if (*x < *y)
        *x = *y;
    else
        *y = *x;
}