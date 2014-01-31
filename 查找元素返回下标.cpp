/*==============================Program Description==================================
purpose: 函数的功能是在一维数组a中查找x值。若找到，则返回所在的下标值；否则，返回0。
author: Dong-Hong-Yan
created: 2012-10-05 21:09:10
=====================================================================================*/

#include <iostream>
using namespace std;

int funa(int *a, int n, int x)
{
    *a = x;         // 将要查找的值放在了a[0]的位置 
    n = n-1;
    while(a[n] != x) n--;      // 如果查找不到，n刚好为0 
    cout << a[0] << endl;
    return n;
} 

// 【主程序】 
int main()
{    
    int a[11]={0,1,2,3,4,5,6,7,8,9,10};
    int b = funa(a,11,11);
    cout << b << endl; 
 
    system("pause");
    return 0;
}
