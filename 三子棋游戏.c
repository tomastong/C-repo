#include<stdio.h>
void main()
{	/*依次为循环的9个位置、玩家、键入的位置（区号）、第几排、第几列、直线、赢家（有1和2）*/
	int i=0,player=0,go=0,row=0,column=0,line=0,winner=0;
	char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	/*该循环成功的话是以winner最终的取值1或2跳出循环，如果和棋的话是i=9不符合条件而退出循环*/
	for(i=0;i<9&&winner==0;i++)
	{
		/*输出初始棋盘，而后的输出每次落子后棋盘的格局，最后一次在下面输出*/
		printf("\n\n");
		printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);	
		/*以该方法来确定玩家1或2，恩，不错！*/
		player=i%2+1;
		/*该循环的执行必须出现玩家键入位置出错时，或棋盘字符有错*/
		do
		{
			printf("\nPlayer %d,please enter the number of the square where you want to place your %c:",player,(player==1)?'X':'O');
			scanf("%d",&go);
			/*由键入位置来确定在数组中的具体位置，不错！row先自减，再进行计算！*/
			row=--go/3;
			column=go%3;
		}while(go<0||go>9||board[row][column]>'9');
		/*以该方法来确定输入的是x或o，不赖！*/
		board[row][column]=(player==1)?'X':'O';
		/*检查一方是否获胜，if句中是判断斜线成立的情况，else则判断横纵成立情况*/
		if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
			winner=player;
		else
			for(line=0;line<=2;line++)
				if(board[line][0]==board[line][1]&&board[line][0]==board[line][2]||board[0][line]==board[1][line]&&board[0][line]==board[2][line])
			winner=player;
				/*该循环以winner最终的取值1或2跳出循环*/
	}
	printf("\n\n");
	/*输出最后落子后的棋盘格局*/
		printf(" %c | %c | %c\n",board[0][0],board[0][1],board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[1][0],board[1][1],board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n",board[2][0],board[2][1],board[2][2]);
		/*输出最后结果*/
		if(winner==0)
			printf("\nHow boring,it is a draw\n");
		else
			printf("\nCongratulations,player %d,YOU ARE WIN!\n",player);

}