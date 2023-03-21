#include <stdio.h>
#include <ctype.h>
int myatoi(char *str);

int main(void)
{
    char str[10];

    while (gets(str))
    {
        printf("%d\n", myatoi(str));
    }

    return 0;
}

int myatoi(char *str)
{
    int n = 0;
    int error = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
        {
            n *= 10;
            n += (int)str[i] - 48;
            i++;
        }
        else
        {
            error = 1;
            break;
        }
    }
    if (error)
        n = 0;
    return n;
}
