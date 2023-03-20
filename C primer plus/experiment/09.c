#include <stdio.h>
int main(void)
{
    char ar[6] = "abcd";
    int i;
    int n = 10;

    for (i = 0; i < n; i++)
    {
        printf("%2d %p\n", i, ar+i);
        if (ar+i)
            putchar('\n');
    }

    getchar();
    return 0;
}