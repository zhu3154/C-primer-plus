#include <stdio.h>
void menu(void);
int choice(int a, int b);

int main(void)
{
    int ch;

    menu();
    ch = choice(1, 4);
    printf("Your choice is %d.\n", ch);

    getchar();

    return 0;
}

void menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit\n");
    printf("Enter the number of your choice:\n");
}

int choice(int a, int b)
{
    int choice;
    while (scanf("%d", &choice) == 1)
    {
        while (getchar() != '\n')
            continue;
        if (choice < a || choice > b)
            menu();
        else
            return choice;
    }
    while (getchar() != '\n')
        continue;

    return 4;
}