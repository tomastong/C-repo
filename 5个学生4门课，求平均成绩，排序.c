#include<stdio.h>
void main()
{int i,j;
float sum,a[5][5];
printf("请输入5个学生4门课成绩：\n");

  for(i=0;i<5;i++)
  { 
	  sum=0;
	  printf("输入第%d个学生的成绩:",i+1);               /*  printf("输入第%d个学生的成绩:",i+1);应该向他学习！！！*/
	for(j=0;j<4;j++)
	{
		scanf("%f",&a[i][j]);
		sum+=a[i][j];
	}
	a[i][4]=sum/4;
  }
 printf("计算机  C语言  高数  英语  平均成绩\n");
   for(i=0;i<5;i++)
  { 
  for(j=0;j<5;j++)
	  printf("%6.1f  ",a[i][j]);
  printf("\n");
   }
}





