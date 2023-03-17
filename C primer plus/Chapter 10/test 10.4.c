// 返回double数组最大值的下标
#include <stdio.h>
int re_double(double db[], int n);

int main(void)
{
    int m;

    double ar[10] = {1.3, 2.2, 5.3, 1.4, 2.5, 1.2, 3.3, 2.1, 4.1, 0.3};
    m = re_double(ar, 10);
    printf("max = %d", m);

    getchar();
    return 0;
}

int re_double(double db[], int n)
{
    int i;
    int m = 0;
    double max = 0;

    for (i = 0; i < n; i++)
    {
        if (max < db[i])
        {
            max = db[i];
            m = i;
        }
    }

    return m;
}