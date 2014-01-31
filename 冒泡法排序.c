#include<stdio.h>
void main()
{
	int i,j,t,a[10];
	printf("请输入10个数:\n");
    for(i=0;i<10;i++)
	
		scanf("%d",&a[i]);
        for(j=0;j<9;j++)
			for(i=0;i<9-j;i++)         /*此处为冒泡法排序最易错地方，切记的i和j取值范围*/
				if(a[i]>a[i+1])
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
printf("the sorted number is:\n");
for(i=0;i<10;i++)
printf("%4d",a[i]);
printf("\n");
}