#include <stdio.h>
#include <string.h>
void str_remove_sp(char *str);
char *s_gets(char *st, int n);

int main(void)
{
    char str[10][50];
    int i = 0;
    int j;

    while (i < 10 && s_gets(str[i], 50) && str[i][0] != '\0')
    {
        str_remove_sp(str[i]);
        i++;
    }
    for (j = 0; j < i; j++)
    {
        puts(str[j]);
    }

    getchar();
    return 0;
}

void str_remove_sp(char *str)
{
    int i = 0;
    int j;

    while (str[i])
    {
        if (str[i] == ' ')
        {
            j = i;
            while (str[j] == ' ')
                j++;
            strcpy(str + i, str + j);
        }
        i++;
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