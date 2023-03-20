#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[30] = "asdasdasdasdasd";
    int n;

    printf("n = %d", strlen(a));
    a[5] = '\0';
    printf("n = %d", strlen(a));

    getchar();
    return 0;
}