#include <stdio.h>
#define ROWS 3
#define COLS 5
void scan_ar3x5(double ar[][COLS]);
double average_row(double ar[]);
double max_row(double ar[]);
double max_ar3x5(double ar[][COLS]);

int main(void)
{
    double ar3x5[3][5];
    double ave1, ave2, ave3, ave;
    double max;

    printf("输入3组数，每组5个：\n");
    scan_ar3x5(ar3x5);
    ave1 = average_row(ar3x5[0]);
    ave2 = average_row(ar3x5[1]);
    ave3 = average_row(ar3x5[2]);
    ave = (ave1 + ave2 + ave3) / (ROWS * COLS);
    max = max_ar3x5(ar3x5);

    printf("ave1 = %g\n", ave1);
    printf("ave2 = %g\n", ave2);
    printf("ave3 = %g\n", ave3);
    printf("ave = %g\n", ave);
    printf("max = %g\n", max);

    getchar();
    getchar();
    return 0;
}

void scan_ar3x5(double ar[][COLS])
{
    int i, j;

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            scanf("%lf", ar[i] + j);
}

double average_row(double ar[])
{
    int i;
    double tot = 0;

    for (i = 0; i < COLS; i++)
        tot += ar[i];

    return tot / COLS;
}

double max_row(double ar[])
{
    int i;
    double max = ar[0];

    for (i = 1; i < COLS; i++)
        max = (max > ar[i]) ? max : ar[i];

    return max;
}

double max_ar3x5(double ar[][COLS])
{
    int i;
    double max = max_row(ar[0]);

    for (i = 1; i < ROWS; i++)
        max = (max > max_row(ar[i])) ? max : max_row(ar[i]);
}