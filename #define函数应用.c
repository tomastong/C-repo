#include<stdio.h>
#define PI 3.14159
#define L(r) PI*2*(r)         /*编译预处理，直接定义，好棒！！！*/
#define S(r) PI*(r)*(r)
void main()
{
	double area,circle,radius;     
	printf("请输入半径：\n");
    scanf("%lf",&radius);        /*在输入格式改变时，相应也改变*/
	circle=L(radius);
	area=S(radius);
	printf("circle is:\n %.5lf\narea is:\n %.5lf\n",circle,area); /*在输入格式改变时，相应也改变*/
   
}