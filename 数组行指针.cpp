#include<stdio.h>
#include <conio.h>
int main()
{
   int a[2][2]={1,2,3,4},(*p)[2];
   p=a;
   p++;
   printf("%d\n",**p ); 
 
   getch();
   return 0;
}

// 认真分析题，这里的**p相当于*(*(a+1)+0)，这里的p是行指针，和a一个性质 
