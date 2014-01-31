#include<stdio.h>
void delete_string(char str[],char ch)
{
	int i,j;
	for(i=j=0;str[i]!='\0';i++)
		if(str[i]!=ch)
			str[j++]=str[i];
		str[j]='\0';
}
void main()
{
	char string[]="beijing huan ying ni!";
	char c;
	printf("beijing huan ying ni!\n");
	printf("ÇëÊäÈëÒªÉ¾³ıµÄ×ÖÄ¸:");
	c=getchar();
	delete_string(string,c);
	puts(string);
}