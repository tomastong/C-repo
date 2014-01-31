#include<stdio.h>
void change(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("%d,%d\n",x,y);       /*该步不能去掉，原因是*/
	
}


void main()
{
	int m,n;
	printf("请输入两个数:\n");
    scanf("%d,%d",&m,&n);
    change(m,n);
    printf("%d,%d\n",m,n);

}