#include<stdio.h>
void link_string(char *arr1,char *arr2)
{
	int i;
	for(i=0;*arr1!='\0';i++) /*将指针移动到'\0'处*/
		arr1++;
	for(;*arr2!='\0';arr1++,arr2++)
	    *arr1=*arr2;
	*arr1='\0';       /*复制完后再加一个'\0'*/
}
void main()
{
	char a[40]="i am a teacher.";
	char b[]="you are a student.";
	char*p1=a,*p2=b;
	printf("string:a=%s\nstring:b=%s\n",p1,p2);
    link_string(p1,p2);
	printf("\nNow,\nstring a:%s\nstring b:%s\n",a,b);
}
