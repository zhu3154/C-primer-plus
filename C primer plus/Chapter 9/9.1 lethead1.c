#include <stdio.h>
#define NAME "GAGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "megapolis, CA 94904"
#define WIDTH 40

void starbar(void); /* 函数原型 */

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); /* 使用函数 */

    getchar();

    return 0;
}

void starbar(void) /* 定义函数 */
{
    int count;

    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}
