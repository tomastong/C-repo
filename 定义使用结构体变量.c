#include<stdio.h>
void main()
{
	struct student   /*这里需要注意的是，student是结构体类型，不是变量*/
	{
		int num;
		char name[20];
		char sex;
		char addr[20];
	} student1={10101,"jackie",'M',"HongKong"}; /*在输入性别的时候，是单引号，因为定义的sex是变量，不是字符数组*/  
	/*这里的student1才是变量名*/
	printf("NO.:%d\nname.:%s\nsex.:%c\naddr.:%s\n",student1.num,student1.name,student1.sex,student1.addr);
}