#include<stdio.h>
#include<string.h>
void jhan(char *x,char *y)
{
    char t[81];               /*切忌，现在比较的是字符数组，t应定义为数组*/
	if(strcmp(x,y)>0)
	{
         strcpy(t,x);
		 strcpy(x,y);
		 strcpy(y,t);
	}
}
void bgens(char *p,char *q,char *w)
{
	jhan(p,q);
	jhan(q,w);
	jhan(p,w);
 }
void main()
{
	char str1[30],str2[30],str3[30];
	char *p=str1,*q=str2,*w=str3;
	printf("请输入3个字符串:\n");
	gets(str1);
	gets(str2);
	gets(str3);
	bgens(p,q,w);
	printf("排列后的字符串:\n");
	puts(str1);
	puts(str2);
    puts(str3);

}
