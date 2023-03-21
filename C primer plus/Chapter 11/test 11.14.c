#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    double num;
    int n;
    double power = 1;
    int i;
    int error = 0;
    char *end;

    num = strtod(argv[1], &end);
    n = (int)strtol(argv[2], &end, 10);
    if (num != 0)
    {
        if (n > 0)
        {
            for (i = 0; i < n; i++)
                power *= num;
        }
        else
        {
            for (i = 0; i < -n; i++)
                power *= 1 / num;
        }
    }
    else if (n != 0)
        power = 0;
    else
    {
        fputs("Error",stdout);
        error = 1;
    }
    if (!error)
        printf("%d to %g power = %g", n, num, power);

    return 0;
}