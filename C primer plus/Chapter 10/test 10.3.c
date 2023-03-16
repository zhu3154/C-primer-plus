// int数组中的最大值
#include <stdio.h>
int max_int(int ar[], int n);

int main(void)
{
    int max;

    int ar[10] = {1, 22, 12, 23, 44, 1, 22, 12, -2, 10};
    max = max_int(ar, 10);
    printf("max = %d\n", max);

    getchar();
    return 0;
}

int max_int(int ar[], int n)
{
    int max;
    int i;

    for (max = ar[0], i = 0; i < n; i++)
        max = (max > ar[i]) ? max : ar[i];

    return max;
}