#include<stdio.h>
#define NULL 0
/*声明结构体类型struct student*/
struct student 
{
	int num;
	float score;
	struct student *next;/*定义next为指向结构体的指针*/
};

void main()
{   /*定义三个结构体变量作为链表的结点*/
	struct student a,b,c,*head,*p;    
	a.num=10101;a.score=89.5;          /*对a,b,c成员赋初值*/
	b.num=10103;b.score=90;
	c.num=10107;c.score=85;
	/*将结点a的起始地址赋给头指针head*/
	head=&a;   
	/*将结点b的起始地址赋给a结点next成员*/
	a.next=&b;
	/*将结点c的起始地址赋给b结点next成员*/
	b.next=&c;
	/*结点c的next成员不存放其他结点地址*/
	c.next=NULL;
	/*使p也指向a结点*/
	p=head;
	do
	{
		printf("%ld%5.1f\n",p->num,p->score);
		/*使p指向下一结点，相当于p=&a;p=&c*/
		p=p->next;
	}while(p!=NULL);
}
