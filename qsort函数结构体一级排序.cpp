#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct coord {           // 典型的函数对结构体进行排序，嗯，不错！ 
    int x;
    int y; 
}data[100]; 

int cmp(const void *a, const void *b)                      // 记住这里函数cmp的返回值是整型，一直都是整型 
{
    return ((struct coord *)a)->x - ((struct coord *)b)->x;       // 这里必须知道->的优先级大于type  
} 
// 这里很成功，在于以x为准，进行排序，爽哉！！！ 


int main()
{
    int sum = 0, n;
    int i,j;
    
    while (scanf("%d", &n)!=EOF && n)       // 如果n为假退出循环 
    {
        for (i=0; i<n; i++)
        {
            scanf("%d %d", &data[i].x, &data[i].y);
        } 
        for (i=0; i<n; i++)
        {
            printf("    %d %d", data[i].x, data[i].y);
        }
        printf("\n");
        qsort(data, n, sizeof(data[0]), cmp); 
        for (i=0; i<n; i++)
        {
            printf("    %d %d", data[i].x, data[i].y);
        }
        printf("\n");
    }
    
    getch();
    return 0;
        
} 

/* 上面的cmp函数还可以这么写 
int cmp(struct coord *a, struct coord *b)                      // 记住这里函数cmp的返回值是整型，一直都是整型 
{
    return a->x - b->x;       // 这样就行了，OK!!!  
}*/ 
