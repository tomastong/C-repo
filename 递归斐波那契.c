#include<stdio.h>
int fbnq(int n)
{
	if(n==1) return(1);
    else if(n==2) return(1);
	else return(fbnq(n-2)+fbnq(n-1));
}

void main()
{
	int n,m;
	printf("请输入一个整数:");
    scanf("%d",&n);
	m=fbnq(n);
	printf("斐波那契第%d项是%d\n",n,m);
}
