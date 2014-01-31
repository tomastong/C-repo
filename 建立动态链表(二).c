#include<stdio.h>
/*调用分配空间的函数*/
#include<malloc.h>
#define NULL 0
struct node
{
	int data; /*数据成员*/
	struct node *next;  /*定义指向结构体的指针成员*/
};

/*定义函数的返回值为结构体指针型变量*/
struct node *create()
{   /*定义三个指针，head存放头指针，tail存放当前的尾结点，p用来指向新申请的结点*/
	struct node *head,*tail,*p;
	int x;
	/*将head的值设置为NULL，即位空链表，依次建下去*/
	head=tail=NULL;
	printf("请输入一个整数:");
	scanf("%d",&x);
	while(x!=0)
	{
		p=(struct node *)malloc(sizeof(struct node));
		/*把刚输入的值，存放在新结点的数据中*/
		p->data=x;
		p->next=NULL;
		/*用来判断是不是第一个结点*/
		if(head==NULL)
			head=tail=p;
		else
		{  /*使尾结点的next成员指向新的结点*/
			tail->next=p;
			/*把p赋给tail，使新结点成为新的尾结点*/
			tail=p;
		}
		printf("请输入一个整数:");
		scanf("%d",&x);
	}
	/*将头指针返回，顺藤摸瓜，找下去*/
	return(head);
}


void main()
{
	struct node *q;
	/*q用来接收函数的返回值*/
	q=create();
	printf("The data of link :\n");
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		/*使q指向下一个节点*/
		q=q->next;
	}
    printf("\n");
}