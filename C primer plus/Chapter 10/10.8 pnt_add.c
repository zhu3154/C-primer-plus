// 指针地址
#include <stdio.h>
#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;
    pti = dates; // 把数组地址赋给指针
    ptf = bills;
    printf("%23s %15s\n", "shart", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n",index , pti + index, ptf + index);

    getchar();
    return 0;
}