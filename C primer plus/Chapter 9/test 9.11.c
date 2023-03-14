#include <stdio.h>
unsigned Fibonacci(unsigned n);

int main(void)
{
    unsigned n;
    unsigned num;

    printf("输入指定的斐波那契数列项数：");
    while (scanf("%u", &n) == 1)
    {
        num = Fibonacci(n);
        printf("斐波那契数列的第 %u 项是 %u\n", n, num);
        printf("输入指定的斐波那契数列项数：");
    }

    getchar();
    getchar();

    return 0;
}

unsigned Fibonacci(unsigned n)
{
    unsigned num;
    unsigned x, y;

    if (n <= 2)
        num = 1;
    else
    {
        for (x = 1, y = 1; n > 2; n--)
        {
            num = x + y;
            x = y;
            y = num;
        }
    }

    return num;
}