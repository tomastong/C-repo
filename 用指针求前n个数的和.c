#include<stdio.h>
void sum(int *x,int n)
{
	int i,s=0;
	int *t;
	t=x;  /*t和x都指向数组第一个元素*/
	for(i=0;i<n;i++,x++)
		s+=*x;
	*(t+10)=s;   /*(t+10)指向数组元素a[10]*/
}
void main()
{
	int n,a[11]={1,2,3,4,5,6,7,8,9,10};
	int *p=a;
	printf("please input n(n<10):");
	scanf("%d",&n);
    sum(p,n);
	printf("前n项和是%d\n",a[10]);
}
/*双指针的运用比较好,应该学习一下*/