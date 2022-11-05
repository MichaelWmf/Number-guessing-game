#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<time.h>
#include <stdio.h>

void  muen()
{
	printf("******************************\n");
	printf("****  1, play    0,exit  *****\n");
	printf("******************************\n");
}

void game()
{
	int guess = 0;
	int ret = 0;
	//利用rand、srand函数、时间戳生成一个随机数：
	
	 ret = rand()%100+1;
	//rintf("%d \n", ret);
	

	while (1)
	{
		printf("您猜的数：>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
	

}

int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		
		muen();
		printf("猜数字游戏，请输入>\n");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			break;
		}
	} while (input);
	
	

	return 0;

}