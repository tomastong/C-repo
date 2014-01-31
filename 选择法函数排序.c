#include<stdio.h>
void sort(int array[],int n)
{
	int i,j,k,t;
    for(i=0;i<n-1;i++)            /*进行轮选择最小数的操作*/
    {                    
		k=i;          /*用来存放第轮最小数的下标*/
		for(j=i+1;j<n;j++)
			if(array[j]<array[k]) 
				k=j;
			t=array[k];
			array[k]=array[i];        /*最小数a[k]与a[i]互换*/
			array[i]=t;
	}
}

void main()
{
	int a[10],i;
	printf("请依次输入10个整数:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
	sort(a,10);        /*在此输入数组的名就行*/
 	for(i=0;i<10;i++)
    printf("%4d",a[i]);
	printf("\n");
}
