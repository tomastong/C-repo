#include<stdio.h>
#include<string.h>
void main()
{
    char str[80];
    char *p1,*p2;
    p1=p2=str;
    printf("请输入一段字符:");
    gets(str);
    /*通过调用函数使指针p1指向字符数组的末端*/
    /*该处也可以使用while(*p1!='\0')  p1++进行实现*/
    p1=str+strlen(str);
    /*使p1自减一位，否则指向的是'\0'*/
    p1--;
    for(; p2<p1; p2++,p1--)
    {
        if(*p1!=*p2)
        {
            printf("不是回文字符串\n");
            break;
        }
        else
        {
            printf("是回文字符串\n");
            break;
        }
    }
}
