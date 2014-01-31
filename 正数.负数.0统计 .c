#include<stdio.h>
void main()
{
	int a,i,n,c1,c2,c3;
	c1=c2=c3=0;
    printf("请输入要比较的数的个数:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>0)
			c1++;
		else if(a==0)
			c2++;
		else
			c3++;
	}
	printf("正数有%d个\n0有%d个\n负数有%d个\n",c1,c2,c3);
}