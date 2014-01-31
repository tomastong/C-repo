#include <iostream>															
using namespace std;

typedef struct bit{
       unsigned int hour:5; // ：号后的数字代表位数 5位
       unsigned int min: 6; // ：号后的数字代表位数 6位
       unsigned int sec:  6; // ：号后的数字代表位数 6位
}M;      // 相当于三个共享4字节，一个int，能容下 

typedef struct node
{
     unsigned int a: 1;      // 存在一个非零位的位段，则至少占4Byte 
}S;

typedef struct node1
{
     unsigned int : 0;     // 在C++中占1字节空间，在C中占0字节 
}S1;

typedef struct node2
{
     unsigned int a : 1;   // 
     unsigned int : 0;     // 下一个位段放在一个新的位段存储单元 
     unsigned  c: 32;      // 所以占4+4=8Byte 
}S2;

typedef struct node3
{
     unsigned int a : 4;
     unsigned int : 0;
     int : 6;              // 这个位段放在一个新的位段存储单元 
     
     unsigned c : 32;      // 由于6+32>32,所以位段C也放在新的存储单元所以
                           // 4+4+4=12Byte 
}S3;

typedef struct node4
{                               
     unsigned int a: 1;    
     char b;               // 在一个位段存储单元中能够存下所有的成员，所以占 
     int c: 1;             // 4Byte 
     int d: 2;
     unsigned int e: 2;
}S4;

// 【主程序】 
int main()
{
     S4 s4;
     s4.a = 1;
     s4.c = 1;
     s4.d = 2;
     s4.e = 3;
     
     cout << s4.a << " " 
          << s4.c << " "
          << s4.d << " "
          << s4.e << endl;
     cout << sizeof(M) <<" " 
          << sizeof(S) << " "
          << sizeof(S1) << " "
          << sizeof(S2) << " " 
          << sizeof(S3) << " "
          << sizeof(S4) << endl;
     
     system("pause");
     return 0;
}

/*
 程序运行结果是：
 1 -1 -2 3
 4 4 1 8 12 4
 1、当打印S4的各个位段时，打印的结果与赋的初值不同
 2、由于c只占一位，那么没有数据位，此时进行符号扩展直接在高位添加1，
    所以打印结果为-1。
 3、由于d占2位， 所以当将2赋给d时，内存存储的内容为10，此时进行符号位扩展，
    高位补1，则为0XFF FF FF FE，那么其真值为-2。*/ 

