#include <iostream>
using namespace std;

int main()
{
   int a[4][5] = {0};
   a[2][3] = 1;
   int *p = &a[0][0];            // 这里只可以定义为这样，int *p=a；
                                  // 产生二义性，a为行指针，a[0]为列指针 
   cout << *(p+13) << endl;
   system("pause");
   return 0;
}
