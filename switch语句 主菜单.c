#include<stdio.h>
void main()
{
	int i,j,a,b,c,w[4]={85,87,95,100},u[4]={100,95,98,100};
	char f[9][30]={"        主菜单        ","----------------------","----------------------","  1.输入学生成绩","  2.查询学生成绩","  3.打印学生成绩","  0.退出系统","----------------------","----------------------"};
	for(c=0;c<9;c++)
	{
		puts(f[c]);
	}
	printf("请输入选项号:");
	scanf("%d",&i);
	switch(i)
	{case 1:            /*切记case后的格式，若为字母，用单引号括起来，若为数据，则直接写出来！！呵呵*/
	{
		printf("请输入:\n");
		scanf("%d",&a);
		if(a>=80)
			printf("优秀\n");
		else                                              /*若case后的语句较多，记住用大括号括起来！！*/
            printf("不及格\n");
	}  break;     
    case 2:
	{
		printf("请输入查找学生学号:");          /*恩，不错，加油！！！*/
		scanf("%d",&b);
		if(b==11031702)
		{
			printf("姓名: 董红岩");
			printf("\n语文  英语  计算机  C语言\n");
            for(j=0;j<4;j++)
			printf("%d     ",w[j]);
		}
		else if(b==10061219)
		{
			printf("姓名:张英");
			printf("\n语文  英语  计算机  C语言\n");
            for(j=0;j<4;j++)
			printf("%d     ",u[j]);
		}
		else
			printf("输入错误，请重新输入。\n");
		printf("\n");
	
	} break;

	case 3:
		{
			printf("正在输出，请耐心等待...\n");}break;
	case 0:
		printf("谢谢使用！\n");break;
	default:                   /*记好default的拼写！！！*/
	{
		printf("输入错误，请重新输入。\n");
	}
	
	}
}