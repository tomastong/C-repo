#include <stdio.h>
#include <stdlib.h>   // 调用快速排序函数qsort函数
#include <conio.h>

int cmp(const void *a, const void *b)     // 这里也可以直接写int cmp(int *a, int *b),下面不用强制转换  
{
    return *(int *)a - *(int *)b;            // 例子是对整型数据进行排序 
}                                            // 更改return *(int *)b - *(int *)a;由大到小排序 

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;
    qsort(x, 10, sizeof(x[0]), cmp);
    
    for (i=0; i<10; i++)                  // 在C语言里，定义i的作用域，在外定义i 
    printf("%d ", x[i]);
    
    getch();
    return 0;
}


/*qsort函数原型
  void qsort(void *base, size_t nelem, size_t width, cmp);
  *base是要排序的数组，nelem是要排序的数组长度， width是数组元素的大小，以字节为单位*/ 
