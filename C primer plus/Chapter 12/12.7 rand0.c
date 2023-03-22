/* 生成随机数 */
/* 使用 ANSI C可移植算法 */
#include <stdio.h>
static unsigned long int next = 1; /* 种子 */

unsigned int rand0(void)
{
    /* 生成伪随机数的魔术公式 */
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}