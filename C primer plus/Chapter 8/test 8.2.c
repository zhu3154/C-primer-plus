#include <stdio.h>
int main(void)
{
    char ch;
    int i = 0; // 换行计数

    while ((ch = getchar()) != EOF)
    {
        i++;
        if (ch == '\t')
        {
            putchar(ch);
            printf("%d ", ch);
        }
        else if (ch == '\n')
        {
            putchar(ch);
            printf("%d ", ch);
            i = 0;
        }
        else if (ch < 32)
        {
            ch += 64;
            putchar('^');
            putchar(ch);
            printf("%d ", ch);
        }
        else
        {
            putchar(ch);
            printf("%d ", ch);
        }
        if (i % 10 == 0)
            putchar('\n');
    }

    return 0;
}