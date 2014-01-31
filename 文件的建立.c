#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	/*定义文件指针*/
	if((fp=fopen("hello.txt","w"))==NULL)
	{
		printf("cannot open this file");
		/*添加该语句后，头文件必须加上#include<stdlib.h>*/
		exit(0);
	}
	/*fputs函数用于输入字符串*/
	fputs("我爱你！你知道吗？",fp);
	fclose(fp);
}
/*本题执行后屏幕上没有效果，但是已建立文件*/
