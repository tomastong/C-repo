#include<stdio.h>
#include<math.h>
void main()
{
	int a,i;
	for(i=34;i<100;i++)
	{
		a=i*i-1111;
		/*该方法挺好，这样就可以知道是不是整数*/
        if(sqrt(a)-(int)sqrt(a)==0)
			printf("该四位数是%d\n",i*i);
	}
	
}
