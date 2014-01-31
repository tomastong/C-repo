#include<stdio.h>
void main()
{
	int i,j,t,a[2][3];
	printf("请输入数据：\n");
    for(i=0;i<2;i++)
	{
		printf("请输入第%d组数据，每组3个：\n",i+1);
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
		printf("换行前的数组array：\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	    printf("%5d",a[i][j]);
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=a[i][j];
		}
		printf("换行后的新数组array：\n");
          
    for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)       /*数组结构已改变，注意将i和j的范围也改变*/
	    printf("%5d",a[i][j]);
		printf("\n");
	}

printf("\n");
} 
}