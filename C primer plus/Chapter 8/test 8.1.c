#include <stdio.h>
int main(void)
{
    int i = 0;

    while (getchar() != EOF)
        i++;
    printf("字符数：%d\n", i);
    return 0;
}