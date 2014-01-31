#include<stdio.h>
#include<string.h>
int search(char list[][20],char name[],int m)
{
	int i;
	for(i=0;i<m;i++)
	if(strcmp(list[i],name)==0)       /*运用这个函数进行判断，月份是否对应，很不错*/
		break;
	return(i+1);
}

void main()
{
    
	char month_list[12][20]={"january","february","march","april","june","july","august","september","october","november","december"};
    char month[20];
	int n;
	printf("请输入英文月份:\n"); /*提示性话，应该放在定义下面*/
    gets(month);   /*该处输入字符串格式时，不用gets(month[20])，gets(month)即可*/
    n=search(month_list,month,12);
    if(n<12)
    printf("%s表示%d月\n",month,n);
}