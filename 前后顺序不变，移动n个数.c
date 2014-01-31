#include<stdio.h>
void move(int array[20],int n,int m) /*用递归法进行后移*/
{
	int *p,array_end;
	array_end=*(array+n-1);  /*把数组中最后一个元素，先救走，记好数组中最后一个元素不能写成(array+10),这只是地址*/
	for(p=array+n-1;p>array;p--)
	     *p=*(p-1);
	*array=array_end;    /*当前面的数把最后一个给淹没时，开头已经把它放在另一个字母里保存了*/
	m--;
	if(m>0)      /*m在此为后移的位数*/
		move(array,n,m);
}
void main()
{
	int a[20],i,c,k;
	printf("请输入多少数字:");
	scanf("%d",&c);
    for(i=0;i<c;i++)
		scanf("%d",&a[i]);
	printf("请输入要后移的个数:");
	scanf("%d",&k);
	move(a,c,k);
	for(i=0;i<c;i++)
	printf("%4d",a[i]);
	printf("\n");

}