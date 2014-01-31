#include <stdio.h>
#include <iostream>
void fun(int *n)             // 这里着重考的是静态存储变量，和作用域的问题 
{ 
    static int m = 2;        // 每次调用函数，静态变量m的值在程序结束后在放开 
    *n *= m-1;               // m有累加的作用 （两个m有迷惑作用） 
    m += 2;
}
 
 int main()
 {
    static int m=1;
    int i;
    for(i=1;i<4;i++)
    fun(&m);            // 这里通过寻址运算，间接的改变了变量m（主函数）的值 
    printf("%d\n",m);
   
    system("pause");
    return 0;
 }
