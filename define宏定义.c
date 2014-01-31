#include<stdio.h>
/*定义带参宏，注意是两个参数*/
#define MAX(a,b) ((a)>(b)?(a):(b))
void main()
{
	int a,b,c;
	printf("Input three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("max=%d\n",MAX(MAX(a,b),c));
}