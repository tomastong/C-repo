#include<stdio.h>
#include<string.h>
void main()
{char string[2][80];
int i;
  for(i=0;i<2;i++)
  {gets(string[i]);
  }
printf("%s\n",strcat(string[0],string[1]));
}










/*本题注意输入法则scanf(输入字符串 单个的)&gets(输入字符数组 一个整体)*/
/*stract函数只能连接两个字符数组*/
