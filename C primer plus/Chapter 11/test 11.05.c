#include <stdio.h>
char *str_find(char *str, int ch);

int main(void)
{
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char ch;
    printf("ch = ");
    while ((ch = getchar()) != '\n')
    {
        while (getchar() != '\n')
            continue;
        printf("pr: %p po: %td\n", str_find(abc, ch), str_find(abc, ch) - abc + 1);
        printf("ch = ");
    }
}

char *str_find(char *str, int ch)
{
    int i = 0;
    char *position = NULL;

    while (str[i])
    {
        if (str[i] == ch)
        {
            position = &str[i];
            break;
        }
        i++;
    }

    return position;
}