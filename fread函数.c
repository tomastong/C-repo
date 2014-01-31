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
void main()
{
	FILE *fp;
	int i;
	/*输出文件,加b的话，打开二进制文件，不加的话是文本文件*/
	fp=fopen(" stu_list","r");
	for(i=0;i<SIZE;i++)
		/*fread函数的形式为fread(buffer读入数据存放地址，size要读写的字节数，
		count读写多少个size字节的数据项，fp文件型指针);常常用于一次性读入一组数据！
		如fread、fwrite函数调用成功，函数返回值是count的值*/
	{
		fread(&stud[i],sizeof(struct student_type),1,fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}
