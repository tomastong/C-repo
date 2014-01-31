#include<stdio.h>
void main()
{
	int i,n,a[100],b=0,c=0,d=0;
	printf("请输入要输入数据的个数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)  /*这一点比较好，运用for循环，限定统计的个数*/
	{
		if(a[i]>0)
		b++;
	    else if(a[i]==0)
		c++;
	    else
		d++;

	}
printf("正数有%d个\n0有%d个\n负数有%d个\n",b,c,d);
}
