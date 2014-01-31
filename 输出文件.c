#include<stdio.h>
/*切记头文件，记好*/
#include<stdlib.h>
void main()
{
	/*定义一个指向文件的指针*/
	FILE *fp;
	char ch,filename[10];
	scanf("%s",filename);
	/*为输出打开一个文本文件,'w'只写*/
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open this file\n");
		 /*exit函数是关闭所有文件*/
		exit(0);
	}
	/*此语句用来接收scanf语句最后输入的回车符*/
	ch=getchar();
	/*接收输入的第一个字符*/
	ch=getchar();
	/*任意输入字符，以#号结束*/
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	/*输出换行符号，或者用printf("\n");*/
	putchar(10);
	/*通过关闭指针关闭文件*/
	fclose(fp);
}