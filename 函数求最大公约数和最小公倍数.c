#include<stdio.h>
int zdg(int x,int y)
{
    int c;
    while(x%y!=0)             /*建议有的时候用 while(x%y!=0) 函数要比for语句好使，当然可以转换*/
    {
        c=x%y;
        x=y;
        y=c;
    }
    return(y);

}
int zxg(int x,int y)
{
    int p;
    p=zdg(x,y);               /*主要强调这里调用函数时，用的是不是形式参数，是真参数*/
    p=(x*y)/p;
    return(p);
}



void main()
{
    int m,n,l,q;
    printf("请输入两个数:\n");
    scanf("%d,%d",&m,&n);
    l=zdg(m,n);
    printf("最大公约数是%d\n",l);
    q=zxg(m,n);
    printf("最小公倍数是:%d\n",q);
}




