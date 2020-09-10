
#include <stdio.h>

#include <windows.h>

#include <stdlib.h>  

#include <time.h>
#include<conio.h>

#define ROW 3  //数组的行

#define COL 3  //数组的列


void game();

int c, d;
int p, q;

int a[100];
int b[100];
int m[100];
int n[100];



#pragma warning(disable:4996)  

static void displayBoard1(char board2[][COL], int row)   //用来显示棋盘的函数

{
	system("CLS");     //继续清屏操作，使面板整洁

	int i = 0;



	for (; i < row; i++)

	{

		printf(" %c | %c | %c \n", board2[i][0], board2[i][1], board2[i][2]);


		if (i < row - 1)

		{

			printf("---|---|---\n");

		}

	}
}


	

static void displayBoard(char board[][COL], int row)   //用来显示棋盘的函数

{
	system("CLS");          //清屏操作


	int i = 0;

	for (; i < row; i++)

	{

		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);

		if (i < row - 1)

		{

			printf("---|---|---\n");

		}

	}

}

static void playerMove(char board[][COL], int row)    //玩家放棋子函数

{
	int e;
	

	do {

		

		

		if (p >=0 && p <3 && q >= 0 && q < 3)  //防止棋子落入棋盘外

		{

			if (board[p][q ] == ' ')       //判断数组（棋盘）是否为空

			{

				board[p ][q ] = 'o'; //以o来表示玩家的棋子
				a[c] = p;
				b[c] = q;

				break;

			}

			

		}

		else

		{

			printf("Please Enter Right Place\n");

		}

	} while (1);

}

static void compMove(char board[][COL], int row)  

{

	
	int e,k;
	e = 1; k = 1;
	if (board[0][0]=='x' && board[1][1] == 'x'&&board[2][2]==' ')
	{
		board[2][2] = 'x'; 
		
	}
	else if (board[0][0] == 'x' && board[2][2] == 'x'&&board[1][1]==' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][2] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	else if (board[0][1] == 'x' && board[0][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][0] == 'x' && board[1][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[1][2] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}

	else if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[2][0] == 'x' && board[2][2] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[2][1] == 'x' && board[2][2] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}

	else if (board[1][1] == 'x' && board[0][1] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[0][1] == 'x' && board[2][1] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][1] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}

	else if (board[1][0] == 'x' && board[0][0] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][0] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}
	else if (board[1][0] == 'x' && board[2][0] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][2] == 'x' && board[0][2] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][2] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][2] == 'x' && board[2][2] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}

	else if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == ' ')
	{
		board[3][1] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][0] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	

	else {
		while (e==1) {

			int x = rand() % ROW;   

			int y = rand() % COL;   



			if (board[x][y] == ' ')  

			{

				if (d <= 2)
				
				{

					board[x][y] = 'x';   //用x表示电脑棋子
					m[d] = x;
					n[d] = y;
					break;

				}
				else

				{
					
						 if (board[x +1][y +1] == 'o' && board[x + 2][y + 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						else if (board[x - 1][y - 1] == 'o' && board[x + 1][y + 1] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y - 1] == 'o' && board[x - 2][y - 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y + 1] == 'o' && board[x][y + 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y - 1] == 'o' && board[x][y - 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x][y + 1] == 'o' && board[x][y - 1] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y] == 'o' && board[x + 2][y] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y] == 'o' && board[x - 1][y] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y] == 'o' && board[x - 2][y] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x - 1][y + 1] == 'o' && board[x - 2][y + 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y - 1] == 'o' && board[x + 2][y - 2] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						 else if (board[x + 1][y - 1] == 'o' && board[x - 1][y + 1] == 'o')
						{
							board[x][y] = 'x';   //用x表示电脑棋子
							m[d] = x;
							n[d] = y; e = 0;
							break;
						}
						
						 k = k + 1;
						 if (k >50) //难度
						 {
							 board[x][y] = 'x';   //用x表示电脑棋子
							 m[d] = x;
							 n[d] = y; 
							
							 e = 0;
						 }
						
						

					
				}









				



			}




		} 
	}
	

}
static void compMove2(char board[][COL], int row)  //电脑移动

