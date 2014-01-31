#include<stdio.h>
void main()
{
	struct student
	{
		int num;
		char name[20];
		float score;
	} student1,student2;   /*变量的声明，也可以在下方声明*/


	scanf("%d%s%f",&student1.num,student1.name,&student1.score);  /*如果用逗号输入格式时，会把逗号当成字符的，所以不用逗号输入格式*/
   	scanf("%d%s%f",&student2.num,student2.name,&student2.score);

	printf("The higher score is :\n");

	if (student1.score>student2.score)  /*进行比较时，切记变量名要写在前面且不可省略*/
		printf("%d  %s  %6.2f\n",student1.num,student1.name,student1.score);
	else if(student1.score<student2.score)
		printf("%d  %s  %6.2f\n",student2.num,student2.name,student2.score);
    else 
	{
        printf("%d  %s  %6.2f\n",student1.num,student1.name,student1.score);
        printf("%d  %s  %6.2f\n",student2.num,student2.name,student2.score);
	}


}