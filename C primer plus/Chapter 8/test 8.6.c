#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char get_first(void);

int main(void)
{
    char ch;

    ch = get_first();
    putchar(ch);

    system("pause");

    return 0;
}

char get_first(void)
{
    char ch;

    while (isspace(ch = getchar()))
        continue;

    return ch;
}