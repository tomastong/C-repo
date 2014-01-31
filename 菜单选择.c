#include<stdio.h>
void main()
{
	int i,j,a,b,w[4]={85,87,95,100},u[4]={100,95,98,100};
	printf("        主菜单        \n");
	printf("----------------------\n");
	printf("----------------------\n");
	printf("  1.输入学生成绩\n");
	printf("  2.查询学生成绩\n");
	printf("  3.打印学生成绩\n");
	printf("  0.退出系统\n");
	printf("----------------------\n");
	printf("----------------------\n");
	printf("请输入选项号:");
	scanf("%d",&i);
	if(i==1)
	{
		printf("请输入:\n");
		scanf("%d",&a);
		if(a>=80)
			printf("优秀\n");
		else
            printf("不及格\n");
	}       
    else if(i==2)
	{
		printf("请输入查找学生学号:");
		scanf("%d",&b);
		if(b==11031702)
		{
			printf("姓名 董红岩");
			printf("\n语文  英语  计算机  C语言\n");
            for(j=0;j<4;j++)
			printf("%d     ",w[j]);
		}
		else if(b==11031717)
		{
			printf("姓名：石艳丽");
			printf("\n语文  英语  计算机  C语言\n");
            for(j=0;j<4;j++)
			printf("%d     ",u[j]);
		}
		else
			printf("输入错误，请重新输入。\n");
		printf("\n");
	}
	else if(i==3)
		printf("正在输出，请耐心等待...\n");
	else if(i==0)
		printf("谢谢使用！\n");
	else
		printf("输入错误，请重新输入。\n");


}