#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct coord
{
    int x;
    int y;
}data[100];       

int cmp(const void *a, const void *b)         // 这里也可以把参数类型定义为struct coord *,但是有警告，不好 
{
    if (((struct coord *)a)->x != ((struct coord *)b)->x)
        return ((struct coord *)a)->x - ((struct coord *)b)->x;       // 按照x从小到大排序，当x相等时按照y从大到小排序 
    else
        return ((struct coord *)a)->y - ((struct coord *)b)->y;
}

// 【主程序】 
int main()
{
    int sum = 0, n;
    int i;
    
    freopen("in.txt", "r", stdin);         // 这里与文件同步，切记！！！！这一句话 
    
    while (scanf("%d", &n) !=EOF && n)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d %d", &data[i].x, &data[i].y);
            
        }
        printf("\n");
        for (i=0; i<n; i++)
        {
            printf("   %d %d", data[i].x, data[i].y);
            
        }
        qsort(data, n, sizeof(data[0]), cmp);              // 
        
	       printf("\n");
        for (i=0; i<n; i++)
        {
            printf("   %d %d", data[i].x, data[i].y);
            
        }
        printf("\n");
	}
    getch();
    return 0;
}
