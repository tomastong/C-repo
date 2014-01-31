#include<stdio.h>
int is_leap_year(int year)
{
	int leap;
	if(year%4==0&&year%100!=0||year%400==0)          
		leap=1;
	else
		leap=0;
	return(leap);
}
int len_of_month(int year,int month)
{
	int month_days;
	if(month==2)
	{
		if(is_leap_year(year))          /*若调用某个函数，条件为真！直接引用下立即可，如右语句！！*/
			month_days=29;
		else
			month_days=28;
	}
	else if(month==4||month==6||month==9||month==11) /*此题好，好在多次调用函数，最后只用到最后定义的函数！层层嵌套，方法很好哦！*/
		month_days=30;
	else 
		month_days=31;
	return(month_days);

}
int len_of_days(int year,int month,int date)
{
	int total_days,n;
	for(n=1,total_days=0;n<=month;n++)
	total_days+=len_of_month(year,n);
	total_days+=date;
	return(total_days);
}

void main()
{
	int year,month,date,days;
	printf("please input year,month,date:");
	scanf("%d,%d,%d",&year,&month,&date);
	days=len_of_days(year,month,date);
	printf("%d/%d/%d is the %d in %d\n",year,month,date,days,year);
}