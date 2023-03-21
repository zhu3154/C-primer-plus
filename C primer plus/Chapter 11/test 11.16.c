#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char ch;

    if (argc == 2)
        while ((ch = getchar()) != EOF)
        {
            if (!strcmp(argv[1], "-p"))
                putchar(ch);
            else if (!strcmp(argv[1], "-u"))
            {
                ch = toupper(ch);
                putchar(ch);
            }
            else if (!strcmp(argv[1], "-l"))
            {
                ch = tolower(ch);
                putchar(ch);
            }
        }
    else if (argc == 1)
        while ((ch = getchar()) != EOF)
            putchar(ch);

    return 0;
}