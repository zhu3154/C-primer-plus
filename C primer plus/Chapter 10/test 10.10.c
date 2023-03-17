// 两个数组对应相加并赋值给第三个数组
#include <stdio.h>
void array_add(const double ar1[], const double ar2[], double ar3[], int n);
void print_double(double db[], int n);

int main(void)
{
    double ar1[4] = {2, 4, 5, 8};
    double ar2[4] = {1, 0, 4, 6};
    double ar3[4];

    array_add(ar1, ar2, ar3, 4);
    print_double(ar3, 4);

    getchar();
    return 0;
}

void array_add(const double ar1[], const double ar2[], double ar3[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        ar3[i] = ar1[i] + ar2[i];
    }
}

void print_double(double db[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%-3g ", db[i]);
    putchar('\n');
}