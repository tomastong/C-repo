#include<stdio.h>
void main()
{
	FILE *fp;

        /*定义文件指针*/
        /*定义指针*p,用来接收fgets函数的返回值(是str的首
        字符的地址)，即p=str或&str[0]而字符数组str用来接收来自文件的字符*/

	char *p,str[80];
	int i;
	fp=fopen("如果.txt","r");
	/*fgets函数从fp指向的文件中，向文件输入6=7-1个字符至str中，最后加一个'\0',凑够7个*/
	p=fgets(str,7,fp);
	for(i=0;i<7;i++)
		printf("%c",str[i]);
	printf("\n");
	fclose(fp);
}
