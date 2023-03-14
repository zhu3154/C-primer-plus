#include <stdio.h>
void to_base_n(long num, int n);

int main(void)
{
    long num;
    int n;

    printf("输入一个正整数：");
    scanf("%ld", &num);
    printf("输入要转换的进制：");
    scanf("%d", &n);
    to_base_n(num, n);

    getchar();
    getchar();

    return 0;
}

void to_base_n(long num, int n)
{
    int r;
    char ch;

    r = num % n;
    if (num >= n)
        to_base_n(num / n, n);
    ch = '0' + r;
    putchar(ch);

    return;
}