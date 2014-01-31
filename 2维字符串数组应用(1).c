#include<stdio.h>
#include<string.h>
void main()
{
	char name[3][30];
    int i;
	printf("请输入3个名字:\n");
    for(i=0;i<3;i++)
        gets(name[i]);  /*name相当于一个1维数组，输入格式挺好，呵呵*/
	printf("输出名字:\n");
	for(i=0;i<3;i++)
     	puts(name[i]);
}