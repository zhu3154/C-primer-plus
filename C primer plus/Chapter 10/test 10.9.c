// 打印、拷贝变长二维数组
#include <stdio.h>
void print_NxM(int n, int m, double db[][m]);
void copy_NxM(int n, int m, double db[][m], double source[][m]);

int main(void)
{
    double db35[3][5] = {
        {1.2, 2.1, 3.4, 4.1, 5.8},
        {2.4, 2.6, 2.6, 2.5, 2.1},
        {3.6, 3.8, 3.4, 3.6, 3.2}};
    double ar2[3][5];

    print_NxM(3, 5, db35);
    copy_NxM(3, 5, ar2, db35);
    print_NxM(3, 5, ar2);

    getchar();
    return 0;
}

void print_NxM(int n, int m, double db[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%-4g ", db[i][j]);
        }
        putchar('\n');
    }
}

void copy_NxM(int n, int m, double db[][m], double source[][m])
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            db[i][j] = source[i][j];
        }
    }
}