#include <stdio.h>
char *getstr(char *str, int n);

int main(void)
{
    char *str;
    char arr[80] = {0};
    str = getstr(arr, 10);
    puts(str);

    getchar();
    return 0;
}

char *getstr(char *str, int n)
{
    int i;
    for (i = 0; i < n; i++)
        str[i] = getchar();

    return str;
}