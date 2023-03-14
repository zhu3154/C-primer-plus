/* 检测字母并返回位置值 */
#include<stdio.h>
#include<ctype.h>
int zimu(char ch);

int main(void)
{
    char ch;
    int i;
    
    printf("检测字母并返回位置值\n");
    while((ch=getchar())!=EOF)
    {
        i=zimu(ch);
        printf("%d ",i);
    }

    return 0;
}

int zimu(char ch)
{
    if(isupper(ch))
    return ch-64;
    else if(islower(ch))
    return ch-96;
    else
    return -1;
}