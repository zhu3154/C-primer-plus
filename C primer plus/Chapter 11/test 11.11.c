#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *s_gets(char *str, int n);
char menu(void);
void strs_print(char str[][100], int serial[], int n); // 按顺序打印n行字符串
void print_ascii(char str[][100], int n);
void print_strlen(char str[][100], int n);
void print_1word_len(char str[][100], int n);
int len_of_1word(char *str);

int main(void)
{
    char ch;
    char str[10][100];
    int line = 0; // line = 有效行数
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    puts("输入10行字符串或CTRL+Z停止输入");
    while (line < 10 && s_gets(str[line], 100))
        line++;

    while (ch = menu())
    {
        switch (ch)
        {
        case '1':
            strs_print(str, serial, line);
            break;
        case '2':
            print_ascii(str, line);
            break;
        case '3':
            print_strlen(str, line);
            break;
        case '4':
            print_1word_len(str, line);
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

    putchar('\n');
    puts("************************************************************");
    printf("%-33s %s\n", "1) 打印源字符串列表", "2) 按ASCII顺序打印字符串");
    printf("%-33s %s\n", "3) 按长度递增顺序打印字符串", "4) 按首单词长度打印字符串");
    printf("5) 退出\n");
    puts("************************************************************");
    while ((ch = getchar()) != EOF)
    {
        if (ch < '1' || ch > '5')
        {
            putchar('\n');
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
    puts("打印完毕，请继续按菜单操作");
}

void print_ascii(char str[][100], int n)
{
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    int temp;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[serial[i]], str[serial[j]]) > 0)
            {
                temp = serial[i];
                serial[i] = serial[j];
                serial[j] = temp;
            }
        }
    strs_print(str, serial, n);
}

void print_strlen(char str[][100], int n)
{
    int length[10];
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    int j;
    int temp;

    for (i = 0; i < n; i++)
        length[i] = strlen(str[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (length[serial[i]] > length[serial[j]])
            {
                temp = serial[i];
                serial[i] = serial[j];
                serial[j] = temp;
            }
    strs_print(str, serial, n);
}

void print_1word_len(char str[][100], int n)
{
    int word_len[10];
    int serial[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    int j;
    int temp;

    for (i = 0; i < n; i++)
        word_len[i] = len_of_1word(str[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (word_len[serial[i]] > word_len[serial[j]])
            {
                temp = serial[i];
                serial[i] = serial[j];
                serial[j] = temp;
            }
    strs_print(str, serial, n);
}

int len_of_1word(char *str)
{
    int len = 0;
    int status = 0; // 0表示未进入单词，1表示已进入单词
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        if (!status && !isspace(str[i]))
            status = 1;
        if (status)
        {
            if (!isspace(str[i]))
                len++;
            else
                break;
        }
    }

    return len;
}
