#include<stdio.h>
void main()
{
	char a[]="i am a teacher!",b[30];
	char *p=a,*q=b;            /*在本题里面也可以不用p和q，一样行得通！*/
	int i=0;
	while(*(p+i)!='\0')
	{
       *(q+i)=*(p+i);
		   i++;
	}
    *(b+i)='\0';
	for(i=0;b[i]!='\0';i++)
    printf("%c",b[i]);
	printf("\n");
}
