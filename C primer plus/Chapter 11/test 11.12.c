#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n_lowwer = 0;
    int n_upper = 0;
    int n_word = 0;
    int n_symble = 0;
    int n_num = 0;
    int status = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (!status && !isspace(ch))
        {
            status = 1;
            n_word++;
        }
        if (status && isspace(ch))
            status = 0;
        if (isupper(ch))
            n_upper++;
        else if (islower(ch))
            n_lowwer++;
        else if (ispunct(ch))
            n_symble++;
        else if (isdigit(ch))
            n_num++;
    }
    printf("单词数：%d\n大写字母数：%d\n小写字母数：%d\n", n_word, n_upper, n_lowwer);
    printf("标点符号数：%d\n数字字符数：%d\n", n_symble, n_num);

    getchar();
    return 0;
}