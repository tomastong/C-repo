#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct ln 
{
    int data;
    char str[100];
}s[2] = {1, "loveyou", 2, "hateyou"};

int cmp(const void *a, const void *b)              // 这里以字符串大小进行排序 
{
    return strcmp(((struct ln *)a)->str, ((struct ln *)b)->str);        // 这里必须知道->的优先级大于type 
}

int main()
{
    int i=0;  
    qsort(s, 2, sizeof(s[0]), cmp);
    
    for (i=0; i<2; i++)
    printf("%d %s\n", s[i].data, s[i].str);
    
  
    getch();
    return 0;
} 

 
