#include <stdio.h>
int is_within(char *str, int ch);

int main(void)
{
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char ch;
    printf("ch = ");
    while ((ch = getchar()) != '\n')
    {
        while (getchar() != '\n')
            continue;
        printf("within: %d\n", is_within(abc, ch));
        printf("ch = ");
    }
}

int is_within(char *str, int ch)
{
    int i = 0;
    int status = 0;

    while (str[i])
    {
        if (str[i] == ch)
        {
            status = 1;
            break;
        }
        i++;
    }

    return status;
}