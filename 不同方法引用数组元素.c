#include<stdio.h>
void main()
{
	int a[10]={19,17,20,18,16,22,24,15,23,25};
	int i,*p=a;               /*指针变量p指向数组元素*/


	for(i=0;i<10;i++)
	printf("%4d",a[i]);
	printf("\n");

	for(i=0;i<10;i++)
	printf("%4d",*(a+i));	
	printf("\n");

	for(i=0;i<10;i++)
	printf("%4d",*(p+i));    /*这里的*(p+i)与p[i]是等价的*/
    printf("\n");

	for(p;p<(a+10);p++)
    printf("%4d",*p);
	printf("\n");
}
