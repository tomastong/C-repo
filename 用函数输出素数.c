#include<stdio.h>
#include<math.h>
int stf(int x)
{int i,k,p=1;
k=(int)sqrt(x);
   for(i=2;i<=k;i++)
   {  
	   if(x%i==0)                       /*该题思路很好，用返回值p=1或 p=0来进行判断是否素数*/
       p=0;
   }
	  return(p);             /*记好上面定义int stf(int x)类型，下面要返回值return(p)*/
}


void main()
{
	int m,p;
	printf("请输入一个整数：\n");
    scanf("%d",&m);
    p=stf(m);                /*切记要将函数的值再赋给一个量p，否则没有办法进行下一步比较*/
	if(p==1)
		printf("该数是素数\n");
	else
        printf("该数不是素数\n");
}