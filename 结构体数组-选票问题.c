#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
    int count;
} leader[3]={"li",0,"dong",0,"wang",0};   /*进行定义结构体数组并初始化*/

void main()
{
	int i,j;
	char leader_name[20];
	for(i=1;i<=10;i++)
	{
		scanf("%s",leader_name);
		for(j=0;j<3;j++)
			if(strcmp(leader_name,leader[j].name)==0)   /*用函数进行比较，进一步得出结论*/
				leader[j].count++;
	}
	printf("Resoult:\n");
	for(i=0;i<3;i++)
	printf("%5s:%d\n",leader[i].name,leader[i].count);
}

