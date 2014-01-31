#include<stdio.h>
void main()
{
	int k=5,n=0;
	do
	{
		switch(k)
		{
			case 1:  
		    case 3:n+=1;k--; break;
			default:n=0;k--;
		    case 2: 
			case 4:n+=2;k--;break;
		}
    	printf("%d",n);
	}while(k>0&&n<5);
	printf("\n");
}

/*本题输出结果是235，case，default语句可以不按顺序写!由于第一次循环不存在与case分支匹配，执行default，但由于default分支中没有break语句，程序仍然“按顺序”执行*/