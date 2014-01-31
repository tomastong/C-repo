#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   int a[]={8,1,2,5,0,4,7,6,3,9};
   printf("%d", a[*(a+a[1])]);     
   
   system("pause");
    return 0;
}


/* 这里如果单纯的输出 printf("%d", a[*(a)]);
1、这样输出的话，里面的a是指针，数组地址，*a=8，a[8]=3 

 但是提上要求是输出 printf("%d", a[*(a+a[1])]); 
2、这样输出的话，里面的a是指针，数组地址，*(a+a[1])=*(a+1),
指向下一个元素，a[1]=1；可解 
*/
