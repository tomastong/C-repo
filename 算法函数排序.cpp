#include <stdio.h>
//#include <iostream>
#include <algorithm>         // 逐一必须是c++文件，不用加.h
#include <conio.h>

bool cmp(int s, int t)
{
	if (s>t)
		return true;                      // 这是另外一种写法，即调用自定义cmp函数，，使其由大到小排序
	else
		return false;
}

int main()
{
    int x[10] = {6,5,4,7,0,1,9,2,8,3};
	   std::sort(x, x+10, cmp);             // 这里sort函数式std命名空间的函数  调用函数只用了函数名字而已
    int i; 
    for (i=0; i<10; i++)
    printf("%d  ", x[i]);
    
    getch();
    return 0;   
}

// 该题第一种思路就是，直接std::sort(x, x+10)两个参数就行，不用函数
