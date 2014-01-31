/*===========================Program Description=================================
purpose: 命名空间的详解问题.cpp 
author: Dong-Hong-Yan 
created: 2012/10/03 21:50:08
================================================================================*/
#include <stdio.h> 
#include <math.h>
#include <iostream>

int a=2;              // 定义a为全局变量 

/* 这里应该记着，如果不是指针，返回的值(x还是5)不变
但是这里是指针 ，返回之后，记住，是返回5之后，a又自加了 
int f()
{
 int x=5;
 return x++;
 }
*/ 
int f(int *a)           // 定义函数 
{
      return(*a)++;        
}

int main()
{
      int s=0;
      {
          int a=5;
          s+=f(&a);           // 这里的话，里面的a后来为6 
      }
    
      s+=f(&a);       // 这里就和里面的无关了，a再自加，最后为3 
      printf("%d %d\n",a,s);
     
      system("pause");
      return 0;
}
