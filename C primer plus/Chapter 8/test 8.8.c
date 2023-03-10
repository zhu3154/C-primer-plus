#include <stdio.h>
char menu(void);
float get_number(void);
int main(void)
{
    char operation = 0;
    float num1, num2;

    while (operation != 'q')
    {
        operation = menu();
        switch (operation)
        {
        case 'a':
            printf("Enter first number: ");
            num1 = get_number();
            printf("Enter second number: ");
            num2 = get_number();
            printf("%g + %g = %g\n", num1, num2, num1 + num2);
            break;
        case 's':
            printf("Enter first number: ");
            num1 = get_number();
            printf("Enter second number: ");
            num2 = get_number();
            printf("%g - %g = %g\n", num1, num2, num1 - num2);
            break;
        case 'm':
            printf("Enter first number: ");
            num1 = get_number();
            printf("Enter second number: ");
            num2 = get_number();
            printf("%g * %g = %g\n", num1, num2, num1 * num2);
            break;
        case 'd':
            printf("Enter first number: ");
            num1 = get_number();
            printf("Enter second number: ");
            num2 = get_number();
            while (num2 == 0)
            {
                printf("Enter a number other than 0: ");
                num2 = get_number();
            }
            printf("%g / %g = %g\n", num1, num2, num1 / num2);
            break;
        }
    }
    printf("Bye.\n");

    getchar();

    return 0;
}

char menu(void)
{
    char ch = 0;
    while (ch == 0)
    {
        printf("Enter the opreration of your choice: \n"
               "a. add             s. subtract\n"
               "m. multiply        d. divide\n"
               "q. quit\n");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        if (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
            ch = 0;
    }

    return ch;
}

float get_number(void)
{
    float num;
    char ch;

    while (scanf("%f", &num) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an number.\nPlease enter an number, "
               "such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n')
        continue;

    return num;
}
