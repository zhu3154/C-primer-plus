#include <stdio.h>
char *getword(char *str);

int main(void)
{
    char ch[20] = {0};

    getword(ch);
    puts(ch);

    getchar();
    return 0;
}

char *getword(char *str)
{
    scanf("%s", str);
    while (getchar() != '\n')
        continue;
    return str;
}