// 测试 restrict 指针
#include <stdio.h>
int main(void)
{
    int n;
    int *restrict a;
    int *b;
    a = &n;
    b = &n;
    *a = 10;
    *b = 20;

    printf("%d", *a);

    getchar();
    return 0;
}