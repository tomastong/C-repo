#include<stdio.h>
#include<string.h>
#include<conio.h>
void fun(char *w,int n)
{
     char t,*s1,*s2;
     s1=w;
     s2=w+n-1;
     while(s1<s2)
     {
         t=*s1++;             // 程序难点在这里，s1是先赋值，后自加运算 
         *s1=*s2--;           // 如果改为其它，t=++*s1；先自加再赋值 
         *s2=t;
     }
}
 
int main()
{
    char a[8]="1234567";
    puts(a);
    fun(a,7);
    puts(a); 
    getch();
    return 0;
}
