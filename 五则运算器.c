#include<stdio.h>
void main()
{
	double number1=0.0;  /*第一个操作数*/
	double number2=0.0;  /*第二个操作数*/
	char operation=0;   /*操作运算符*/
	printf("Enter the calulation\n");
	scanf("%lf%c%lf",&number1,&operation,&number2);
	switch(operation)
	{
		case '+':printf("=%lf\n",number1+number2);
			break;
		case '-':printf("=%lf\n",number1-number2);
		    break;
		case '*':printf("=%lf\n",number1*number2);
			break;
		case '/':if(number2==0)
					 printf("\n\n\aDivision by zero error!");
			     else
					 printf("=%lf\n",number1/number2);
				 break;
		case '%':if((long)number2==0)
					 printf("\n\n\aDivision by zero error!");
				 else 
				     printf("=%ld\n",(long)number1%(long)number2);  /*该处应注意输出格式为长整型*/
				 break;
		default:printf("\n\n\aIllegal operation!");
	}
	printf("\n");
}