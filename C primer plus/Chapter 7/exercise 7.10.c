#include<stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        while (ch == '\n')
            ch = getchar();
        if (ch == '#')
            break;
        printf("Step 1\n");
        if (ch == 'b')
            break;
        else
            switch (ch)
            {
            default:
                printf("Step 2\n");
            case 'h':
                printf("Step 3\n");
            case 'c':
                ;
            }
    }
    printf("Done\n");

    return 0;
}