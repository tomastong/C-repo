#include<stdio.h>
int *max(int *x,int *y)      /*函数前面的*号表明函数的返回值是一个地址*/
{
	int *q;  /*定义*q是用来存放最大数的地址*/
	if(*x>*y)
		q=x;
	else
		q=y;
	return(q);
}
void main()
{
    int a,b,*p;
	printf("请输入a,b两个值:");
	scanf("%d,%d",&a,&b);
	p=max(&a,&b);             /*该处p用来接收地址时，max就不用带*号了*/
	printf("%d,%d,max is %d\n",a,b,*p);

}