#include <stdio.h>
void scan_mxn(int m, int n, double ar[m][n]);
double average_row(int n, double ar[]);
double average(int m, int n, double ar[m][n]);
double max_row(int n, double ar[]);
double max_mxn(int m, int n, double ar[m][n]);

int main(void)
{
    int m, n;
    int i;

    printf("输入组数：");
    scanf("%d", &m);
    printf("输入每组个数：");
    scanf("%d", &n);

    double ar_mxn[m][n];

    printf("输入%d组数，每组%d个：\n", m, n);
    scan_mxn(m, n, ar_mxn);
    for (i = 0; i < m; i++)
    {
        printf("ave%d = %g\n", i + 1, average_row(n, ar_mxn[i]));
    }
    printf("total ave = %g\n", average(m, n, ar_mxn));
    printf("max = %g\n", max_mxn(m, n, ar_mxn));

    getchar();
    getchar();

    return 0;
}

void scan_mxn(int m, int n, double ar[m][n])
{
    int i, j;

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%lf", ar[i] + j);
}

double average_row(int n, double ar[])
{
    int i;
    double tot = 0;

    for (i = 0; i < n; i++)
        tot += ar[i];

    return tot / n;
}

double average(int m, int n, double ar[m][n])
{
    int i, j;
    double tot = 0;

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            tot += ar[i][j];

    return tot / (m * n);
}

double max_row(int n, double ar[])
{
    int i;
    double max = ar[0];

    for (i = 1; i < n; i++)
        max = (max > ar[i]) ? max : ar[i];

    return max;
}

double max_mxn(int m, int n, double ar[m][n])
{
    int i;
    double max = max_row(n, ar[0]);

    for (i = 1; i < m; i++)
        max = (max > max_row(n, ar[i])) ? max : max_row(n, ar[i]);

    return max;
}
