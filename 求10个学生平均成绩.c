#include<stdio.h>
void main()
{float ave,sum=0,a[10];
int i;
printf("请输入10个学生成绩\n");
  for(i=0;i<10;i++)
  {
	scanf("%f",&a[i]);
	sum+=a[i];
  }
  ave=sum/10;
  printf("平均成绩是%.2f\n",ave);

}







/*当定义数组为浮点型时，输入格式应由%d改为%f*/