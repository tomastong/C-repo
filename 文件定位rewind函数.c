#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	fp1=fopen("如果.txt","r");
	fp2=fopen("虽然.txt","w");
	while(!feof(fp1))
		putchar(fgetc(fp1));//将结果显示屏幕后，fp1位于文件末尾
	//rewind函数只是fp1指针重新定位到开头，feof的值恢复为0
	rewind(fp1);
	while(!feof(fp1))
		fputc(fgetc(fp1),fp2);
	putchar(10);
	fclose(fp1);
	fclose(fp2);
}