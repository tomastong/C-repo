#include<stdio.h>
#define N 3               /*学生数为3*/
/*声明结构体变量，学号、姓名、3门课成绩、平均成绩*/
struct student   
{
	int num;
	char name[20];
	float score[3];
    float aver;
};

void main()
{
	/*声明输入函数input，以结构体变量为函数参数*/
	void input(struct student stu[]);
	/*声明比较函数，函数的返回值为结构体类型，以结构体变量为函数参数*/
	struct student max(struct student stu[]);
	/*声明输出函数print，以结构体变量为函数参数*/
	void print(struct student stu);
	/*定义结构体数组，指向结构体的指针*/
	struct student stu[N],*p=stu;
	/*调用函数*/
	input(p);
	print(max(p));
}

/*定义input函数*/
void input(struct student stu[])
{
	int i;
	printf("请输入各学生的信息：学号、姓名、三门课成绩：\n");
	for(i=0;i<N;i++)
	{   /*输入各项信息*/
		scanf("%d%s%f%f%f",&stu[i].num,stu[i].name,&stu[i].score[0],/*此处stu[i].name不用地址符号，因为其为数组，用名就行*/
			&stu[i].score[1],&stu[i].score[2]);
		/*用已知数据求aver平均成绩*/
			stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}

/*定义max函数，返回值为结构体类型*/
struct student max(struct student stu[])
{
    int i,m=0;
	/*用比较的方法，找到平均成绩最大的结构体*/
	for(i=0;i<N;i++)
		if(stu[i].aver>stu[m].aver)  m=i;
		return(stu[m]);/*返回值为结构体变量*/
}

/*定义print函数*/
void print(struct student stud)
{
	printf("\n成绩最高的学生是：\n");
	printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩:%6.2f\n",stud.num,stud.name,
		stud.score[0],stud.score[1],stud.score[2],stud.aver);
}