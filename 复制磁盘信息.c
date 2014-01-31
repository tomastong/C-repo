#include<stdio.h>
/*用到exit函数*/
#include<stdlib.h>
void main()
{
	FILE *in,*out;
	/*采用数组模式进行文件命名*/
	char infile[10],outfile[10];
	printf("Enter the infile name:\n");
	scanf("%s",infile);
	printf("Enter the outfile name:\n");
	scanf("%s",outfile);
	/*以数组名代替文件名，不用加双引号，读入文件*/
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	/*以只写方式打开，进行输出文件*/
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	/*当未遇文件结束，feof(fp)的值为0，!feof(fp)为1，死循环，
	文件结束时，feof(fp)的值为1，!feof(fp)为0，退出循环*/
	while(!feof(in))
		/*在此，也可以使用while(ch!=EOF) {..;},EOF文件结束标志*/
		fputc(fgetc(in),out);
	/*使用fputc(ch,fp)函数和ch=fgetc(fp)函数，将字符一个个读入文件并输出文件*/
	fclose(in);
	fclose(out);
}
/*复制磁盘信息，前提必须存在一文件，然后需要程序自己新建另一文件*/