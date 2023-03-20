#include <stdio.h>
#include <string.h>
char *string_in(char *str1, char *str2);
char *s_gets(char *st, int n);

int main(void)
{
    char str1[] = "apple car man old main void double";
    char str2[30];

    puts("enter a word:");
    while (s_gets(str2, 30) && str2[0] != '\0')
    {
        printf("%td\n", string_in(str1, str2) - str1);
        puts("enter a word:");
    }
}

char *string_in(char *str1, char *str2)
{
    int i;
    int temp;
    int u;
    char *reptr = NULL;

    for (i = 0; str1[i]; i++)
    {
        if (!strncmp(str1 + i, str2, temp = strlen(str2)))
        {
            reptr = str1 + i;
            break;
        }
    }
    return reptr;
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