/* 包含 rand1() 和 srand1() 的文件 */
/* 使用 ANSI C 可移植算法 */
static unsigned long int next = 1; /* 种子 */

int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}