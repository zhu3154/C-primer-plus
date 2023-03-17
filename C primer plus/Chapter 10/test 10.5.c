// 返回double数组最大值与最小值差值
#include <stdio.h>
double diff_of_max_min(const double db[], int n);

int main(void)
{
    double diff;

    const double db[10] = {1.1, 2.2, 3.3, 4.4, 5.5, -1.2, -2.3, -3.4, -4.5, -5.6};
    diff = diff_of_max_min(db, 10);
    printf("diff = %g", diff);

    getchar();
    return 0;
}

double diff_of_max_min(const double db[], int n)
{
    int i;
    double max = db[0];
    double min = db[0];

    for (i = 0; i < n; i++)
    {
        max = (max > db[i]) ? max : db[i];
        min = (min < db[i]) ? min : db[i];
    }

    return max - min;
}