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
	//����rand��srand������ʱ�������һ���������
	
	 ret = rand()%100+1;
	//rintf("%d \n", ret);
	

	while (1)
	{
		printf("���µ�����>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��������Ϸ��������>\n");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			break;
		}
	} while (input);
	
	

	return 0;

}