#include <stdio.h>
#include <conio.h>
int main()
{
    long long a, b, count = 0;           // 这里定义long long类型的变量是防止溢出

    //printf("%d %d %d\n", sizeof(long long), sizeof(long), sizeof(int);  8 4 4
    //printf("%d %d %d\n", sizeof(long double), sizeof(double), sizeof(float)); // 12 8 4

    while(scanf("%lld %lld", &a,&b) == 2)       // scanf函数的返回值是输入参数的个数 ,如果输入非法数据，即1 a则出错，结束
    {
        if (count!=0)
        {
            printf("\n");
            printf("%lld", a*b);
        }
        else
        {
            printf("%lld", a*b);
        }
        count = 1;
    }
    getch();
    return 0;
}
