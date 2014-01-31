#include<stdio.h>
/*sum()函数用于求出指针q指向的数据开始连续n个整型数据的和*/
int sum(int *q,int n)
{
	int i,s=0;
	for(i=0;i<n;i++,q++)
		s+=*q;
	return(s);
}

void main()
{
	int m,n,a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	printf("please input m and n(m<n<10):\n");
	scanf("%d,%d",&m,&n);
	p=a+m-1;/*数组下标是从0开始,所以第m个元素下标为m-1,地址为a+m-1*/
	printf("%d\n",sum(p,n-m+1));
	/*若计算第三个数到第五个数的和,实际上计算的是3,4,5共5-3+1个数的和*/


}