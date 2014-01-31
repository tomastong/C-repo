#include<stdio.h>
/*调用分配空间函数*/
#include<malloc.h>
/*定义结构体类型*/
struct node
{
	int data; /*数据成员*/
	struct node *next;  /*定义指向struct node类型的指针*/
};

/*定义函数，功能为当输出值为0时，跳出函数，返回值为结构体指针*/
struct node *create()
{   /*head用于存放头指针的值，tail用于指向链表当前的尾结点，p则指向新申请到的新结点*/
	struct node *head,*tail,*p;
	int x;
	head=tail=NULL;
	printf("请输入一个整数:");
	scanf("%d",&x);
	while(x!=0)
	{
		p=(struct node *)malloc(sizeof(struct node));
        p->data=x;
		p->next=NULL;
		if(head==NULL)
			head=tail=p;
		else
		{
			tail->next=p;
			tail=p;
		}
		printf("请输入一个整数:");
		scanf("%d",&x);
	}
	return(head);
}

/*定义插入结点函数，以结构体指针为参数*/
struct node *insert(struct node *head,int value)
{   /*now为指向要插入的结点，p指向插入位置处的结点，q指向p的前一个结点*/
	struct node *now,*p,*q;
	now=(struct node *)malloc(sizeof(struct node));
    now->data=value;
	p=head;
	/*当链表是空链表时,相当于新建链表*/
	if(head==NULL)
	{
		head=now;
		now->next=NULL;
	}
	else
	{   /*寻找插入位置*/
		while((p->next!=NULL)&&(p->data<value))
		{
			q=p;
			p=p->next;
		}
		if(p->data>=value)
		{   /*链表非空,只有一个结点,插入到第一个结点之前*/
		    if(head==p)
			{
		    	now->next=head;
		    	head=now;
			}
		    else
			{   /*链表非空,插入到链表中间*/
		    	q->next=now;
		    	now->next=p;
			}
		}
		else 
		{  /*链表非空,插入到链表结尾*/
			p->next=now;
			now->next=NULL;
		}
	}
	/*返回头指针*/
	return(head);
}

/*主函数,本题要求按顺序输入,然后再插入新结点*/
void main()
{
	struct node *q;
	int value;
	/*q用来接收create函数返回的指针*/
	q=create();
	printf("请输入要插入的整数:");
	scanf("%d",&value);
	/*这里以create函数的返回值作为insert函数的形参*/
	q=insert(q,value);
	/*用指针输出链表*/
	printf("The data of link:\n");
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
	printf("\n");
}


