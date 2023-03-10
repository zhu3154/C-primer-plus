#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int i = 0, j = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            i++;
        else if (islower(ch))
            j++;
    }
    printf("upper: %d\nlower: %d\n", i, j);

    getchar();
    
    return 0;
}