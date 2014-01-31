// 数组首地址和指向数组的指针的不同，严重不同 
#include <stdio.h>
#include <conio.h>
int main()
{
 int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

 int *p=a;
 int i, j;
 for (i=0; i<3; i++)
 {
     for (j=0; j<4; j++)
     printf("%d ", *(p+i*4+j));      // 这里定义指针p指向a，p和a的意义不同 
                                     // 写成printf("%d ", *(a+i*4+j));出错！！！ 
 }
 
 printf("\n");
 getch();
 return 0;
}
