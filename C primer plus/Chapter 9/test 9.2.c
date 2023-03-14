/* 打印指定字符j行i列 */
#include <stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;

    printf("输入一个字符,两个数字，程序将打印这个字符指定行列\n");
    printf("输入要打印的字符：");
    scanf("%c", &ch);
    printf("输入行数：");
    scanf("%d", &j);
    printf("输入列数：");
    scanf("%d", &i);
    chline(ch, i, j);

    getchar();
    getchar();

    return 0;
}

void chline(char ch, int i, int j)
{
    int x, y;

    for (x = 0; x < j; x++)
    {
        for (y = 0; y < i; y++)
            putchar(ch);
        putchar('\n');
    }
}