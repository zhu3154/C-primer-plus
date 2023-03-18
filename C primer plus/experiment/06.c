#include <stdio.h>
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};

    printf("%p\n%p", a, b);

    getchar();
    return 0;
}