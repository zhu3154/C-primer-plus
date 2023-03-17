#include <stdio.h>
#define COLS 5
void print_int_x5(int ar[][COLS], int n);
void ar_x2(int ar[][COLS], int n);

int main(void)
{
    int ar[3][COLS] = {
        {1, 2, 3, 4, 5},
        {2, 3, 4, 5, 6},
        {3, 4, 5, 6, 7}};

    print_int_x5(ar, 3);
    putchar('\n');
    ar_x2(ar, 3);
    print_int_x5(ar, 3);

    getchar();
    return 0;
}

void print_int_x5(int ar[][COLS], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%-4d ", ar[i][j]);
        }
        putchar('\n');
    }
}

void ar_x2(int ar[][COLS], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            ar[i][j] *= 2;
        }
    }
}