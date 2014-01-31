#include<stdio.h>
void shuzu(int a[5][9])                /*多维数组做函数参数，与一维数组名做函数参数一样，传递的是数组的地址，即形参数组与实参数组地址相同，此时形参数组可以小于实参数组。*/
{int i,j,b[9][5];                      /*多维数组名作为实参时，对应形参数组最左边（即第一维）元素“个数1”可以指定也可以省略，但第二维以及其他多维的元素个数不可以省略*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("对调后的数组为:\n");
	 for(i=0;i<9;i++)
	{
		for(j=0;j<5;j++)
			printf("%4d",b[i][j]);
		printf("\n");
	}   
}

void main()
{
     int i,j;
	int a[5][9];
	for(i=0;i<5;i++)
	{
		printf("请输入第%d组数,每组9个数:\n",i+1);
		for(j=0;j<9;j++)
		{scanf("%d",&a[i][j]);
		}
	}
    printf("对调前的数组为:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}   
    shuzu(a);
    printf("\n");
   

}
