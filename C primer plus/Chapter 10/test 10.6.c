// 把double数组中数据倒序排列
#include <stdio.h>
void reverse_double(double db[], int n);
void print_double(double db[], int n);

int main(void)
{
    double source[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    print_double(source, 6);
    reverse_double(source, 6);
    print_double(source, 6);

    getchar();
    return 0;
}

void reverse_double(double db[], int n)
{
    int i;
    double temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = db[i];
        db[i] = db[n - 1 - i];
        db[n - 1 - i] = temp;
    }
}

void print_double(double db[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%-3g ", db[i]);
    putchar('\n');
}