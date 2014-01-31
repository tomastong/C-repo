#include<stdio.h>
#include<string.h>
void string_link(char str1[],char str2[])
{int i=0,j;
while(str1[i]!='\0')  i++;
for(j=0;str2[j]!='\0';i++,j++)
str1[i]=str2[j];
str1[i]='\0';
}

void main()
{char str1[80],str2[80];
gets(str1);
gets(str2);	
string_link(str1,str2);
puts(str1);
strcat(str1,str2);
puts(str1);

}
