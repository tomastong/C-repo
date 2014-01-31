#include<stdio.h>
/*在程序的第一行宏定义中，定义CHANGE表示字符串1，其实也可以
为任何字符串，甚至不给出任何字符串，写为：#define CHANGE
 只有取消程序的第一行#define CHANGE 1,才会去编译第二个for语句。*/
#define CHANGE 1
void main()
{
	char str[80]={0};
	int i;
	printf("要求：电报译码，若CHANGE为1，原文输出；若CHANGE为0，每个字母后退一位\n");
	printf("please input a string=");
	gets(str);
    #ifdef CHANGE /*该处也可以改为表达式，前边用#if即可*/
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(str[i]+1>'z')?'a':str[i]+1;
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=(str[i]+1>'Z')?'A':str[i]+1;
	}
    #else
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=(str[i]+1>'z')?'a':str[i]-1;
		if(str[i]>='A'&&str[i]<='Z')
			str[i]=(str[i]+1>'Z')?'A':str[i]-1;
	}
    #endif  /*作为结束的标志，不可省*/
	puts(str);
}
/**/
