// 指针数组，字符串数组
#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "Stashing data",
        "Following instyctions to the letter",
        "Understanding the C language"};
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"};
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mylatents: %zd, sizeof yourtalents: %zd\n",
           sizeof(mytalents), sizeof(yourtalents));

    getchar();
    return 0;
}