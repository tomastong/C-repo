#include<stdio.h>
void main()
{
	int i,n,flag;
	float sum=0;
    printf("求1/1-1/2+1/3-1/4+...+1/n,请输入一个n值:");
	scanf("%d",&n);
	for(i=1,flag=1;i<=n;i++)
	{
		sum+=(float)flag/i;
		flag=-flag;
	}
printf("前%d项和为%.3f\n",n,sum); /*注意格式错误，输出也应该为%。3f*/
}