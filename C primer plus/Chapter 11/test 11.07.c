#include <stdio.h>
char *mystrncpy(char *str1, char *str2, int n);
char *s_gets(char *st, int n);

int main(void)
{
    char str1[7];
    char str2[30];

    puts("Enter a string:");
    while (s_gets(str2, 30) && *str2 != '\0')
    {
        putchar(*mystrncpy(str1, str2, 6));
        putchar('\n');
        puts(str1);
        puts("Enter a string:");
    }
}

char *mystrncpy(char *str1, char *str2, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        str1[i] = str2[i];
        if (str2[i])
            continue;
        else
            break;
    }
    return str1;
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