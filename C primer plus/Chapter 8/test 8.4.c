#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    bool word_in = false; // 单词检测
    int i = 0;            // 字母数
    int j = 0;            // 单词数
    char ch;

    while ((ch = getchar()) != EOF)
    {

        if (isalpha(ch))
        {
            i++;
            word_in = true;
        }
        else
        {
            if (word_in == true)
            {
                j++;
                word_in = false;
            }
        }
    }
    printf("字母数：%d\n"
           "单词数：%d\n"
           "平均数：%.2f\n",
           i, j, (float)i / (float)j);

    getchar();

    return 0;
}