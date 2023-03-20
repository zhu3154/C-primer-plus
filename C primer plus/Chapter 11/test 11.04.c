#include <stdio.h>
#include <ctype.h>
char *getword(char *str, int n);

int main(void)
{
    char ch[20] = {0};

    getword(ch, 10);
    puts(ch);

    getchar();
    return 0;
}

char *getword(char *str, int n)
{
    int i;
    int status = 1;
    while (isspace(*str = getchar()))
        continue;
    for (i = 1; i < n && status; i++)
    {
        if (isspace(str[i] = getchar()))
            status = 0;
    }
    if (str[i - 1] != '\n')
        while (getchar() != '\n')
            continue;
    return str;
}