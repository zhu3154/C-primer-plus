#include <stdio.h>
int main(void)
{
    int x, y;    // 行数，列数
    int i, j, k; // 辅助变量
    int num[100];
    int sum = 0;
    int sum_zheng = 0;
    int sum_fu = 0;
    int sum_bian = 0;

    printf("请输入行数：");
    scanf("%d", &x);
    printf("请输入列数：");
    scanf("%d", &y);
    while (x != y)
    {
        printf("行列数不相等，重新输入！\n");
        printf("请输入行数：");
        scanf("%d", &x);
        printf("请输入列数：");
        scanf("%d", &y);
    }
    printf("输入二维数组\n");
    for (i = 1, j = 1, k = 0; k < x * x; k++)
    {
        scanf("%d", &num[k]);
        sum += num[k];
        if (i == j)
            sum_zheng += num[k];
        if (i + j == x + 1)
            sum_fu += num[k];
        if (i == 1 || j == 1 || i == x || j == x)
            sum_bian += num[k];
        if (j < x)
            j++;
        else
        {
            j = 1;
            i++;
        }
    }
    printf("您输入的二维数组为：\n");
    for (i = 1, k = 0; i <= x; i++)
    {
        for (j = 1; j <= x; j++, k++)
            printf("%-10d", num[k]);
        putchar('\n');
    }
    printf("输出所有元素之和%d\n", sum);
    printf("正对角线之和%d\n", sum_zheng);
    printf("反对角线之和%d\n", sum_fu);
    printf("四边之和%d\n", sum_bian);

    getchar();
    getchar();

    return 0;
}