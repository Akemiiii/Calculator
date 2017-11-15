#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"head.h"
#define MAX 1000

int main(void)
{
	char S[MAX];   //���Ŵ������飨ջ��
	char output[MAX]; //�������
	int size = 0;  //ջ�Ĵ�С
	char ch; 
	int number;
	int index = 0;
	int a = 0;
	while (ch = getchar()) //����
	{
		if (ch != '\n')
		{
			if (ch >= '0'&& ch <= '9') //����Ϊ����
			{
				output[a] = ch;
				a++;
			}
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/')      //����Ϊ+-*/
			{
				while (size != 0)
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Push(S, &size, &ch);
			}
			if (ch == '(')  //����Ϊ��
			{
				while (Top(S, &size) != '+' || Top(S, &size) != '-' || Top(S, &size) != '*' || Top(S, &size) != '/')
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Push(S, &size, &ch);
			}
			if (ch == ')')  //����Ϊ��
			{
				while (Top(S, &size) != '(')
				{
					output[a] = Top(S, &size);
					a++;
					Pop(&size);
				}
				Pop(&size);
			}
		}
		else
			break;
	}
	for (int k = 0; k < strlen(output); k++) //���
		printf_s("%c", output[k]);
	system("pause");
	return 0;
}
