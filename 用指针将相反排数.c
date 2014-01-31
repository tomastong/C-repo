#include<stdio.h>
void inv(int *x,int n)
{
	int *p,temp,*i,*j,m=(n-1)/2;
	i=x;j=x+n-1;p=x+m;
	for(i=0;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
      return ;
	}
}
void main()
{
	int i,a[10]={3,7,9,11,0,6,7,5,4,2};
	printf("The original array :\n");
	for(i=0;i<10;i++)
		printf("%4d",a[i]);
	printf("\n");
	inv(a,10);
	printf("The array has been inverted:\n");
	for(i=0;i<10;i++)
		printf("%4d",a[i]);
	printf("\n");
}