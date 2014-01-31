#include<stdio.h>
void main()
{
	char str[]="The C program",c;
	int i;
	for(i=2;(c=str[i])!='\0';i++)
	{
		switch(c)
		{
		     case 'g':++i;break;/*本来加一个一，可是在for循环里，还有一个i++，故加了两次指向a*/
				 /*用break跳出switch之后，才可以执行printf("*")*/
             case 'o':continue;/*只要在continue之后的都不执行*/
			 default:printf("%c",c);
				 continue;/*表明在continue下面的printf("*")不执行*/
		}
		printf("*");
	}
printf("\n");
}
