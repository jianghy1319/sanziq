



#include <stdio.h>

#include <windows.h>

#include <stdlib.h>  

#include <time.h>

#define ROW 3  //数组的行

#define COL 3  //数组的列

void game();

#pragma warning(disable:4996)  

void modeset(int w, int h) {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size = { w, h };
	SetConsoleScreenBufferSize(hOut, size);
	SMALL_RECT rc = { 1,1, w, h };
	SetConsoleWindowInfo(hOut, true, &rc);
	system("cls");
	return;
}


void menu()  //菜单

{
	


	printf("###############################\n");

	printf("############1.Play#############\n");

	printf("############2.Exit#############\n");

}

int main()

{
	
	modeset(33, 25);
	int c = 0;
printf("改进版三子棋小游戏\n\n游戏说明：\n双方拥有三枚棋子，下完三枚棋子后，\n按顺序依次拾起最初下的棋子继\n续游戏，当一方完成三连时获胜。\n\n");
	printf("操作方法:\n方向键移动棋子，“空格”键确定\n落子\n\n\n");
	do {                
		
       
		//颜色
		
		system("color E0");

		SetConsoleTitleA("改进版三子棋");
		menu();
		

		scanf_s("%d", &c);

		switch (c)         //用switch语句来实现进入游戏或者退出游戏



		{

		case 1:

			game();

			break;

		case 2:

			exit(0);

		default:

			printf("Select error!!!\n");

		}

	} while (1);


	system("pause");

	return 0;

}
