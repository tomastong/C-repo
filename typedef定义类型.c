#include<stdio.h>
void main()
{
	typedef int zhengxing;
	typedef char zifu;
	zhengxing a=10,b=6;
	zifu c=65;
	printf("%d,%d,%c\n",a,b,c);
}

/*由此题可以简单的看明白typedef的用法，但是该用法一般
用来定义一些变量，如定义i,j为count，意义为计数变量*/