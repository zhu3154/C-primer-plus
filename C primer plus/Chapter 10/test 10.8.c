// 拷贝数组中的一部分
#include <stdio.h>
void print_double(double db[], int n);
void copy_arr(double db[], double source[], int n);

int main(void)
{
    double source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double ar[3];

    copy_arr(ar, source + 2, 3);
    print_double(ar, 3);

    getchar();
    return 0;
}

void print_double(double db[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%-3g ", db[i]);
    putchar('\n');
}

void copy_arr(double db[], double source[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        db[i] = source[i];
}