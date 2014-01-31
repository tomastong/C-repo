#include<stdio.h>
void main()
{int m,i=1,j=1;
   for(m=1;m<=100;m++)
   {
      if(i==j)
	  {
	  i=1;
	  j++;printf("\n");
	  }
	  if(i<j)
		  i++;
	  printf(" %d ",m);
   }
printf("\n");
}