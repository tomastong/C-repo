#include<stdio.h>
#define n 21
/*num域存放每一个人的编号，next指示下一个人的编号*/
struct person
{
	int num;
	int next;
}link[n+1];
/*这里之所以用link[22],  其实只有link[0]到link[21],而link[0]根本没有用*/
void main()
{
	int i,count,h;
	/*为每一个人编号，且让next域存放相邻的人的编号*/
	for(i=1;i<=n;i++)
	{
		if(i==n)
			link[i].next=1;
		else
			link[i].next=i+1;
		link[i].num=i;
	}
	printf("\n");
	count=0;
	h=n;
	/*输出每次退出人的编号*/
	printf("sequence that persons leave the circle:\n");
	/*当退出的人少于n-1时，继续报数*/
	while(count<n-1)
	{
		i=0;
		/*i表示报的数，h存放每次报数人所到的位置*/
		while(i!=3)
		{
			h=link[h].next;
			if(link[h].num)
				i++;
		}
		/*输出当前报数到3该退出的人的编号*/
		printf("%4d",link[h].num);
		/*将退出的人编号置0，为下面判断for循环输出不为0编号的做铺垫*/
		link[h].num=0;
		count++;/*存放退出人的个数*/
	}
	printf("\nthe last one is:");
	for(i=1;i<=n;i++)
		/*由于上面已将退出人编号置0，故只有num域不为0的时剩下的*/
      if(link[i].num)
		 printf("%3d",link[i].num);
	 printf("\n");
}
