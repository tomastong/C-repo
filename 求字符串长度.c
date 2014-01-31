#include<stdio.h>
void main()
{
	char *p;
	int i,n;
	char str[100];
	p=str;
	gets(str);
	for(i=1,n=1;*(p+i)!='\0';i++)
		n++;
	printf("×Ö·ûÓĞ%d¸ö\n",n);

}