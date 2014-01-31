#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cmp(char *a, char *b)
{
    return *a - *b;
} 

int main()
{
    char ch[10] = "bcadfegihj";          // 这里怎么定义 
    int i;
    qsort(ch, 10, sizeof(ch[0]), cmp);
    
    for (i=0; i<10; i++)
    printf("%c ", ch[i]);
    
    getch();
    return 0;
}

// char ch[10] = "bcadfegihj"; 这里这么定义，sizeof(ch)占10字节,绝对错误，只是字符，不是字符串！！！ 
// char ch[] = "bcadfegihj";  如果这么定义，sizeof(ch)占11字节  但是都成立 
/* int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}                                                      这样也行哦 
*/
