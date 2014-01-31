#include<stdio.h>
void main()
{
	int sum,x;
	sum=0;
	printf("累加x的值的和\n");
NEXT:
	printf("x=");
	scanf("%d",&x);
	if(x==0)
		goto END;
	sum+=x;
	goto NEXT;
END:
	printf("sum=%d",sum);
	printf("\n");
}

/*goto语句控制程序跳转*/