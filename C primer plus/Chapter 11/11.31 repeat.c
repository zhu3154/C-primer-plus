/* 带参数的main() */
#include <stdio.h>
int main(int argc, char *argv[])
{
    int count;
    printf("The commond line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    getchar();
    return 0;
}