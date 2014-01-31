#include<stdio.h>
void main()
{
	int *p,i,a[10];
	p=a;
	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
	scanf("%d",p++);
	p=a;                 /*该情况可以把p=a;去掉，在上一句中scanf("%d",p+i);*/
	for(i=0;i<10;i++)
	printf("%4d",*(p+i));
	printf("\n");

}
