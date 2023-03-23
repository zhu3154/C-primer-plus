#include <stdio.h>
int main(void)
{
    char autostr[] = "abcdefg";
    char *a="abcdefg";

    printf("%p\n%p\n%p\n",autostr,a,"abcdefg");
    puts(autostr);

    getchar();
    return 0;
}