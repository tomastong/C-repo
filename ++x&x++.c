#include<stdio.h>
void main()
{
	int x=3;
	int y=(x++)+(++x)+(x++);
	printf("x=%d,y=%d\n",x,y);
	printf("\n");
}

/*做该题时，应注意区分前增量(++x)和后增量(x++)
首先执行前增量操作，表达式中只有一个前增量，则
x=4,然后用x=4进行算y=12，最后执行后增量操作x=6*/