{

	srand((unsigned long)time(NULL));    //产生一个随机数

	if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][2] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}
	else if (board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}
	else if (board[0][1] == 'x' && board[0][2] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][0] == 'x' && board[1][2] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[1][2] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}

	else if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[2][0] == 'x' && board[2][2] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[2][1] == 'x' && board[2][2] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}

	else if (board[1][1] == 'x' && board[0][1] == 'x' && board[2][1] == ' ')
	{
		board[2][1] = 'x';

	}
	else if (board[0][1] == 'x' && board[2][1] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[1][1] == 'x' && board[2][1] == 'x' && board[0][1] == ' ')
	{
		board[0][1] = 'x';

	}

	else if (board[1][0] == 'x' && board[0][0] == 'x' && board[2][0] == ' ')
	{
		board[2][0] = 'x';

	}
	else if (board[0][0] == 'x' && board[2][0] == 'x' && board[1][0] == ' ')
	{
		board[1][0] = 'x';

	}
	else if (board[1][0] == 'x' && board[2][0] == 'x' && board[0][0] == ' ')
	{
		board[0][0] = 'x';

	}

	else if (board[1][2] == 'x' && board[0][2] == 'x' && board[2][2] == ' ')
	{
		board[2][2] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][2] == 'x' && board[1][2] == ' ')
	{
		board[1][2] = 'x';

	}
	else if (board[1][2] == 'x' && board[2][2] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}

	else if (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == ' ')
	{
		board[3][1] = 'x';

	}
	else if (board[0][2] == 'x' && board[2][0] == 'x' && board[1][1] == ' ')
	{
		board[1][1] = 'x';

	}
	else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == ' ')
	{
		board[0][2] = 'x';

	}


	else {
		while (1) {

			int x = rand() % ROW;   //使随机数在坐标范围内

			int y = rand() % COL;   //使随机数在坐标范围内



			if (board[x][y] == ' ')  //判断此位置是否已经被占 位置是否合理

			{

				if (d <= 2)

				{

					board[x][y] = 'x';   //用x表示电脑棋子
					m[d] = x;
					n[d] = y;
					break;

				}
				else

				{

					if (board[x + 1][y + 1] == 'o' && board[x + 2][y + 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y - 1] == 'o' && board[x + 1][y + 1] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y - 1] == 'o' && board[x - 2][y - 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y + 1] == 'o' && board[x][y + 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y - 1] == 'o' && board[x][y - 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x][y + 1] == 'o' && board[x][y - 1] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y] == 'o' && board[x + 2][y] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y] == 'o' && board[x - 1][y] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y] == 'o' && board[x - 2][y] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x - 1][y + 1] == 'o' && board[x - 2][y + 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y - 1] == 'o' && board[x + 2][y - 2] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}
					if (board[x + 1][y - 1] == 'o' && board[x - 1][y + 1] == 'o')
					{
						board[x][y] = 'x';   //用x表示电脑棋子
						m[d] = x;
						n[d] = y;
						break;
					}





				}













			}




		}
	}


}


static void del1 (char board[][COL], int row) //删除棋子
{
	

		if (c >= 4)
		{
			
			board[a[c - 3]][b[c - 3]] = ' ';
			

		}
		




}
static void del2(char board[][COL], int row) //删除棋子
{
	

		if ( d>=4)
		{
			board[m[d -3]][n[d -3]] = ' ';
			
		


		}
		




}



static char isWin(char board[][COL], int row)   //判断是否赢了的函数

{

	int i = 0;

	for (; i < ROW; i++)   //判断行是否够三个

	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')

		{

			return board[i][0];   //返回够三个的棋子

		}

	}
	 i = 0;

	for (; i < 3; i++)   //判断列是否够三个

	{

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')

		{

			return board[1][i];

		}

	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')  //判断右对角线是否够三个

	{

		return board[0][0];

	}

	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')   //判断左对角线是否够三个

	{

		return board[2][0];

	}

	

	return ' ';

}







void game()

{
	c = 1;
	d = 1;

	
	char board[ROW][COL]; char board2[ROW][COL];

	memset(board, ' ', ROW * COL);   //将数组全部初始化为空格

	char ret;

	do {
		
		displayBoard(board, COL);  //继续显示棋盘
        compMove(board, COL);
		del2(board, COL);
		displayBoard(board, COL);  //继续显示棋盘
		 ret = isWin(board, COL);
		if (ret != ' ')
		{
			break;
		}
		
			p = 1;
			q = 1;
			int abc[5][5];
			int j, k;
			abc[p][q] = board[1][1];

        j = 0;
		while (j==0)
		{
			board[p][q] = '+';
			displayBoard(board, COL);  //继续显示棋盘
			board[p][q] =abc[p][q] ;
			char ch = getch();
			switch (ch)
			{
				abc[p][q] = board[p][q];
			case 27://esc
				exit(0);
			case 72://上
					  p--;
					  if (p < 0)p = 2;
					 abc[p][q] = board[p][q];  
					break;
			case 80://xia
				p++;
				if (p >2)p = 0;
				abc[p][q] = board[p][q];
				break;
			case 75://zuo
				q--;
				if (q < 0)q = 2;
				abc[p][q] = board[p][q];
				break;
			case 77://you
				q++;
				if (q > 2)q = 0;
				abc[p][q] = board[p][q];
				break;
			case 32://空格
				if (board[p][q] == ' ')
				{
					board[p][q] = 'o'; 
					a[c] = p;
					b[c] = q;
					j = 1;
						
					
				}
				else {
					j = 0;
				}
				break;
					

			}
			
			
		}
		
		 del1(board, COL);
		
	
		ret = isWin(board, COL);    //是否产生结果

		if (ret != ' ')
		{
			break;
		}


		displayBoard(board, COL);
		d = d + 1;
		c = c + 1;
		

	} while (ret == ' ');

	if (ret == 'o')    //返回值为o则表示玩家赢了

	{

		printf("nice,you win\n");

	}

	else if (ret == 'x')   //返回值为x则表示电脑赢了

	{
		
		printf("you lose,try again\n");

	}


}