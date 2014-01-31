#include<stdio.h>
#include<string.h>
void sort(char *str[],int n)    /*"*str[]"也是接收指针数组*/
{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)      /*这里用选择法进行排序*/
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(str[k],str[j])>0)   /*调用函数strcmp*/
				k=j;
			if(k!=i)
			{
				temp=str[i];
				str[i]=str[k];
				str[k]=temp;
			}
	}
}
void main()
{
	char *string[4]={"forver","Love","Basic","NUMBER"};
    /*指针数组中string包含4个字符串首地址，string[o],string[1],string[2],string[3]*/
	int i,n=4;
    sort(string,n);
	for(i=0;i<n;i++)
		printf("%s\n",string[i]);/*表示指针数组中第i个字符串的首地址*/
}