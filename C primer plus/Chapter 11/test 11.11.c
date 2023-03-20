#include <stdio.h>
#include <string.h>
char *s_gets(char *str, int n);
char menu(void);
void strs_print(char str[][100], int serial[], int n); // 按顺序打印n行字符串
void print_ascii(char str[][100],int n);

int main(void)
{
    char ch;
    char str[10][100];
    int line = 0; // line = 有效行数
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    puts("输入10行字符串");
    while (line < 10 && s_gets(str[line], 100))
        line++;

    while (ch = menu())
    {
        switch (ch)
        {
        case '1':
            strs_print(str, serial, line);
            break;

        default:
            break;
        }
        if (ch == '5')
            break;
    }

    puts("按任意键继续...");
    getchar();
    return 0;
}

char *s_gets(char *str, int n)
{
    char *re;
    int i;

    re = fgets(str, n, stdin);
    if (re)
    {
        i = strlen(str);
        if (str[i - 1] == '\n')
            str[i - 1] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return re;
}

char menu(void)
{
    char ch;

    puts("************************************************************");
    printf("%-33s %s\n", "1) 打印源字符串列表", "2) 按ASCII瞬狙打印字符串");
    printf("%-33s %s\n", "3) 按长度递增顺序打印字符串", "4) 按首单词长度打印字符串");
    printf("5) 退出\n");
    puts("************************************************************");
    while (ch = getchar())
    {
        if (ch < '1' || ch > '5')
        {
            puts("请按菜单说明操作");
            puts("************************************************************");
            printf("%-33s %s\n", "1) 打印源字符串列表", "2) 按ASCII瞬狙打印字符串");
            printf("%-33s %s\n", "3) 按长度递增顺序打印字符串", "4) 按首单词长度打印字符串");
            printf("5) 退出\n");
            puts("************************************************************");
            if (ch != '\n')
                while (getchar() != '\n')
                    continue;
            continue;
        }
        else
            while (getchar() != '\n')
                continue;
        break;
    }

    return ch;
}

void strs_print(char str[][100], int serial[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        puts(str[serial[i]]);
    }
}

void print_ascii(char str[][100], int n)
{
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;

    for (i=0;i<n;i++)
    for()
}