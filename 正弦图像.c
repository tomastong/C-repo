#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k;
	double x,y,s;
	s=2*3.14/40;
	for(x=0,i=1;i<=40;i++)
	{
		y=sin(x);
		k=(int)(40+30*y);        /*以第40列为x坐标，振幅扩大30倍*/
		for(j=1;j<k;j++)         /*填补sin(x)图形前的空格*/
		printf(" ");
        printf("*\n");         /*切记要换行，否则一塌糊涂*/
		x+=s;
		
	}
}