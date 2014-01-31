#include<stdio.h>
/*宏定义，4个学生*/
#define SIZE 4
/*定义结构体类型*/
struct student_type
{
	char name[10];
	int num;
	int age;
	char addr[5];
}stud[SIZE];

/*定义保存函数，保存学生相关信息*/
void save()
{
	FILE *fp;
	int i;
	/*输出文件*/
	if((fp=fopen("stu_list","w"))==NULL)
	{
		printf("cannot open this file\n");
		return;/*此种格式也对，也可以使用{exit(0);}形式*/
	}
	for(i=0;i<SIZE;i++)
		/*fwrite函数的形式为fwrite(buffer读入数据存放地址，size要读写的字节数，
		count读写多少个size字节的数据项，fp文件型指针);常常用于一次性读入一组数据！
		如fread、fwrite函数调用成功，函数返回值是count的值*/
		if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
			printf("file write error!\n");
		fclose(fp);
}

void main()
{
	int i;
	printf("输入4个学生的姓名、学号、年龄和地址：\n");
	for(i=0;i<SIZE;i++)
		/*输入数据，以空格间隔开*/
		scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,&stud[i].addr);
	save();
}