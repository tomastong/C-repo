#include<stdio.h>
void main()
{/*在这里，设的是abc分别是大中小马
	所扛的包数，而a/3，b/2，2*c才是马的数目*/
	int a,b,c,n=0;     
	for(a=0;a<=100;a+=3) /*大马的包一次必须是多3个*/
		for(b=0;b<=100-a;b+=2)/*中马的包一次必须是多2个*/
			{
                c=100-a-b;			
				if(a/3+b/2+2*c==100)
				{
					n++;/*n用来统计可能符合的种数*/
				    printf("big=%d,mid=%d,lit=%d\n",a/3,b/2,c*2);
				}
			}
		printf("n=%d\n",n);
}