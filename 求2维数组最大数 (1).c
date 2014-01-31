#include<stdio.h>
void main()
{int i,j,a[5][5],max=0;
    for(i=0;i<5;i++)
	{printf("请输入第%d组数\n",i+1);
       for(j=0;j<4;j++)
	   { scanf("%d",&a[i][j]);
             if(a[i][4]<a[i][j])
				 a[i][4]=a[i][j];
	   }
	}
     for(i=0;i<4;i++)
	  if(a[i][4]<a[i+1][4])
			 max=a[i+1][4];
		 printf("the biggest number is:\n %d\n",max);
	 
}