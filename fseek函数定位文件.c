#include<stdio.h>
#include<stdlib.h>
struct student_type
{
	char name[10];
	int num;
	int age;
	char sex;
}stud[10];

void main()
{
	int i;
	FILE *fp;
	if((fp=fopen("stud.dat","r"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	for(i=0;i<10;i+=2)
	{
		  /*fseek函数（文件类型指针，位移量，起始点）*/
		fseek(fp,i*sizeof(struct student_type),0);
		/*一次读入多组数据*/
		fread(&stud[i],sizeof(struct student_type),1,fp);
		printf("%s %d %d %c",stud[i].name,stud[i].num,stud[i].age,stud[i].sex);
	}
	fclose(fp);
}