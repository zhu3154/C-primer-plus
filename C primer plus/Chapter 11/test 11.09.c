#include <stdio.h>
#include <string.h>
void str_reverse(char *str);
char *s_gets(char *st, int n);

int main(void)
{
    char str[50];

    while (s_gets(str, 50) && str[0] != '\0')
    {
        str_reverse(str);
        puts(str);
    }

    return 0;
}

void str_reverse(char *str)
{
    int i;
    char temp;

    for (i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = temp;
    }
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // 即，ret_val != NULL
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}