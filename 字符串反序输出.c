#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0;
	char str1[10],str2[10];
	printf("请输入一行字母:\n");
	gets(str1);
	i=strlen(str1)-1;       /*切记是从0开始计数的，所以应该减一*/
  while(str2[i]!='\0')
	str2[j++]=str1[i--];
	str2[j]='\0';
    printf("逆序输出:\n");
	printf("%s",str2);
	printf("\n");
}