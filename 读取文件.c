#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	/*执行该程序，必须的有一个源文件*/
	fp=fopen("D:\\我爱你 编程\\C Language\\文件输入输出程序\\我爱你.txt","r");        // 打开文件的路径用两条斜杠，切记！！！
	/*通过变量依次读取文件内容*/
	ch=fgetc(fp);
	/*EOF定义为-1，不是可输出字符，换句话说，当读入的字符等于-1（即EOF），
	表示不是正常字符而是文件结束*/
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	putchar(10);
	/*关闭指针，进而关闭文件*/
	fclose(fp);
}
/*切记一个汉字等于两个字节*/
