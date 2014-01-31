#include<stdio.h>
void string_cut(char *str,char ch)
{ /*尤为注意的是for循环后有一个分号，表明该循环不执行*/
    for(;*str!='\0'&&*str!=ch;str++);  
	/*这里有*str!=ch,ch不用单引号括起来!!!*/
	puts(str);              /*当*str满足两个条件中的任意一个时，即跳出循环，输出后面的字符串*/
}
void main()
{
	char string[20]="beijing";
	char ch;
	printf("beijing\n");
	printf("请输入要保存该字母后的字符串:");
	ch=getchar();               /*该处也可以用scanf函数输入ch，不过用的是%c格式*/
	string_cut(string,ch);

}