#include<stdio.h>
void main()
{
	char string[100];
	int i,num=0,letter=0;
   /*letter为0记录前一状态为空格，letter为1记录前一状态为字符*/
    gets(string);
	for(i=0;string[i]!='\0';i++)     /*这里判断比较好，因为一个字符串最后结束的标记，就是'\0'*/
	{
		if(string[i]==' '&&letter==1)
			letter=0;
        if(string[i]!=' '&&letter==0)
		{
		    letter=1;
			num++;
		}
	}
printf("There are %d words\n",num);
}

/*此程序缺点是不能将符号算进去，遗憾呀！*/