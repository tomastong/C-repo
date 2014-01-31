#include<stdio.h>
void main()
{
    int i,j,a[10][10]= {0};
    for(i=0; i<10; i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1; j<=i; j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0; i<10; i++)

    {
        for(j=0; j<=i; j++)
            printf("%-d  ",a[i][j]);
        printf("\n");
    }
}

/*在给a[10][10]赋初值时，应该定义其他都为0*/
/*本题需要注意的是求值a[i][j]和输出a[i][j]尽量分开写，有点繁冗，但是不会错*/
