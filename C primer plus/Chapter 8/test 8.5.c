#include <stdio.h>
int main(void)
{
    int guess = 50;
    int a = 0, b = 100;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it. \nRespond with a y if my guess is right ,with");
    printf("\na b if it is big and with a s if it is small.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == 'b')
        {
            b = guess;
            guess = (a + guess) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else if (response == 's')
        {
            a = guess;
            guess = (b + guess) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else
            printf("Sorry, I understand only y, b or s.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I know I coule do it!\n");

    getchar();
    getchar();

    return 0;
}