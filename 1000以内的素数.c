#include<stdio.h>
#include<math.h>
void main()
{
	int m,i,k,n=0;
    for(m=1;m<=1000;m++)
    {
		k=(int)sqrt(m);
	    for(i=2;i<=k;i++)
		if(m%i==0)
		    break;
		if(i>k)
			 {
				 printf("%-5d",m);
			     n++;
			     if(n%8==0)        /*最需要注意的是计数器，一定写在循环里面*/
				 printf("\n");
			  }
    }
    printf("\n");
}