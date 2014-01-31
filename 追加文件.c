#include<stdio.h>
/*因为调用exit函数，故用该头文件*/
#include<stdlib.h>
void main()
{
	FILE *fp;//定义文件指针
	char ch;
	if((fp=fopen("hello.txt","a"))==NULL)
	{
		printf("cannot open this file\n");
		/*在此也可以省去exit函数，用return;即可*/
		exit(0);
	}
	/*接收输入的第一个字符*/
	ch=getchar();
	/*输入字符，以‘#’结束*/
	while(ch!='#')
	{
		/*将字符一个个输出文件*/
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);

}