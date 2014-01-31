#include<stdio.h>
void main()
{int i,j;
    for(i=1;i<=40;i++)
	{	for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
		if(i%10==0)
		{printf("请按回车键继续");
         getchar();
		}
	}
}