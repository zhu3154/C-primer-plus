// 将二维数组中的一个子数组拷贝给另一个子数组
#include <stdio.h>
void print_double(double db[], int n);
void copy_arr(double db[], double source[], int n);

int main(void)
{
    double db2[3][5] = {
        {1.1, 2.1, 3.1, 4.1, 5.1},
        {6.2, 7.2, 8.2, 9.2, 10.2},
        {1.3, 2.3, 3.3, 4.3, 5.3}};

    printf("db2[0]:\n");
    print_double(db2[0], 5);
    printf("db2[1]:\n");
    print_double(db2[1], 5);
    printf("After copy\n");
    copy_arr(db2[1], db2[0], 5);
    printf("db2[1]:\n");
    print_double(db2[1], 5);

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