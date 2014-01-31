#include<stdio.h>
void main()
{
	int a[2][3],i,j;
	int *p;
	/*坐标法输入二维数组元素*/
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	/*指针法输出二维数组元素*/
	p=a[0];  /*等价于p=&a[0][0];*/
	for(;p<=&a[1][2];p++)   /*p<&a[1][2]等价于p<=a[0]+5*/
		/*在这里地址永远比数组每一维都小于1*/
		printf("%4d",*p);
	printf("\n");
}