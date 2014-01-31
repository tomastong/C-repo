#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
 long long a, b;
 scanf("%I64d %I64d", &a, &b);     // 这里编译器通过，要么用%lld, 要么用%I64d，，都代表longlong 
 printf("%lld\n", a*b);
 
 getch();
 return 0;
 }
