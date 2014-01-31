#include<stdio.h>
void jhan(int *x,int *y)
{
	int t;
	if(*x>*y)
	{
		t=*x;
		*x=*y;
		*y=t;
	}

}
void bdx(int *x,int *y,int *z)
{
	jhan(x,y);
	jhan(x,z);
	jhan(y,z);
}
void main()
{
	int a,b,c;
	int *p=&a,*q=&b,*w=&c;            /*该处应注意，int *p=&a,*q=&b,*w=&c; ，千万别写错了！*/
	printf("请输入三个整数:");
	scanf("%d,%d,%d",p,q,w);
	bdx(p,q,w);
	printf("由小到大顺序为%d,%d,%d\n",*p,*q,*w);
}