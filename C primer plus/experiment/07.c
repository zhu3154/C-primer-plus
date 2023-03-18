#include <stdio.h>
int main(void)
{
    char words[10] = {"abc""\0""\n"};

    fputs(words,stdout);

    getchar();
    return 0;
}