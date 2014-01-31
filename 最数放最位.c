#include<stdio.h>
void csdk(int a[10])
{
	int *max,*min,*p;
	max=min=a;
	for(p=a;p<a+10;p++)
	{
      if(*p>*max) max=p;
	  if(*p<*min) min=p;
	}
	*p=a[0];
	a[0]=*max;
	*max=*p;
	*p=a[9];
	a[9]=*min;
	*min=*p;
}
void main()
{
	int i,a[10];
	int *p=a;
	printf("ÇëÊäÈë10 ¸öÊý:\n");
	for(i=0;i<10;i++)
		scanf("%d",p+i);
	csdk(a);
	p=a;
	for(i=0;i<10;i++)
	printf("%4d",*(p+i));
    printf("\n");
}