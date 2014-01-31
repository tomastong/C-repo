#include<stdio.h>
/*用malloc函数开辟新单元时需要用此头文件*/
#include<malloc.h>
/*用LEN代表struct student类型数据的字节数*/
#define LEN sizeof(struct student)
/*声明struct student类型*/
struct student
{
	int num;   /*学号*/
	float score;  /*成绩*/
	struct student *next;  /*指针变量成员*/
};

void main()
{   /*定义指针变量head和p*/
	struct student *head,*p;
	printf("请分别输入2个同学的学号和成绩：\n");
	/*下面是建立链表*/
	/*开辟新单元并让p和head指向它*/
	head=p=(struct student *)malloc(LEN);
	/*输入第一个结点数据*/
    scanf("%d,%f",&p->num,&p->score);
	/*开辟第二个新单元并让p指向它*/
	p=(struct student *)malloc(LEN);
	/*输入第二个结点数据*/
	scanf("%d,%f",&p->num,&p->score);
	/*使第一个结点中的next成员指向第二个结点*/
	head->next=p;
	/*使第二个结点中的next成员不指向任何对象*/
	p->next=NULL;
    /*输出两个结点中的数据*/

	p=head;/*使p指向第一个结点中的数据*/
	printf("\n结点1:%d,%6.2f\n",p->num,p->score);
    /*使p指向第二个结点*/
	p=p->next;
	printf("结点2:%d,%6.2f\n",p->num,p->score);
}
/*此题只建立了两个结点*/