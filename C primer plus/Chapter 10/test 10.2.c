#include <stdio.h>
void print_double(double db[], int n);
void copy_arr(double db[], double source[], int n);
void copy_ptr(double *db, double *source, int n);
void copy_ptrs(double db[], double source[], double *p);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    printf("source:\n");
    print_double(source, 5);
    printf("target1:\n");
    print_double(target1, 5);
    printf("target2:\n");
    print_double(target2, 5);
    printf("target3:\n");
    print_double(target3, 5);

    getchar();
    return 0;
}

void print_double(double db[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%-3g ", db[i]);
    putchar('\n');
}

void copy_arr(double db[], double source[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        db[i] = source[i];
}

void copy_ptr(double *db, double *source, int n)
{
    int i;

    for (i = 0; i < n; i++)
        *db++ = *source++;
}

void copy_ptrs(double db[], double source[], double *p)
{
    for (; source < p; source++)
        *db++ = *source;
}