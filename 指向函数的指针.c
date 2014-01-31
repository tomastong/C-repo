#include<stdio.h>
int max(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
    return(z);
}
void main()
{
	int a,b,c;
/*定义指向函数的指针变量p，该函数的返回值为整型*/
	int (*p)();       
/*令指针变量p指向函数max()*/
	p=max;  
	printf("请输入a,b两个值:");
	scanf("%d,%d",&a,&b);
	c=(*p)(a,b);  /*在这里等价c=max(a,b)*/
	printf("%d,%d,max is %d\n",a,b,c);
}



/*该类指针变量等于一个函数的入口地址，做加减运算毫无意义*/